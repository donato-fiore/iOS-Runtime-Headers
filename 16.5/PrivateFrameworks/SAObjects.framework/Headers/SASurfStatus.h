// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASURFSTATUS_H
#define SASURFSTATUS_H

@class NSString;


#import "SADomainObject.h"

@interface SASurfStatus : SADomainObject

@property (copy, nonatomic) NSString *currentState;


+(id)surfStatus;
+(id)surfStatusWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif