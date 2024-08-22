// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINTERACTIONDIALOGVIEWCONTROLLER_H
#define WFINTERACTIONDIALOGVIEWCONTROLLER_H

@class UIInterfaceAction, NSString, WFDialogRequest;
@protocol WFInteractionCardViewControllerDelegate;


#import "WFCompactDialogViewController.h"
#import "WFInteractionCardViewController.h"
#import "WFInteractionCardProgressViewController.h"

@interface WFInteractionDialogViewController : WFCompactDialogViewController <WFInteractionCardViewControllerDelegate>



@property (retain, nonatomic) WFInteractionCardViewController *cardViewController; // ivar: _cardViewController
@property (retain, nonatomic) UIInterfaceAction *confirmAction; // ivar: _confirmAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFDialogRequest *followUpRequest; // ivar: _followUpRequest
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFInteractionCardProgressViewController *progressViewController; // ivar: _progressViewController
@property (readonly) Class superclass;


-(BOOL)canHandleFollowUpRequest:(id)arg0 ;
-(BOOL)showCheckmarkOnAppear;
-(CGFloat)contentHeightForWidth:(CGFloat)arg0 withMaximumVisibleHeight:(CGFloat)arg1 ;
-(void)handleFollowUpRequest:(id)arg0 ;
-(void)interactionCardViewControllerDidInvalidateSize:(id)arg0 ;
-(void)interactionCardViewControllerDidLoad:(id)arg0 ;
-(void)interactionCardViewControllerDidRequestCancel:(id)arg0 ;
-(void)interactionCardViewControllerDidRequestPunchout:(id)arg0 ;
-(void)loadView;
-(void)showProgressWithEvent:(NSUInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif