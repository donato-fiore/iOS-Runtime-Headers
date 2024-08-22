// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALACCOUNT_H
#define HKCLINICALACCOUNT_H

@class NSString, NSNumber, NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding, HKClinicalBrandable;

#import <Foundation/Foundation.h>

#import "HKClinicalBrand.h"
#import "HKClinicalSharingStatus.h"
#import "HKClinicalGateway.h"
#import "HKClinicalAccountProvenance.h"

@interface HKClinicalAccount : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>



@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, copy, nonatomic) HKClinicalSharingStatus *clinicalSharingStatus; // ivar: _clinicalSharingStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *failedFetchAttemptsCount; // ivar: _failedFetchAttemptsCount
@property (readonly, copy, nonatomic) HKClinicalGateway *gateway;
@property (readonly, nonatomic) BOOL hasClinicalSharingScopes; // ivar: _hasClinicalSharingScopes
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *lastFailedFetchDate; // ivar: _lastFailedFetchDate
@property (readonly, copy, nonatomic) NSDate *lastFetchDate; // ivar: _lastFetchDate
@property (readonly, copy, nonatomic) NSDate *lastFullFetchDate; // ivar: _lastFullFetchDate
@property (readonly, nonatomic) BOOL needsRelogin;
@property (readonly, nonatomic) BOOL needsScopeUpgrade;
@property (readonly, copy, nonatomic) HKClinicalAccountProvenance *provenance; // ivar: _provenance
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isUserEnabled) BOOL userEnabled; // ivar: _userEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 state:(NSInteger)arg1 userEnabled:(BOOL)arg2 lastFetchDate:(id)arg3 lastFullFetchDate:(id)arg4 lastFailedFetchDate:(id)arg5 failedFetchAttemptsCount:(id)arg6 clinicalSharingStatus:(id)arg7 hasClinicalSharingScopes:(BOOL)arg8 provenance:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif