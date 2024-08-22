// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAUIAUTHENTICATIONVIEW_H
#define LAUIAUTHENTICATIONVIEW_H

@class UIView, NSString;
@protocol LAUIAuthenticationCoreDelegate, LAUIAuthentication, LAUIAuthenticationDelegate;


#import "LAUIAuthenticationCore.h"
#import "LAUIPKGlyphWrapper.h"

@interface LAUIAuthenticationView : UIView <LAUIAuthenticationCoreDelegate, LAUIAuthentication>



@property (readonly, nonatomic) LAUIAuthenticationCore *authenticationCore; // ivar: _authenticationCore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LAUIAuthenticationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fastAnimations; // ivar: _fastAnimations
@property (nonatomic) NSInteger glyphStyle; // ivar: _glyphStyle
@property (readonly, nonatomic) LAUIPKGlyphWrapper *glyphWrapper; // ivar: _glyphWrapper
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL idleWhenDone; // ivar: _idleWhenDone
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(struct CGRect )defaultRect;
-(BOOL)disableMechanism:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)enableMechanism:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isMechanismActive:(NSUInteger)arg0 ;
-(BOOL)isMechanismAvailable:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isMechanismEnabled:(NSUInteger)arg0 ;
-(NSInteger)_stateOfSuccess;
-(id)callerIconBundlePath;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 mechanisms:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 mechanisms:(NSUInteger)arg1 context:(id)arg2 ;
-(id)initWithMechanisms:(NSUInteger)arg0 ;
-(id)initWithMechanisms:(NSUInteger)arg0 context:(id)arg1 ;
-(id)localizedCallerName;
-(void)_setupMechanisms:(NSUInteger)arg0 context:(id)arg1 ;
-(void)_setupView;
-(void)authenticationResult:(id)arg0 error:(id)arg1 context:(id)arg2 ;
-(void)biometricNoMatch;
-(void)biometryState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)notification:(NSInteger)arg0 original:(id)arg1 mechanism:(NSUInteger)arg2 ;
-(void)tappedFaceID:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif