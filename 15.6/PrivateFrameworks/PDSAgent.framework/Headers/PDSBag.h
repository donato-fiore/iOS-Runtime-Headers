// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSBAG_H
#define PDSBAG_H

@class IDSServerBag, NSNumber, NSArray;



@interface PDSBag : IDSServerBag

@property (readonly, nonatomic) BOOL allRequiredBagCoalescingValuesPresent;
@property (readonly, nonatomic) BOOL allRequiredBagTTLValuesPresent;
@property (readonly, nonatomic) BOOL bagKillSwitchActive;
@property (readonly, nonatomic) CGFloat coalesceDelayFromBag;
@property (readonly, nonatomic) CGFloat coalesceMaxPeriodFromBag;
@property (readonly, nonatomic) CGFloat coalescePeriodFromBag;
@property (readonly, nonatomic) CGFloat messageTimeoutFromBag;
@property (readonly, nonatomic) NSNumber *minEnabledVersion;
@property (readonly, nonatomic) NSArray *nonCoalescingTopicsFromBag;
@property (readonly, nonatomic) NSInteger ttlFromBag;
@property (readonly, nonatomic) NSInteger ttlGracePeriodFromBag;
@property (readonly, nonatomic) NSInteger ttlWindowFromBag;


-(BOOL)_valuesDefinedAsNumbersInBagForKeys:(id)arg0 ;
-(BOOL)topicAvoidsCoalescing:(id)arg0 ;
-(NSInteger)ttlFromDefault;
-(NSInteger)ttlGracePeriodFromDefault;
-(NSInteger)ttlWindowFromDefault;
-(NSUInteger)_bagDomain;
-(id)init;
-(void)_bagExternallyReloaded;


@end


#endif