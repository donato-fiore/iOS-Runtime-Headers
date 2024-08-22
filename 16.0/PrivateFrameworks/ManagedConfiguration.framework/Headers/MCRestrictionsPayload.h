// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCRESTRICTIONSPAYLOAD_H
#define MCRESTRICTIONSPAYLOAD_H

@class NSMutableDictionary, NSString;


#import "MCPayload.h"

@interface MCRestrictionsPayload : MCPayload {
    NSMutableDictionary *_restrictions;
}


@property (retain, nonatomic) NSString *iCloudPassword; // ivar: _iCloudPassword


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)_defaultValueRestrictions;
-(id)_enforcedFeatureStrings;
-(id)_intersectionStrings;
-(id)_invalidFieldErrorWithFieldName:(id)arg0 ;
-(id)_restrictedFeatureStrings;
-(id)_unionStrings;
-(id)filterForUserEnrollmentOutError:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)localizedRestrictionStrings;
-(id)restrictions;
-(id)stubDictionary;
-(void)_insertRestrictedBoolForKey:(id)arg0 value:(id)arg1 preferenc:(BOOL)arg2 ;


@end


#endif