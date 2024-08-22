// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUSERACTIVITY_H
#define SAUSERACTIVITY_H

@class NSArray, NSString;


#import "SADomainObject.h"

@interface SAUserActivity : SADomainObject

@property (copy, nonatomic) NSArray *eligibileFunctions;
@property (copy, nonatomic) NSString *internalGUID;
@property (nonatomic) BOOL isEligibleForAppPunchout;
@property (nonatomic) BOOL isEligibleForDirections;
@property (nonatomic) BOOL isEligibleForHandoff;
@property (nonatomic) BOOL isEligibleForPublicIndexing;
@property (nonatomic) BOOL isEligibleForReminders;
@property (nonatomic) BOOL isEligibleForSearch;


+(id)userActivity;
+(id)userActivityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif