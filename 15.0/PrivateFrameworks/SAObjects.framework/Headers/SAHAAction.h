// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAHAACTION_H
#define SAHAACTION_H

@class NSString, NSArray;


#import "SADomainObject.h"
#import "SAHAAttributeValue.h"

@interface SAHAAction : SADomainObject

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSArray *executionFlags;
@property (nonatomic) NSInteger executionOrder;
@property (nonatomic) BOOL includeCompleteInformation;
@property (retain, nonatomic) SAHAAttributeValue *value;


+(id)action;
+(id)actionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif