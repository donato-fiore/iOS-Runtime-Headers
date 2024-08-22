// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTWATCHKITAPPLIST_H
#define BLTWATCHKITAPPLIST_H

@class NSDictionary, NSMutableArray, NSString;
@protocol BLTDebugObserverWatchKitAppList, BLTWatchKitAppListDelegate;

#import <Foundation/Foundation.h>


@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList>

 {
    NSDictionary *_appsByAppBundleID;
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    BOOL _loading;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTWatchKitAppListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isLoaded) BOOL loaded; // ivar: _loaded
@property (readonly) Class superclass;


-(id)init;
-(id)watchKitAppDefinitionWithBundleID:(id)arg0 ;
-(void)_fetchWatchKitInfo;
-(void)_fetchWatchKitInfoWithForce:(BOOL)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)fetchWatchKitInfoWithCompletion:(id)arg0 ;


@end


#endif