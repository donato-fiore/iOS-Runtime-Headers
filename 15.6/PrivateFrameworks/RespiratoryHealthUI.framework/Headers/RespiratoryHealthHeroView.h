// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESPIRATORYHEALTHHEROVIEW_H
#define RESPIRATORYHEALTHHEROVIEW_H

@class UIView, UIImageView;


#import "RespiratoryHealthHeroCountdownLabel.h"

@interface RespiratoryHealthHeroView : UIView {
    CGSize _watchImageSize;
    CGRect _watchImageMediumFrame;
    UIImageView *_watchImageView;
    CGRect _heroImageMediumFrame;
    UIImageView *_heroImageView;
    CGRect _countdownLabelMediumFrame;
    RespiratoryHealthHeroCountdownLabel *_countdownLabel;
}


@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth


-(CGFloat)validScaleFactorForCandidate:(CGFloat)arg0 ;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_updateHeroUIWithScaleFactor:(CGFloat)arg0 ;


@end


#endif