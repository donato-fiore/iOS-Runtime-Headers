// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOICECHATSESSIONBEACONSTATE_H
#define VOICECHATSESSIONBEACONSTATE_H


#import <Foundation/Foundation.h>


@interface VoiceChatSessionBeaconState : NSObject {
    *tagVoiceChatBeacon lastReceivedBeacon;
}


@property (nonatomic) BOOL needsSend; // ivar: needsSend
@property (nonatomic) unsigned int receivedState; // ivar: receivedState
@property (nonatomic) unsigned int sentState; // ivar: sentState
@property (nonatomic) unsigned int typeToSend; // ivar: typeToSend


-(id)init;
-(struct tagVoiceChatBeacon *)lastReceivedBeacon;
-(void)dealloc;
-(void)setLastReceivedBeacon:(struct tagVoiceChatBeacon *)arg0 ;


@end


#endif