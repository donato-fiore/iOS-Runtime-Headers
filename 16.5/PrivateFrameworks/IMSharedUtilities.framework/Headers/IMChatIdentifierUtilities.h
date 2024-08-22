// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCHATIDENTIFIERUTILITIES_H
#define IMCHATIDENTIFIERUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMChatIdentifierUtilities : NSObject



+(id)_handleBasedPersonCentricIDWithParticipantIDs:(id)arg0 chatStyle:(unsigned char)arg1 ;
+(id)_randomUnverifiedChatIdentifierForGroupChat;
+(id)generateUnusedChatIdentifierForGroupChatWithServiceName:(id)arg0 chatWithChatIdentifierExists:(id)arg1 ;
+(id)personCentricIDForChatWithGUID:(id)arg0 chatIdentifier:(id)arg1 chatStyle:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 participantIDs:(id)arg5 ;


@end


#endif