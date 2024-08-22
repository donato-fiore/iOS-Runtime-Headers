// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTSPRINGBOARDPROCESSCONTROLSERVICE_H
#define DTSPRINGBOARDPROCESSCONTROLSERVICE_H

@class NSString;
@protocol DTSpringBoardProcessControlServiceAuthorizedMethods;


#import "DTProcessControlService.h"

@interface DTSpringBoardProcessControlService : DTProcessControlService <DTSpringBoardProcessControlServiceAuthorizedMethods>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(BOOL)_HIDEvent:(unsigned int)arg0 hold:(BOOL)arg1 ;
-(BOOL)_dismissTodayView;
-(BOOL)_triggerSiri;
-(id)_launchSuspendedProcessWithBundleIdentifier:(id)arg0 orDevicePath:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 error:(*id)arg5 ;
-(id)launchSuspendedProcessWithDevicePath:(id)arg0 bundleIdentifier:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)processIdentifierForBundleIdentifier:(id)arg0 ;
-(void)sendProcessControlEvent:(id)arg0 toPid:(id)arg1 ;
-(void)sendProcessControlEvent:(id)arg0 toPid:(id)arg1 error:(*id)arg2 ;
-(void)showNotificiationCenterWidget:(id)arg0 withError:(*id)arg1 ;
-(void)showSBWidget:(id)arg0 withError:(*id)arg1 ;
-(void)simulateNotificationForBundleID:(id)arg0 payload:(id)arg1 withError:(*id)arg2 ;


@end


#endif