// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALOGNUMERICEVENT_H
#define SALOGNUMERICEVENT_H

@class NSString, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventOperation;
@property (copy, nonatomic) NSNumber *eventValue;


+(id)logNumericEvent;
+(id)logNumericEventWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif