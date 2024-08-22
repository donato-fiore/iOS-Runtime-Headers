// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APUILONGLOOKVIEWCONTROLLER_H
#define APUILONGLOOKVIEWCONTROLLER_H

@class UIViewController, SUICProgressEventViewController, UIActivityIndicatorView, NSString, PLExpandedPlatterView, UITapGestureRecognizer, UIView;
@protocol PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentationViewDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, PLClickPresentationInteractionPresenting;



@interface APUILongLookViewController : UIViewController <PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentationViewDelegate>

 {
    SUICProgressEventViewController *_progressEventViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _suppressSpinner;
}


@property (weak, nonatomic) NSObject<APUILongLookViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APUILongLookViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PLExpandedPlatterView *expandedPlatterView; // ivar: _expandedPlatterView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITapGestureRecognizer *platterTapGestureRecognizer; // ivar: _platterTapGestureRecognizer
@property (weak, nonatomic) NSObject<PLClickPresentationInteractionPresenting> *presenter; // ivar: _presenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *viewForTouchContinuation;
@property (readonly, nonatomic) UIView *viewWithContent;


-(BOOL)_canShowWhileLocked;
-(id)expandedPlatterViewForPresentationView:(id)arg0 ;
-(void)_dismissButtonTapped:(id)arg0 ;
-(void)_platterDidReceiveTap:(id)arg0 ;
-(void)_platterUtilityButtonTapped:(id)arg0 ;
-(void)_setActions:(id)arg0 ;
-(void)_setCustomContentViewController:(id)arg0 ;
-(void)_setupContentView;
-(void)_setupProgressIndicator;
-(void)loadView;
-(void)setExpandedPlatterSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;


@end


#endif