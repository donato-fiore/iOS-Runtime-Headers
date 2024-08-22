// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACFSPOKENNOTIFICATIONFLOWCOMMAND_H
#define SACFSPOKENNOTIFICATIONFLOWCOMMAND_H

@class NSString;


#import "SACFAbstractClientCommand.h"
#import "SAAppInfo.h"

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand

@property (retain, nonatomic) SAAppInfo *appInfo;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *notificationID;
@property (copy, nonatomic) NSString *outputVoiceLanguageCode;
@property (nonatomic) BOOL shouldPromptUser;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *userInterfaceIdiom;


+(id)spokenNotificationFlowCommand;
+(id)spokenNotificationFlowCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif