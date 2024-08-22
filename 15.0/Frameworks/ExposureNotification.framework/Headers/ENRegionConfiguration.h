// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENREGIONCONFIGURATION_H
#define ENREGIONCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ENUserAuthorization.h"
#import "ENRegion.h"
#import "ENRegionUserConsent.h"

@interface ENRegionConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger consent; // ivar: _consent
@property (readonly, nonatomic) CGFloat consentTimestamp; // ivar: _consentTimestamp
@property (nonatomic) CGFloat creationDateTimeInterval; // ivar: _creationDateTimeInterval
@property (retain, nonatomic) ENUserAuthorization *diagnosisKeysPreAuthorization; // ivar: _diagnosisKeysPreAuthorization
@property (readonly, nonatomic) NSInteger differentialPrivacyConsent; // ivar: _differentialPrivacyConsent
@property (readonly, nonatomic) CGFloat differentialPrivacyConsentTimestamp; // ivar: _differentialPrivacyConsentTimestamp
@property (nonatomic) NSUInteger enRampMode; // ivar: _enRampMode
@property (nonatomic) NSUInteger enVersion; // ivar: _enVersion
@property (nonatomic) BOOL everStartedOnboarding; // ivar: _everStartedOnboarding
@property (nonatomic) CGFloat lastConfigurationUpdateTimeInterval; // ivar: _lastConfigurationUpdateTimeInterval
@property (retain, nonatomic) ENRegion *region; // ivar: _region
@property (nonatomic) NSInteger travelerModeEnabled; // ivar: _travelerModeEnabled
@property (retain, nonatomic) ENRegionUserConsent *userConsent; // ivar: _userConsent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 region:(id)arg1 ;
-(id)updatedWithConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif