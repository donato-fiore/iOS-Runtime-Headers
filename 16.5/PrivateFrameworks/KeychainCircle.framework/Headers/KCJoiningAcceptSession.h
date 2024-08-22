// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCJOININGACCEPTSESSION_H
#define KCJOININGACCEPTSESSION_H

@class OTControlArguments, NSMutableDictionary, OTJoiningConfiguration, NSData, OTControl, NSString;
@protocol KCJoiningAcceptCircleDelegate, KCJoiningAcceptSecretDelegate;

#import <Foundation/Foundation.h>

#import "KCSRPServerContext.h"
#import "KCAESGCMDuplexSession.h"

@interface KCJoiningAcceptSession : NSObject

@property (weak) NSObject<KCJoiningAcceptCircleDelegate> *circleDelegate; // ivar: _circleDelegate
@property (readonly) KCSRPServerContext *context; // ivar: _context
@property (retain, nonatomic) OTControlArguments *controlArguments; // ivar: _controlArguments
@property (retain, nonatomic) NSMutableDictionary *defaults; // ivar: _defaults
@property (readonly) NSUInteger dsid; // ivar: _dsid
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration; // ivar: _joiningConfiguration
@property (retain) NSData *octagon; // ivar: _octagon
@property (retain, nonatomic) OTControl *otControl; // ivar: _otControl
@property (retain) NSString *piggy_uuid; // ivar: _piggy_uuid
@property int piggy_version; // ivar: _piggy_version
@property (weak) NSObject<KCJoiningAcceptSecretDelegate> *secretDelegate; // ivar: _secretDelegate
@property (readonly) KCAESGCMDuplexSession *session; // ivar: _session
@property (retain) NSData *startMessage; // ivar: _startMessage
@property (readonly) int state; // ivar: _state


+(id)sessionWithInitialMessage:(id)arg0 secretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)isDone;
-(BOOL)setupSession:(*id)arg0 ;
-(BOOL)shouldAcceptOctagonRequests;
-(BOOL)shouldProcessSOSApplication:(id)arg0 pairingMessage:(id)arg1 ;
-(id)accessSession;
-(id)copyChallengeMessage:(*id)arg0 ;
-(id)createPairingMessageFromJoiningMessage:(id)arg0 error:(*id)arg1 ;
-(id)createTLKRequestResponse:(*id)arg0 ;
-(id)description;
-(id)initWithSecretDelegate:(id)arg0 circleDelegate:(id)arg1 dsid:(NSUInteger)arg2 rng:(struct ccrng_state *)arg3 error:(*id)arg4 ;
-(id)processApplication:(id)arg0 error:(*id)arg1 ;
-(id)processInitialMessage:(id)arg0 error:(*id)arg1 ;
-(id)processMessage:(id)arg0 error:(*id)arg1 ;
-(id)processResponse:(id)arg0 error:(*id)arg1 ;
-(id)processSOSApplication:(id)arg0 error:(*id)arg1 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setControlObject:(id)arg0 ;


@end


#endif