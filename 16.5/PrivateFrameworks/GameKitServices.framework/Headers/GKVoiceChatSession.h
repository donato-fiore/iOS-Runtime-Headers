// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKVOICECHATSESSION_H
#define GKVOICECHATSESSION_H

@class NSArray, NSString;
@protocol GKVoiceChatSessionDelegate;

#import <Foundation/Foundation.h>


@interface GKVoiceChatSession : NSObject {
    id *opaqueSession;
}


@property (getter=isActiveSession) BOOL activeSession;
@property NSObject<GKVoiceChatSessionDelegate> *delegate;
@property (readonly) float inputMeter;
@property (readonly) NSArray *peerList;
@property (readonly) NSString *sessionName;
@property float sessionVolume;


-(BOOL)getMuteStateForPeer:(id)arg0 ;
-(float)outputMeterForPeer:(id)arg0 ;
-(id)initWithGKSession:(id)arg0 sessionName:(id)arg1 ;
-(void)dealloc;
-(void)setMute:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)startSession;
-(void)stopSession;


@end


#endif