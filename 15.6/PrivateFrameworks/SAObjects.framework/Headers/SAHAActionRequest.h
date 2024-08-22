// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHAACTIONREQUEST_H
#define SAHAACTIONREQUEST_H

@class NSArray;


#import "SADomainObject.h"
#import "SAHAFilter.h"

@interface SAHAActionRequest : SADomainObject

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) NSInteger executionOrder;
@property (retain, nonatomic) SAHAFilter *filter;


+(id)actionRequest;
+(id)actionRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif