// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICONTENTMODULEDETAILCLICKPRESENTATIONINTERACTIONMANAGER_H
#define CCUICONTENTMODULEDETAILCLICKPRESENTATIONINTERACTIONMANAGER_H

@class _UIClickPresentationInteraction, UIPresentationController, NSString, UIViewController, UIView;
@protocol _UIClickPresentationInteractionDelegate, CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;

#import <Foundation/Foundation.h>

#import "CCUIContentModuleDetailTransitioningDelegate.h"

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate>

 {
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    UIPresentationController *_presentationController;
    BOOL _authenticated;
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *viewForInteraction; // ivar: _viewForInteraction


-(BOOL)clickPresentationInteractionShouldBegin:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg0 ;
-(NSUInteger)activationStyleForClickPresentationInteraction:(id)arg0 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)initWithPresentingViewController:(id)arg0 delegate:(id)arg1 ;
-(void)clickPresentationInteractionEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;


@end


#endif