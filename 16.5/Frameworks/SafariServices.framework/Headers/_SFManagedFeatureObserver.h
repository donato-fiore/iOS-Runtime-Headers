// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFMANAGEDFEATUREOBSERVER_H
#define _SFMANAGEDFEATUREOBSERVER_H

@class LAContext, NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface _SFManagedFeatureObserver : NSObject <MCProfileConnectionObserver>

 {
    BOOL _cachedAuthenticationRequiredToAutoFill;
    LAContext *_context;
}


@property (readonly, nonatomic) BOOL authenticationRequiredToAutoFill;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedObserver;
-(BOOL)isUserEnrolledInBiometricAuthentication;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif