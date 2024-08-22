// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPASSWORDPOLICYPAYLOAD_H
#define MCPASSWORDPOLICYPAYLOAD_H

@class NSNumber;


#import "MCPayload.h"

@interface MCPasswordPolicyPayload : MCPayload

@property (readonly, retain, nonatomic) NSNumber *isAlphanumericPasscodeRequired; // ivar: _isAlphanumericPasscodeRequired
@property (readonly, retain, nonatomic) NSNumber *isManualFetchingWhenRoaming; // ivar: _isManualFetchingWhenRoaming
@property (readonly, retain, nonatomic) NSNumber *isPasscodeRequired; // ivar: _isPasscodeRequired
@property (readonly, retain, nonatomic) NSNumber *isSimplePasscodeAllowed; // ivar: _isSimplePasscodeAllowed
@property (readonly, retain, nonatomic) NSNumber *maxFailedAttempts; // ivar: _maxFailedAttempts
@property (readonly, retain, nonatomic) NSNumber *maxGracePeriodMinutes; // ivar: _maxGracePeriodMinutes
@property (readonly, retain, nonatomic) NSNumber *maxInactivityMinutes; // ivar: _maxInactivityMinutes
@property (readonly, retain, nonatomic) NSNumber *maxPasscodeAgeDays; // ivar: _maxPasscodeAgeDays
@property (readonly, retain, nonatomic) NSNumber *minComplexCharacters; // ivar: _minComplexCharacters
@property (readonly, retain, nonatomic) NSNumber *minLength; // ivar: _minLength
@property (readonly, retain, nonatomic) NSNumber *passcodeHistoryCount; // ivar: _passcodeHistoryCount


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)filterForUserEnrollmentOutError:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)restrictions;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)title;
-(id)verboseDescription;


@end


#endif