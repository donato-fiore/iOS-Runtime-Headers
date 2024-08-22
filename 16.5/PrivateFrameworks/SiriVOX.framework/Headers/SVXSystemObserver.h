// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSYSTEMOBSERVER_H
#define SVXSYSTEMOBSERVER_H

@class AFDeviceContextConnection, NSString;
@protocol SVXModuleInstance, SVXSessionActivityListening, AFDeviceContextConnectionDelegate;

#import <Foundation/Foundation.h>

#import "SVXModule.h"
#import "SVXDeviceContextAnnouncer.h"

@interface SVXSystemObserver : NSObject <SVXModuleInstance, SVXSessionActivityListening, AFDeviceContextConnectionDelegate>

 {
    SVXModule *_module;
    SVXDeviceContextAnnouncer *_deviceContextAnnouncer;
    AFDeviceContextConnection *_deviceContextConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithModule:(id)arg0 ;
-(void)_logSnapshot;
-(void)_startObservingDeviceContext;
-(void)_startObservingInfo;
-(void)_stopObservingDeviceContext;
-(void)_stopObservingInfo;
-(void)addDeviceContextListener:(id)arg0 ;
-(void)audioSessionDidBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)audioSessionWillBecomeActive:(BOOL)arg0 activationContext:(id)arg1 deactivationContext:(id)arg2 ;
-(void)dealloc;
-(void)deviceContextConnection:(id)arg0 didUpdateLocalDeviceContext:(id)arg1 ;
-(void)deviceContextConnectionDidInvalidate:(id)arg0 ;
-(void)getLocalDeviceContextWithCompletion:(id)arg0 ;
-(void)removeDeviceContextListener:(id)arg0 ;
-(void)sessionDidBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)sessionDidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)sessionDidFailAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg0 ;
-(void)sessionDidStartSoundWithID:(NSInteger)arg0 ;
-(void)sessionDidStopSoundWithID:(NSInteger)arg0 error:(id)arg1 ;
-(void)sessionWillBecomeActiveWithActivationContext:(id)arg0 turnID:(id)arg1 ;
-(void)sessionWillChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg0 ;
-(void)sessionWillProcessAppLaunchWithBundleIdentifier:(id)arg0 ;
-(void)sessionWillResignActiveWithOptions:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)sessionWillStartSoundWithID:(NSInteger)arg0 ;
-(void)startWithModuleInstanceProvider:(id)arg0 platformDependencies:(id)arg1 ;
-(void)stopWithModuleInstanceProvider:(id)arg0 ;


@end


#endif