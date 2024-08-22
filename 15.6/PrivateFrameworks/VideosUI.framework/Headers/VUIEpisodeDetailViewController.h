// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIEPISODEDETAILVIEWCONTROLLER_H
#define VUIEPISODEDETAILVIEWCONTROLLER_H

@class UIViewController, NSString, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate, VUIEpisodeDetailViewControllerDelegate;


#import "VUIViewControllerContentPresenter.h"
#import "VUIEpisodeDetailView.h"
#import "VUIMediaItem.h"

@interface VUIEpisodeDetailViewController : UIViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate>



@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIEpisodeDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIEpisodeDetailView *detailView; // ivar: _detailView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithMediaItem:(id)arg0 ;
-(void)_configureNavigationBar;
-(void)didTapPlay;
-(void)dismissPopover;
-(void)dismissTapped:(id)arg0 ;
-(void)loadView;
-(void)reportMetricsPageEvent;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif