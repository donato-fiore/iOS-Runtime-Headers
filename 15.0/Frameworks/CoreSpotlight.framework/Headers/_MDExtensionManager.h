// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MDEXTENSIONMANAGER_H
#define _MDEXTENSIONMANAGER_H

@class NSMutableDictionary, NSMutableSet, NSString, NSCondition, NSDictionary;
@protocol CSIndexExtensionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MDExtensionLoader.h"

@interface _MDExtensionManager : NSObject <CSIndexExtensionDelegate>

 {
    NSMutableDictionary *_fileTypeToExtensionMapping;
    NSMutableSet *_fileTypeNegativeCache;
    NSUInteger _lastLoadCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MDExtensionLoader *extensionLoader; // ivar: _extensionLoader
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionManagerQueue; // ivar: _extensionManagerQueue
@property (retain, nonatomic) NSCondition *extensionsCondition; // ivar: _extensionsCondition
@property (retain, nonatomic) NSDictionary *fileProviderBundleMap; // ivar: _fileProviderBundleMap
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *indexExtensionsByBundleID; // ivar: _indexExtensionsByBundleID
@property (nonatomic) NSInteger loaderCallbackCount; // ivar: _loaderCallbackCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)allExtensionsWithBlock:(id)arg0 ;
-(id)anyExtensionWithBlock:(id)arg0 ;
-(id)extensionForFileType:(id)arg0 ;
-(id)extensions;
-(id)initWithQueueName:(char *)arg0 ;
-(void)_didRetryJobWithBundleID:(id)arg0 ;
-(void)_notifyForLoadedExtensions;
-(void)_performJob:(id)arg0 extensions:(id)arg1 count:(NSUInteger)arg2 throttle:(id)arg3 perExtensionCompletionHandler:(id)arg4 ;
// -(void)_performJob:(id)arg0 extensions:(id)arg1 perExtensionCompletionHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_waitForLoadLocked;
-(void)_willRunJobWithBundleID:(id)arg0 ;
-(void)findExtensionsWithCompletionBlock:(id)arg0 ;
-(void)indexRequestsPerformDataJob:(id)arg0 forBundle:(id)arg1 completionHandler:(id)arg2 ;
// -(void)indexRequestsPerformJob:(id)arg0 extensions:(id)arg1 perExtensionCompletionHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)indexRequestsPerformJob:(id)arg0 forBundle:(id)arg1 completionHandler:(id)arg2 ;
// -(void)indexRequestsPerformJob:(id)arg0 perExtensionCompletionHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)loadExtensions;


@end


#endif