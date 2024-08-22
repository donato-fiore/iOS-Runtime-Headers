// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAREMINDERSMSPAYLOAD_H
#define SAREMINDERSMSPAYLOAD_H

@class NSString, NSArray;
@protocol SAReminderPayload;


#import "AceObject.h"

@interface SAReminderSmsPayload : AceObject <SAReminderPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly) Class superclass;


+(id)smsPayload;
+(id)smsPayloadWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif