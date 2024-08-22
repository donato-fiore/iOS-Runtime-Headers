// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTMATCHUPSCOREVIEW_H
#define NTKUPNEXTMATCHUPSCOREVIEW_H

@class UIView, UIImageView, NSDate, CLKFont, UILayoutGuide, NSArray, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKColoringLabel.h"

@interface NTKUpNextMatchupScoreView : UIView <CLKMonochromeComplicationView>

 {
    UIImageView *_homeLogoImageView;
    NTKColoringLabel *_homeNameLabel;
    NTKColoringLabel *_homeDescriptionLabel;
    UIImageView *_awayLogoIamgeView;
    NTKColoringLabel *_awayNameLabel;
    NTKColoringLabel *_awayDescriptionLabel;
    NTKColoringLabel *_statusLabel;
    NTKColoringLabel *_timeLabel;
    NSDate *_timeForLabel;
    CLKFont *_boldMatchupFont;
    CLKFont *_regularMatchupFont;
    CLKFont *_statusFont;
    UILayoutGuide *_logoLayoutGuide;
    UILayoutGuide *_descriptionLayoutGuide;
    NSArray *_withLogoLayoutConstraints;
    NSArray *_withoutDateLayoutConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;


+(id)_timeStringForFetchDate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithMatchup:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;
-(void)updateTimeLabel;


@end


#endif