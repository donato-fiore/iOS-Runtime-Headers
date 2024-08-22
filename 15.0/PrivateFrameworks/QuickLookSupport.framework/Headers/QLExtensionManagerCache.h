// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLEXTENSIONMANAGERCACHE_H
#define QLEXTENSIONMANAGERCACHE_H

@class NSDictionary, NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface QLExtensionManagerCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessMatchingExtensionsQueue;
    NSObject<OS_dispatch_queue> *_waitForExtensionListQueue;
}


@property (nonatomic) BOOL isMatchingExtensions; // ivar: _isMatchingExtensions
@property (retain, nonatomic) NSDictionary *matchingAttributes; // ivar: _matchingAttributes
@property (retain, nonatomic) id *matchingContext; // ivar: _matchingContext
@property (retain, nonatomic) NSMutableDictionary *matchingExtensions; // ivar: _matchingExtensions
@property (retain, nonatomic) NSMapTable *qlExtensions; // ivar: _qlExtensions
@property (retain) NSObject<OS_dispatch_semaphore> *waitForExtensionsSemaphore; // ivar: _waitForExtensionsSemaphore


+(id)bestMatchingExtensionsFromSupportingExtensions:(id)arg0 includingExtensionsWithSupportingParentTypes:(BOOL)arg1 byContentType:(id)arg2 ;
-(BOOL)_supportedContentTypesFromExtension:(id)arg0 matches:(id)arg1 allowMatchingWithParentTypes:(BOOL)arg2 ;
-(BOOL)hasExtensionWithMatchingAttributes:(id)arg0 ;
-(id)extensionWithMatchingAttributes:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 extensionPath:(id)arg2 ;
-(id)extensionWithMatchingAttributes:(id)arg0 allowExtensionsForParentTypes:(BOOL)arg1 extensionPath:(id)arg2 firstPartyExtension:(BOOL)arg3 ;
-(id)initWithMatchingAttributes:(id)arg0 ;
-(void)_didReceiveNewMatchingExtensionList:(id)arg0 ;
-(void)_synchronouslyWaitForExtensionListIfNeeded;
-(void)beginMatchingExtensions;
-(void)dealloc;
-(void)endMatchingExtensions;


@end


#endif