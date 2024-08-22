// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISURLBAGLOADINGCONTROLLER_H
#define ISURLBAGLOADINGCONTROLLER_H

@class NSDictionary, NSMutableArray, NSError, NSHashTable, SSURLBag;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISURLBagLoadingController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _hasSuccessfullyLoadedBag;
    NSDictionary *_bagDictionary;
    NSMutableArray *_bagAccessRequestBlocks;
    NSError *_bagLoadingError;
    NSHashTable *_bagObservers;
    SSURLBag *_URLBag;
}


@property (readonly, nonatomic) NSDictionary *bagDictionary;
@property (readonly, nonatomic, getter=isLoadingBag) BOOL loadingBag; // ivar: _loadingBag


+(id)sharedBagLoadingController;
-(id)init;
-(void)_didCompleteLoadingBagDictionary:(id)arg0 withError:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg0 ;
-(void)_handleStoreFrontDidChangeNotification:(id)arg0 ;
-(void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(BOOL)arg0 ;
-(void)_updateBagWithDictionary:(id)arg0 error:(id)arg1 ;
-(void)addBagObserver:(id)arg0 ;
-(void)dealloc;
-(void)reloadBag;
-(void)removeBagObserver:(id)arg0 ;
-(void)requestAccessToBagUsingBlock:(id)arg0 ;


@end


#endif