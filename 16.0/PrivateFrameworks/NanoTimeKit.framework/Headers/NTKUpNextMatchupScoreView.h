// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTMATCHUPSCOREVIEW_H
#define NTKUPNEXTMATCHUPSCOREVIEW_H

@class UIView, UIImageView, CLKUIColoringLabel, NSDate, CLKFont, UILayoutGuide, NSArray, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;



@interface NTKUpNextMatchupScoreView : UIView <CLKMonochromeComplicationView>

 {
    UIImageView *_homeLogoImageView;
    CLKUIColoringLabel *_homeNameLabel;
    CLKUIColoringLabel *_homeDescriptionLabel;
    UIImageView *_awayLogoIamgeView;
    CLKUIColoringLabel *_awayNameLabel;
    CLKUIColoringLabel *_awayDescriptionLabel;
    CLKUIColoringLabel *_statusLabel;
    CLKUIColoringLabel *_timeLabel;
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