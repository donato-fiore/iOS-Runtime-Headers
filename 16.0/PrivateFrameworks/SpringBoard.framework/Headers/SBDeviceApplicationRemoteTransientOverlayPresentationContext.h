// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONREMOTETRANSIENTOVERLAYPRESENTATIONCONTEXT_H
#define SBDEVICEAPPLICATIONREMOTETRANSIENTOVERLAYPRESENTATIONCONTEXT_H

@class SBSRemoteAlertPresentationTarget;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBRemoteTransientOverlayViewController.h"

@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject

@property (retain, nonatomic, setter=setPIPStashAssertion:) NSObject<BSInvalidatable> *pipStashAssertion; // ivar: _pipStashAssertion
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // ivar: _presentationTarget
@property (retain, nonatomic) SBRemoteTransientOverlayViewController *remoteViewController; // ivar: _remoteViewController


-(void)dealloc;


@end


#endif