// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIACONTROLSSTATUSBARSTYLEOVERRIDESCOORDINATOR_H
#define MPMEDIACONTROLSSTATUSBARSTYLEOVERRIDESCOORDINATOR_H

@class SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator, NSString;
@protocol SBSStatusBarStyleOverridesCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "MPMediaControls.h"

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>

 {
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    MPMediaControls *_mediaControls;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)statusBarCoordinator:(id)arg0 receivedTapWithContext:(id)arg1 completionBlock:(id)arg2 ;
-(id)init;
-(void)presentMediaControls;
-(void)presentMediaControlsWithCompletion:(id)arg0 ;
-(void)statusBarCoordinator:(id)arg0 invalidatedRegistrationWithError:(id)arg1 ;


@end


#endif