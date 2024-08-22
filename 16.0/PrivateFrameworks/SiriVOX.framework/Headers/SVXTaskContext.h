// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXTASKCONTEXT_H
#define SVXTASKCONTEXT_H

@class NSString, NSError, SAUIListenAfterSpeakingBehavior, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXActivationContext.h"
#import "SVXDeactivationContext.h"

@interface SVXTaskContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *aceId; // ivar: _aceId
@property (readonly, copy, nonatomic) SVXActivationContext *activationContext; // ivar: _activationContext
@property (readonly, copy, nonatomic) SVXDeactivationContext *deactivationContext; // ivar: _deactivationContext
@property (readonly, copy, nonatomic) NSString *dialogIdentifier; // ivar: _dialogIdentifier
@property (readonly, copy, nonatomic) NSString *dialogPhase; // ivar: _dialogPhase
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isUUFR; // ivar: _isUUFR
@property (readonly, copy, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior; // ivar: _listenAfterSpeakingBehavior
@property (readonly, nonatomic) BOOL listensAfterSpeaking; // ivar: _listensAfterSpeaking
@property (readonly, nonatomic) NSInteger origin; // ivar: _origin
@property (readonly, copy, nonatomic) NSString *refId; // ivar: _refId
@property (readonly, copy, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly, copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrigin:(NSInteger)arg0 timestamp:(NSUInteger)arg1 sessionUUID:(id)arg2 requestUUID:(id)arg3 aceId:(id)arg4 refId:(id)arg5 dialogIdentifier:(id)arg6 dialogPhase:(id)arg7 isUUFR:(BOOL)arg8 listensAfterSpeaking:(BOOL)arg9 listenAfterSpeakingBehavior:(id)arg10 activationContext:(id)arg11 deactivationContext:(id)arg12 error:(id)arg13 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif