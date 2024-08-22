// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMLCONDITIONS_H
#define SAMLCONDITIONS_H

@class NSArray, NSDate, NSNumber;


#import "SAMLBaseElement.h"

@interface SAMLConditions : SAMLBaseElement

@property (readonly, nonatomic) NSArray *audienceRestrictions;
@property (readonly, nonatomic) NSArray *conditions; // ivar: _conditions
@property (readonly, nonatomic) NSDate *notBefore;
@property (readonly, nonatomic) NSDate *notOnOrAfter;
@property (readonly, nonatomic) BOOL oneTimeUse;
@property (readonly, nonatomic) NSNumber *proxyRestrictionAudienceCount;
@property (readonly, nonatomic) NSArray *proxyRestrictions;


+(id)createElement:(*id)arg0 ;
-(BOOL)assertionMeetsConditions:(*id)arg0 ;


@end


#endif