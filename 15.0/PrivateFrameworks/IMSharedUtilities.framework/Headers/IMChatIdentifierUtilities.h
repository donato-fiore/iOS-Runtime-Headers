// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCHATIDENTIFIERUTILITIES_H
#define IMCHATIDENTIFIERUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMChatIdentifierUtilities : NSObject



+(id)_randomUnverifiedChatIdentifierForGroupChat;
+(id)generateUnusedChatIdentifierForGroupChatWithServiceName:(id)arg0 chatWithChatIdentifierExists:(id)arg1 ;


@end


#endif