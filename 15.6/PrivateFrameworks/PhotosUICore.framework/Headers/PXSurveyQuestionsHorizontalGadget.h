// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONSHORIZONTALGADGET_H
#define PXSURVEYQUESTIONSHORIZONTALGADGET_H

@class NSString;
@protocol MFMailComposeViewControllerDelegate, PXSurveyQuestionsHorizontalGadgetDelegate;


#import "PXHorizontalCollectionGadget.h"

@interface PXSurveyQuestionsHorizontalGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXSurveyQuestionsHorizontalGadgetDelegate> *horizontalGadgetDelegate;
@property (readonly) Class superclass;


-(BOOL)selectionFollowsFocus;
-(NSUInteger)accessoryButtonType;
-(NSUInteger)headerStyle;
-(id)accessoryButtonAction:(SEL)arg0 ;
-(id)accessoryButtonTitle;
-(void)_hideAccessoryButtonAction;
-(void)_hideSurveyQuestionsUntilDate:(id)arg0 ;
-(void)_infoAccessoryButtonAction;
-(void)_sendRequestConsentFormMail;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif