// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTFETCHPERIODS_H
#define PKACCOUNTFETCHPERIODS_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountFetchPeriods : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat accountFetchPeriod; // ivar: _accountFetchPeriod
@property (copy, nonatomic) NSSet *blockedEndpoints; // ivar: _blockedEndpoints
@property (nonatomic) CGFloat extendedAccountFetchPeriod; // ivar: _extendedAccountFetchPeriod
@property (nonatomic) CGFloat financingPlansFetchPeriod; // ivar: _financingPlansFetchPeriod
@property (nonatomic) CGFloat fundingSourcesFetchPeriod; // ivar: _fundingSourcesFetchPeriod
@property (nonatomic) CGFloat sharedCloudStoreModelFetchPeriod; // ivar: _sharedCloudStoreModelFetchPeriod
@property (nonatomic) CGFloat usersFetchPeriod; // ivar: _usersFetchPeriod


+(BOOL)isLastUpdatedOutOfDate:(id)arg0 fetchPeriod:(CGFloat)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)endpointIsBlocked:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountFetchPeriods:(id)arg0 ;
-(CGFloat)fetchPeriodForEndpoint:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif