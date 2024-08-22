// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONEPOSTVOICETRIGGERDURINGCALLENABLEDNOTIFICATION_H
#define SAPHONEPOSTVOICETRIGGERDURINGCALLENABLEDNOTIFICATION_H



#import "SABaseClientBoundCommand.h"

@interface SAPhonePostVoiceTriggerDuringCallEnabledNotification : SABaseClientBoundCommand

@property (nonatomic) BOOL enableVoiceTriggerDuringPhoneCall;


-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif