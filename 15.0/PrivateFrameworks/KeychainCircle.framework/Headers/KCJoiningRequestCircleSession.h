// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCJOININGREQUESTCIRCLESESSION_H
#define KCJOININGREQUESTCIRCLESESSION_H

@class OTJoiningConfiguration, OTControl;
@protocol KCJoiningRequestCircleDelegate;

#import <Foundation/Foundation.h>

#import "KCAESGCMDuplexSession.h"

@interface KCJoiningRequestCircleSession : NSObject

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate; // ivar: _circleDelegate
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration; // ivar: _joiningConfiguration
@property (retain, nonatomic) OTControl *otControl; // ivar: _otControl
@property (nonatomic) NSUInteger piggy_version; // ivar: _piggy_version
@property (readonly) KCAESGCMDuplexSession *session; // ivar: _session
@property int state; // ivar: _state


+(id)sessionWithCircleDelegate:(id)arg0 session:(id)arg1 error:(*id)arg2 ;
-(BOOL)isDone;
-(BOOL)shouldJoinSOS:(id)arg0 pairingMessage:(id)arg1 ;
-(id)accessSession;
-(id)encryptedInitialMessage:(id)arg0 error:(*id)arg1 ;
-(id)encryptedPeerInfo:(*id)arg0 ;
-(id)handleCircleBlob:(id)arg0 error:(*id)arg1 ;
-(id)initWithCircleDelegate:(id)arg0 session:(id)arg1 error:(*id)arg2 ;
-(id)initWithCircleDelegate:(id)arg0 session:(id)arg1 otcontrol:(id)arg2 error:(*id)arg3 ;
-(id)initialMessage:(*id)arg0 ;
-(id)processMessage:(id)arg0 error:(*id)arg1 ;
-(void)setContextIDOnJoiningConfiguration:(id)arg0 ;
-(void)setControlObject:(id)arg0 ;
-(void)waitForOctagonUpgrade;


@end


#endif