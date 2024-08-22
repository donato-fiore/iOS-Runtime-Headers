// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSREMOTEALERTHANDLEPROVIDER_H
#define SSREMOTEALERTHANDLEPROVIDER_H

@class SBSRemoteAlertHandle, NSString;
@protocol SBSRemoteAlertHandleObserver, SSRemoteAlertHandleProviderDelegate;

#import <Foundation/Foundation.h>


@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver>

 {
    SBSRemoteAlertHandle *_handle;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRemoteAlertHandleProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) Class superclass;


-(id)_screenshotServicesServiceAlertDefinition;
-(id)init;
-(id)screenshotServicesAlertHandle;
-(void)_callDelegate:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)preheat;
-(void)prepare;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif