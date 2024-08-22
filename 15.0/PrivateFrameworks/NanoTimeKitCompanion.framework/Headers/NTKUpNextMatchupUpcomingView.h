// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUPNEXTMATCHUPUPCOMINGVIEW_H
#define NTKUPNEXTMATCHUPUPCOMINGVIEW_H

@class UIView, UIImageView, UILayoutGuide, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKColoringLabel.h"

@interface NTKUpNextMatchupUpcomingView : UIView <CLKMonochromeComplicationView>

 {
    UIImageView *_homeLogoImageView;
    UIImageView *_awayLogoImageView;
    NTKColoringLabel *_versusLabel;
    NTKColoringLabel *_descriptionLabel;
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