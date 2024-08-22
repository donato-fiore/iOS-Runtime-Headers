// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMECONTROLSERVICEMANAGER_H
#define HUHOMECONTROLSERVICEMANAGER_H

@class NSString, SBSRemoteAlertHandle;
@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>


@interface HUHomeControlServiceManager : NSObject <SBSRemoteAlertHandleObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // ivar: _remoteAlertHandle
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suspendedServiceClientCount; // ivar: _suspendedServiceClientCount


+(id)sharedInstance;
-(void)_launchServiceWithUserInfo:(id)arg0 ;
-(void)_launchViewServiceSuspended;
-(void)dismissService;
-(void)launchServiceSuspendedWithUserInfo:(id)arg0 ;
-(void)launchServiceWithContext:(id)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif