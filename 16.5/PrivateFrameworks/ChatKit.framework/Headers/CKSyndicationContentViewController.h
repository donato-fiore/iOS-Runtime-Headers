// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSYNDICATIONCONTENTVIEWCONTROLLER_H
#define CKSYNDICATIONCONTENTVIEWCONTROLLER_H

@class OBWelcomeController, UIView, NSMutableArray, CAGradientLayer, UILabel;


#import "CKSyndicationSharedWithYouViewController.h"

@interface CKSyndicationContentViewController : OBWelcomeController

@property (retain, nonatomic) UIView *combinedHighlightsView; // ivar: _combinedHighlightsView
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (retain, nonatomic) UIView *gradientView; // ivar: _gradientView
@property (retain, nonatomic) UIView *highlightsView1; // ivar: _highlightsView1
@property (retain, nonatomic) UIView *highlightsView2; // ivar: _highlightsView2
@property (nonatomic) CGSize maxContentSize; // ivar: _maxContentSize
@property (retain, nonatomic) UILabel *micropillView1; // ivar: _micropillView1
@property (retain, nonatomic) UILabel *micropillView2; // ivar: _micropillView2
@property (retain, nonatomic) UIView *musicLinkBalloonView; // ivar: _musicLinkBalloonView
@property (nonatomic) NSUInteger onboardingPage; // ivar: _onboardingPage
@property (nonatomic) CGFloat photoLongSide; // ivar: _photoLongSide
@property (nonatomic) CGFloat photoShortSide; // ivar: _photoShortSide
@property (retain, nonatomic) UIView *podcastLinkBalloonView; // ivar: _podcastLinkBalloonView
@property (retain, nonatomic) UIView *podcastPinIconView; // ivar: _podcastPinIconView
@property (retain, nonatomic) CKSyndicationSharedWithYouViewController *sharedWithYouViewController; // ivar: _sharedWithYouViewController
@property (retain, nonatomic) UIView *tvLinkBalloonView; // ivar: _tvLinkBalloonView
@property (retain, nonatomic) UIView *tvPinIconView; // ivar: _tvPinIconView


-(id)_setUpPhotosMicropillForAvatarImage:(id)arg0 forName:(id)arg1 ;
-(id)getPinIcon;
-(id)initWithIndex:(NSUInteger)arg0 ;
-(void)loadView;
-(void)setUpHighlightsContent;
-(void)setUpPhotosContent;
-(void)setUpSharedWithYouContentCollectionView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateMaxContentSize;
-(void)updateViewConstraints;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif