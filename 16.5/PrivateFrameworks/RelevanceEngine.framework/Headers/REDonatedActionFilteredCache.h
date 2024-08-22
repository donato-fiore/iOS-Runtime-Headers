// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDONATEDACTIONFILTEREDCACHE_H
#define REDONATEDACTIONFILTEREDCACHE_H

@class NSMapTable, NSDate, NSString;
@protocol REDonatedActionStoreObserver, OS_dispatch_queue, REDonatedActionFilteredCacheDelegate;

#import <Foundation/Foundation.h>


@interface REDonatedActionFilteredCache : NSObject <REDonatedActionStoreObserver>

 {
    NSMapTable *_countsByActionType;
    NSMapTable *_countPerformedTodayByActionType;
    NSMapTable *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_firstDonationDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REDonatedActionFilteredCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_queue_performedCountForDonation:(id)arg0 ;
-(NSUInteger)_queue_performedTodayCountForBundleIdentifer:(id)arg0 actionIdentifier:(NSUInteger)arg1 ;
-(id)_keyForAction:(id)arg0 ;
-(id)init;
-(void)_queue_incrementPerformedCountForDonation:(id)arg0 ;
-(void)_queue_removeAllData;
-(void)_queue_removeDonation:(id)arg0 ;
-(void)_queue_removeDonationsForBundleIdentifier:(id)arg0 ;
-(void)_queue_storeDonation:(id)arg0 ;
-(void)_refreshAllDonations:(id)arg0 ;
-(void)dealloc;
-(void)donationActionStoreReceivedDonation:(id)arg0 isNewDonation:(BOOL)arg1 ;
-(void)donationActionStoreRemoveAllDonations;
-(void)donationActionStoreRemovedDonation:(id)arg0 ;
-(void)donationActionStoreRemovedDonationsFor:(id)arg0 ;
// -(void)fetchAllUniqueActions:(id)arg0 completion:(unk)arg1  ;
-(void)fetchCountForAction:(id)arg0 usingBlock:(id)arg1 ;
-(void)fetchDonationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchFirstPerformedActionDate:(id)arg0 ;
-(void)fetchPerformedCountForAction:(id)arg0 usingBlock:(id)arg1 ;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg0 actionIdentifier:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)reset;


@end


#endif