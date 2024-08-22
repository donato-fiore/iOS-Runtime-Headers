// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAREMINDERPHONEPAYLOAD_H
#define SAREMINDERPHONEPAYLOAD_H

@class NSString;
@protocol SAReminderPayload;


#import "AceObject.h"

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *phoneCallType;
@property (copy, nonatomic) NSString *recipient;
@property (readonly) Class superclass;


+(id)phonePayload;
+(id)phonePayloadWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif