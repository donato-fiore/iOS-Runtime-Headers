// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCJOININGREQUESTSECRETSESSION_H
#define KCJOININGREQUESTSECRETSESSION_H

@class NSString, NSData, NSMutableDictionary;
@protocol KCJoiningRequestSecretDelegate;

#import <Foundation/Foundation.h>

#import "KCSRPClientContext.h"
#import "KCAESGCMDuplexSession.h"

@interface KCJoiningRequestSecretSession : NSObject

@property (retain) NSString *altDSID; // ivar: _altDSID
@property (retain) NSData *challenge; // ivar: _challenge
@property (readonly) KCSRPClientContext *context; // ivar: _context
@property (retain, nonatomic) NSMutableDictionary *defaults; // ivar: _defaults
@property (readonly) NSUInteger dsid; // ivar: _dsid
@property NSUInteger epoch; // ivar: _epoch
@property (retain) NSString *piggy_uuid; // ivar: _piggy_uuid
@property NSUInteger piggy_version; // ivar: _piggy_version
@property (retain) NSData *salt; // ivar: _salt
@property (weak) NSObject<KCJoiningRequestSecretDelegate> *secretDelegate; // ivar: _secretDelegate
@property (readonly) KCAESGCMDuplexSession *session; // ivar: _session
@property (retain) NSString *sessionUUID; // ivar: _sessionUUID
@property (readonly) int state; // ivar: _state


+(id)sessionWithSecretDelegate:(id)arg0 dsid:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isDone;
-(BOOL)setupSession:(*id)arg0 ;
-(id)copyResponseForChallenge:(id)arg0 salt:(id)arg1 secret:(id)arg2 error:(*id)arg3 ;
-(id)copyResponseForSecret:(id)arg0 error:(*id)arg1 ;
-(id)createUUID;
-(id)description;
-(id)handleChallenge:(id)arg0 error:(*id)arg1 ;
-(id)handleChallenge:(id)arg0 secret:(id)arg1 error:(*id)arg2 ;
-(id)handleChallengeData:(id)arg0 secret:(id)arg1 error:(*id)arg2 ;
-(id)handleVerification:(id)arg0 error:(*id)arg1 ;
-(id)initWithSecretDelegate:(id)arg0 dsid:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithSecretDelegate:(id)arg0 dsid:(NSUInteger)arg1 rng:(struct ccrng_state *)arg2 error:(*id)arg3 ;
-(id)initialMessage:(*id)arg0 ;
-(id)processMessage:(id)arg0 error:(*id)arg1 ;


@end


#endif