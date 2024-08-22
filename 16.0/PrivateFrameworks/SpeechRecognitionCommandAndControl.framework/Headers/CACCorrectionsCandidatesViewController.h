// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCORRECTIONSCANDIDATESVIEWCONTROLLER_H
#define CACCORRECTIONSCANDIDATESVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, TUICandidateView, NSString, TIKeyboardCandidateSingle, UILabel;
@protocol TUICandidateViewDelegate, CACCCorrectionsCandidatesViewControllerDelegate;


#import "CACCorrectionsCandidateState.h"

@interface CACCorrectionsCandidatesViewController : UIViewController <TUICandidateViewDelegate>



@property (retain, nonatomic) NSArray *allCandidates; // ivar: _allCandidates
@property (copy, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (retain, nonatomic) UIView *candidateBackdropView; // ivar: _candidateBackdropView
@property (retain, nonatomic) CACCorrectionsCandidateState *candidateConfiguration; // ivar: _candidateConfiguration
@property (retain, nonatomic) TUICandidateView *candidateView; // ivar: _candidateView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CACCCorrectionsCandidatesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emojis; // ivar: _emojis
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TIKeyboardCandidateSingle *originalTextCandidate; // ivar: _originalTextCandidate
@property (retain, nonatomic) TUICandidateView *secondaryCandidateView; // ivar: _secondaryCandidateView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_canShowWhileLocked;
-(id)candidateResultSet;
-(id)newCandidateKeyWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )preferredContentSize;
-(void)candidateView:(id)arg0 didAcceptCandidate:(id)arg1 atIndexPath:(id)arg2 inGridType:(NSInteger)arg3 ;
-(void)candidateViewDidTapArrowButton:(id)arg0 ;
-(void)candidateViewNeedsToExpand:(id)arg0 ;
-(void)candidateViewSelectionDidChange:(id)arg0 inGridType:(NSInteger)arg1 ;
-(void)candidateViewWillBeginDragging:(id)arg0 ;
-(void)closeButtonTapped;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setupConfigurations;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCandidateSet;
-(void)updateConfigurations;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif