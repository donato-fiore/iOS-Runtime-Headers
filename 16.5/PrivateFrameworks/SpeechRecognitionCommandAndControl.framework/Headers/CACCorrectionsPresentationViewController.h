// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCORRECTIONSPRESENTATIONVIEWCONTROLLER_H
#define CACCORRECTIONSPRESENTATIONVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol UIPopoverPresentationControllerDelegate, CACCCorrectionsCandidatesViewControllerDelegate, CACViewController, CACCorrectionsPresentationDelegate;


#import "CACCorrectionsCandidatesViewController.h"
#import "CACPopoverPresentingViewController.h"

@interface CACCorrectionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACCCorrectionsCandidatesViewControllerDelegate, CACViewController>



@property (copy, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (retain, nonatomic) CACCorrectionsCandidatesViewController *correctionViewController; // ivar: _correctionViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CACCorrectionsPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emojis; // ivar: _emojis
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOverlay;
@property (retain, nonatomic) CACPopoverPresentingViewController *popoverPresentingViewController; // ivar: _popoverPresentingViewController
@property (nonatomic) CGRect portraitUpSourceRect; // ivar: _portraitUpSourceRect
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSInteger zOrder;


-(BOOL)_canShowWhileLocked;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(id)init;
-(void)correctionsCandidatesViewController:(id)arg0 didSelectItemWithText:(id)arg1 ;
-(void)dismissCorrectionsCandidatesViewController:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif