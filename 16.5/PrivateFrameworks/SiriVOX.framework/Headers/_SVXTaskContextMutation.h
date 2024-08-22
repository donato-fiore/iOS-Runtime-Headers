// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXTASKCONTEXTMUTATION_H
#define _SVXTASKCONTEXTMUTATION_H

@class NSUUID, NSString, SAUIListenAfterSpeakingBehavior, NSError;
@protocol SVXTaskContextMutating;

#import <Foundation/Foundation.h>

#import "SVXTaskContext.h"
#import "SVXActivationContext.h"
#import "SVXDeactivationContext.h"

@interface _SVXTaskContextMutation : NSObject <SVXTaskContextMutating>

 {
    SVXTaskContext *_baseModel;
    NSInteger _origin;
    NSUInteger _timestamp;
    NSUUID *_sessionUUID;
    NSUUID *_requestUUID;
    NSString *_aceId;
    NSString *_refId;
    NSString *_dialogIdentifier;
    NSString *_dialogPhase;
    BOOL _isUUFR;
    BOOL _listensAfterSpeaking;
    SAUIListenAfterSpeakingBehavior *_listenAfterSpeakingBehavior;
    SVXActivationContext *_activationContext;
    SVXDeactivationContext *_deactivationContext;
    NSError *_error;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAceId:(id)arg0 ;
-(void)setActivationContext:(id)arg0 ;
-(void)setDeactivationContext:(id)arg0 ;
-(void)setDialogIdentifier:(id)arg0 ;
-(void)setDialogPhase:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setIsUUFR:(BOOL)arg0 ;
-(void)setListenAfterSpeakingBehavior:(id)arg0 ;
-(void)setListensAfterSpeaking:(BOOL)arg0 ;
-(void)setOrigin:(NSInteger)arg0 ;
-(void)setRefId:(id)arg0 ;
-(void)setRequestUUID:(id)arg0 ;
-(void)setSessionUUID:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;


@end


#endif