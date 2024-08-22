// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT30SYSTEMBANNERHOSTVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT30SYSTEMBANNERHOSTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol BNPresentableContext;



@interface _TtC15ConversationKit30SystemBannerHostViewController : UIViewController {
    ? delegate;
    ? controlsManager;
    ? callUUID;
    ? sizeClass;
    ? controlsType;
    ? notice;
    ? captureGroupName;
    ? $__lazy_storage_$_captureOnlyBackdropView;
    ? shadowView;
    ? conversationControlsViewController;
    ? expandedForMenuPresentation;
    ? requesterIdentifier;
    ? layoutDescription;
    ? destination;
    ? panGestureProxy;
    ? dismissalPreventionAssertion;
    ? gesturePriorityAssertion;
    ? buttonEventAssertion;
}


@property (nonatomic, weak) NSObject<BNPresentableContext> *presentableContext; // ivar: presentableContext
@property (nonatomic, copy) NSString *requesterIdentifier;


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif