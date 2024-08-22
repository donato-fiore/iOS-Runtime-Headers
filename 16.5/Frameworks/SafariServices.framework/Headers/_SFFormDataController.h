// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFFORMDATACONTROLLER_H
#define _SFFORMDATACONTROLLER_H

@class WBUFormDataController, SFAppAutoFillOneTimeCodeProvider, NSString;
@protocol _SFAuthenticationContextDelegate;


#import "_SFAuthenticationContext.h"

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate>

 {
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
}


@property (readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext; // ivar: _autoFillAuthenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg0 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg0 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg0 ;
-(CGFloat)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg0 ;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg0 ;
-(id)oneTimeCodeProvider;


@end


#endif