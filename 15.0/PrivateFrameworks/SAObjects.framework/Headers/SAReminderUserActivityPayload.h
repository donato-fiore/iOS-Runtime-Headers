// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREMINDERUSERACTIVITYPAYLOAD_H
#define SAREMINDERUSERACTIVITYPAYLOAD_H

@class NSString;
@protocol SAReminderPayload;


#import "AceObject.h"
#import "SAUserActivity.h"

@interface SAReminderUserActivityPayload : AceObject <SAReminderPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUserActivity *userActivity;


+(id)userActivityPayloadWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif