// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTMATCHUPUPCOMINGVIEW_H
#define NTKUPNEXTMATCHUPUPCOMINGVIEW_H

@class UIView, UIImageView, CLKUIColoringLabel, UILayoutGuide, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;



@interface NTKUpNextMatchupUpcomingView : UIView <CLKMonochromeComplicationView>

 {
    UIImageView *_homeLogoImageView;
    UIImageView *_awayLogoImageView;
    CLKUIColoringLabel *_versusLabel;
    CLKUIColoringLabel *_descriptionLabel;
    UILayoutGuide *_homeLogoLayoutGuide;
    UILayoutGuide *_awayLogoLayoutGuide;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithMatchup:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif