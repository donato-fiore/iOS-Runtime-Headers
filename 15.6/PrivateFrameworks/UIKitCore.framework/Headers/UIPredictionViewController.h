// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPREDICTIONVIEWCONTROLLER_H
#define UIPREDICTIONVIEWCONTROLLER_H

@class NSTimer, NSDate, TIAutocorrectionList, NSString, NSArray, TUIPredictionView;
@protocol TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController;


#import "UIViewController.h"

@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController>

 {
    NSTimer *_updateUITimer;
    NSDate *_lastUIUpdateTime;
}


@property (retain, nonatomic) TIAutocorrectionList *cachedAutocorrectionList; // ivar: _cachedAutocorrectionList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TUIPredictionView *predictionView; // ivar: _predictionView
@property (readonly) Class superclass;


-(BOOL)_autocorrectionListContainsContinuousPathConversions:(id)arg0 ;
-(BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isVisibleForAutocorrectionType:(NSInteger)arg0 ;
-(BOOL)hidesExpandableButton;
-(BOOL)isVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(id)_currentTextSuggestions;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_clearTextSuggestions;
-(void)_inputModeDidChange;
-(void)_inputResponderDidChangeNotification:(id)arg0 ;
-(void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg0 ;
-(void)_registerAsAutocorrectionObserver;
-(void)_registerForNotifications;
-(void)_throttledUpdateUIWithAutocorrectionList:(id)arg0 ;
-(void)_updateAutocorrectionList:(id)arg0 ;
-(void)autocorrectionController:(id)arg0 didUpdateAutocorrectionList:(id)arg1 ;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)predictionView:(id)arg0 didSelectCandidate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif