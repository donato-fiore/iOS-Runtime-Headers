// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAHAACTIONRESULT_H
#define SAHAACTIONRESULT_H

@class NSString, NSArray;


#import "SADomainObject.h"
#import "SAHAEntity.h"
#import "SAHAAttributeValue.h"

@interface SAHAActionResult : SADomainObject

@property (retain, nonatomic) SAHAEntity *entity;
@property (copy, nonatomic) NSString *outcome;
@property (copy, nonatomic) NSArray *relatedEntityIds;
@property (copy, nonatomic) NSString *requestActionId;
@property (copy, nonatomic) NSString *resultAttribute;
@property (retain, nonatomic) SAHAAttributeValue *resultValue;


+(id)actionResult;
+(id)actionResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif