// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINITIATEHANDOFFONCOMPANION_H
#define SAINITIATEHANDOFFONCOMPANION_H

@class NSString;
@protocol SAHandoffPayload;


#import "SABaseClientBoundCommand.h"
#import "SARemoteDevice.h"

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (retain, nonatomic) NSObject<SAHandoffPayload> *handoffPayload;
@property (copy, nonatomic) NSString *lockScreenText;
@property (copy, nonatomic) NSString *lockScreenTextDialogIdentifier;
@property (copy, nonatomic) NSString *notificationText;
@property (copy, nonatomic) NSString *notificationTextDialogIdentifier;
@property (retain, nonatomic) SARemoteDevice *targetDevice;


+(id)initiateHandoffOnCompanion;
+(id)initiateHandoffOnCompanionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif