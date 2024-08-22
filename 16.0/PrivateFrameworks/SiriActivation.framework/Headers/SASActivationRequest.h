// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASACTIVATIONREQUEST_H
#define SASACTIVATIONREQUEST_H


#import <Foundation/Foundation.h>

#import "SiriContext.h"

@interface SASActivationRequest : NSObject {
    int _waketimeMIB;
    NSUInteger _waketimeMIBSize;
}


@property (nonatomic) NSInteger activationEvent; // ivar: _activationEvent
@property (nonatomic) CGFloat activationTime; // ivar: _activationTime
@property (nonatomic) NSInteger activationType; // ivar: _activationType
@property (nonatomic) CGFloat buttonDownTime; // ivar: _buttonDownTime
@property (retain, nonatomic) SiriContext *context; // ivar: _context
@property (nonatomic) NSInteger requestSource; // ivar: _requestSource


+(NSInteger)requestSourceForButtonIdentifier:(NSInteger)arg0 ;
-(BOOL)isBluetoothRequest;
-(BOOL)isButtonRequest;
-(BOOL)isContinuityRequest;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isDirectActionRequest;
-(BOOL)isEyesFreeRequestSource;
-(BOOL)isHoldToTalkSource;
-(BOOL)isRemoteDisplayVoiceRequest;
-(BOOL)isRemotePresentationBringUpRequest;
-(BOOL)isSpotlightRequest;
-(BOOL)isTestingRequest;
-(BOOL)isUIFreeRequestSource;
-(BOOL)isVoiceRequest;
-(CGFloat)computedActivationTime;
-(NSInteger)longPressBehavior;
-(id)description;
-(id)eventSource;
-(id)init;
-(id)initWithBluetoothKeyboardShortcutActivation:(NSInteger)arg0 ;
-(id)initWithBreadcrumbRequest;
-(id)initWithButtonIdentifier:(NSInteger)arg0 context:(id)arg1 ;
-(id)initWithContinuityContext:(id)arg0 ;
-(id)initWithDirectActionContext:(id)arg0 ;
-(id)initWithRemotePresentationBringUpContext:(id)arg0 ;
-(id)initWithSimpleActivation:(NSInteger)arg0 ;
-(id)initWithSpotlightContext:(id)arg0 ;
-(id)initWithTestingContext:(id)arg0 ;
-(id)initWithVoiceTriggerContext:(id)arg0 ;
-(id)initWithVoiceTriggerRequest;


@end


#endif