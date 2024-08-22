// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRVIEWSERVICEMANAGER_H
#define TVRVIEWSERVICEMANAGER_H

@class SBSRemoteAlertHandle, NSString;
@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>

#import "TVRViewServiceConfigContext.h"

@interface TVRViewServiceManager : NSObject <SBSRemoteAlertHandleObserver>



@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle; // ivar: _alertHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier; // ivar: _lastActiveEndpointIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) TVRViewServiceConfigContext *viewServiceContext; // ivar: _viewServiceContext


+(id)sharedInstance;
-(id)_actionForSetting:(NSUInteger)arg0 animationBlock:(id)arg1 ;
-(id)_settingNameForValue:(NSUInteger)arg0 ;
-(void)_fetchActiveEndpointUID;
-(void)_launchViewServiceSuspended;
-(void)_prewarmWithLaunchViewService:(BOOL)arg0 fetchActiveEndpoint:(BOOL)arg1 ;
-(void)dismiss;
-(void)presentWithContext:(id)arg0 ;
-(void)prewarm;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif