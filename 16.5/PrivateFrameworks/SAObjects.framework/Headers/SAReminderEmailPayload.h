// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREMINDEREMAILPAYLOAD_H
#define SAREMINDEREMAILPAYLOAD_H

@class NSString, NSArray;
@protocol SAReminderPayload;


#import "AceObject.h"

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *recipientsTo;
@property (copy, nonatomic) NSString *subject;
@property (readonly) Class superclass;


+(id)emailPayload;
+(id)emailPayloadWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif