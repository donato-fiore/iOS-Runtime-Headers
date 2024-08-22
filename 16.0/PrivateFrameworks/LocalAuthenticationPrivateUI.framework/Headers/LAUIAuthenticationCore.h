// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAUIAUTHENTICATIONCORE_H
#define LAUIAUTHENTICATIONCORE_H

@class LAContext, NSDictionary, UIView;
@protocol LAUIDelegate, LAUIAuthentication, LAUIAuthenticationCoreDelegate;

#import <Foundation/Foundation.h>


@interface LAUIAuthenticationCore : NSObject <LAUIDelegate, LAUIAuthentication>

 {
    BOOL _doneMatching;
    BOOL _doneWatch;
    BOOL _usesInternalContext;
    BOOL _mirroringToDefaultUI;
    NSInteger _lastState;
}


@property (nonatomic) NSUInteger activeMechanisms; // ivar: _activeMechanisms
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive; // ivar: _applicationActive
@property (readonly, nonatomic) NSInteger biometryType; // ivar: _biometryType
@property (retain, nonatomic) LAContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<LAUIAuthenticationCoreDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger enabledMechanisms; // ivar: _enabledMechanisms
@property (readonly, nonatomic) NSDictionary *faceIdResult; // ivar: _faceIdResult
@property (nonatomic, getter=isKeyWindow) BOOL keyWindow; // ivar: _keyWindow
@property (nonatomic, getter=isUiActive) BOOL uiActive; // ivar: _uiActive
@property (retain, nonatomic) UIView *view; // ivar: _view


+(void)performBlockOnMainThread:(id)arg0 ;
-(BOOL)_mechanism:(NSUInteger)arg0 enable:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_simpleStatusInParams:(id)arg0 touchId:(NSInteger)arg1 faceId:(NSInteger)arg2 ;
-(BOOL)disableMechanism:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)enableMechanism:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isMechanismActive:(NSUInteger)arg0 ;
-(BOOL)isMechanismAvailable:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isMechanismEnabled:(NSUInteger)arg0 ;
-(NSInteger)_policyForBackgroundMechanisms;
-(id)_optionsForBackgroundMechanism;
-(id)initWithMechanisms:(NSUInteger)arg0 ;
-(id)initWithMechanisms:(NSUInteger)arg0 context:(id)arg1 ;
-(id)notificationNames;
-(void)_biometricNoMatch;
-(void)_biometryState:(NSInteger)arg0 ;
-(void)_enableAvailableMechanisms:(NSUInteger)arg0 ;
-(void)_handleBackgroundMechanismsResult:(id)arg0 error:(id)arg1 context:(id)arg2 ;
-(void)_notification:(id)arg0 ;
-(void)_processActivityChangeForNotification:(id)arg0 block:(id)arg1 ;
-(void)_setupMechanisms:(NSUInteger)arg0 ;
-(void)_setupNotifications:(BOOL)arg0 ;
-(void)_startBackgroundMechanisms;
-(void)_stopBackgroundMechanisms;
-(void)checkView;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)startOrStopBackgroundMechanisms;


@end


#endif