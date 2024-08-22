// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUNASSOCIATEDMEDIAACCESSORY_H
#define HMDUNASSOCIATEDMEDIAACCESSORY_H

@class NSString;
@protocol HMFLogging;


#import "HMDUnassociatedAccessory.h"
#import "HMDAccessoryAdvertisement.h"

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging>



@property (retain) HMDAccessoryAdvertisement *advertisement; // ivar: _advertisement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)modelForChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHAPAirPlay2Accessory;
-(NSInteger)associationOptions;
-(NSUInteger)transportTypes;
-(id)addTransactionForHome:(id)arg0 configurationAppIdentifier:(id)arg1 ;
-(id)dumpDescription;
-(id)initWithAdvertisement:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 messageDispatcher:(id)arg3 ;
-(id)logIdentifier;
-(void)updateAdvertisementData:(id)arg0 ;


@end


#endif