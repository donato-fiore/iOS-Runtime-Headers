// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDEVICEOFFERSSTORE_H
#define AMSDEVICEOFFERSSTORE_H

@class NSArray, NSString, NSDictionary;
@protocol AMSDeviceOffersTracking;

#import <Foundation/Foundation.h>


@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>



@property (retain, nonatomic) NSArray *cachedRegistrationGroups;
@property (readonly, nonatomic) NSArray *companionSerialNumbers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *deviceOfferEligibility;
@property (retain, nonatomic) NSArray *deviceOffers;
@property (retain, nonatomic) NSArray *deviceRegistrationBlacklist;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serialsBySubtractingAGroups:(id)arg0 fromBGroups:(id)arg1 ;
+(id)serialsFromGroups:(id)arg0 ;
+(id)splitGroups:(id)arg0 byItem:(id)arg1 ;
-(void)_dbSetNullableValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(void)removeCachedRegistrationItem:(id)arg0 ;


@end


#endif