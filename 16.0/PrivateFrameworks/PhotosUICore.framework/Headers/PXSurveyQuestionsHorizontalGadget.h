// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSURVEYQUESTIONSHORIZONTALGADGET_H
#define PXSURVEYQUESTIONSHORIZONTALGADGET_H

@class NSString;
@protocol MFMailComposeViewControllerDelegate, PXProgrammaticNavigationParticipant, PXSurveyQuestionsHorizontalGadgetDelegate;


#import "PXHorizontalCollectionGadget.h"
#import "PXExpectation.h"
#import "PXProgrammaticNavigationDestination.h"

@interface PXSurveyQuestionsHorizontalGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate, PXProgrammaticNavigationParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXSurveyQuestionsHorizontalGadgetDelegate> *horizontalGadgetDelegate;
@property (retain, nonatomic) PXExpectation *nextViewLayoutExpectation; // ivar: _nextViewLayoutExpectation
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) Class superclass;


-(BOOL)selectionFollowsFocus;
-(NSUInteger)accessoryButtonType;
-(NSUInteger)headerStyle;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)accessoryButtonAction:(SEL)arg0 ;
-(id)accessoryButtonTitle;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg0 ;
-(void)_checkCanNavigate:(*BOOL)arg0 toDestination:(id)arg1 iterator:(id)arg2 ;
-(void)_hideAccessoryButtonAction;
-(void)_hideSurveyQuestionsUntilDate:(id)arg0 ;
-(void)_infoAccessoryButtonAction;
-(void)_sendRequestConsentFormMail;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)viewDidLayoutSubviews;


@end


#endif