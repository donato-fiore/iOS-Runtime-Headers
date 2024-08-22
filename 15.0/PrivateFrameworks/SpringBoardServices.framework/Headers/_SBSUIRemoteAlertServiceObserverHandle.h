// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBSUIREMOTEALERTSERVICEOBSERVERHANDLE_H
#define _SBSUIREMOTEALERTSERVICEOBSERVERHANDLE_H

@class NSString;
@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>


@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject <SBSRemoteAlertHandleObserver>



@property (copy, nonatomic) id *activationHandler; // ivar: _activationHandler
@property (copy, nonatomic) id *deactivationHandler; // ivar: _deactivationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif