// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWSCENEDELEGATE_H
#define SBWINDOWSCENEDELEGATE_H

@class SBFTraitsArbiter, NSString, UIWindow;
@protocol SBFTraitsArbiterScreenStateProviding, UISceneDelegate, UIWindowSceneDelegate_ForSpringBoardOnly;

#import <Foundation/Foundation.h>

#import "SBDefaultTraitsParticipantDelegate.h"
#import "SBTraitsArbitrationPipelineManager.h"

@interface SBWindowSceneDelegate : NSObject <SBFTraitsArbiterScreenStateProviding, UISceneDelegate, UIWindowSceneDelegate_ForSpringBoardOnly>

 {
    SBDefaultTraitsParticipantDelegate *_defaultParticipantDelegate;
    SBTraitsArbitrationPipelineManager *_arbitrationPipelineManager;
    SBFTraitsArbiter *_traitsArbiter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


+(id)_individuallyManagedRoles;
-(BOOL)_isWindowContentVisible:(id)arg0 ;
-(BOOL)_shouldManageParticipantWithRole:(id)arg0 ;
-(BOOL)_shouldNotifyWindowWillBecomeHiddenForRole:(id)arg0 ;
-(CGFloat)_windowScene:(id)arg0 levelForWindow:(id)arg1 preferredLevel:(CGFloat)arg2 ;
-(id)_acquireParticipantForWindow:(id)arg0 reason:(id)arg1 ;
-(id)_participantForWindow:(id)arg0 ;
-(id)init;
-(id)traitsArbiter;
-(id)traitsArbitrationPipelineManager;
-(void)_setParticipant:(id)arg0 forWindow:(id)arg1 ;
-(void)_windowScene:(id)arg0 window:(id)arg1 didUpdateSupportedInterfaceOrientations:(NSUInteger)arg2 ;
-(void)_windowScene:(id)arg0 windowDidBecomeVisible:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillAttach:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillBecomeHidden:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillBecomeVisible:(id)arg1 ;
-(void)_windowScene:(id)arg0 windowWillDetach:(id)arg1 ;


@end


#endif