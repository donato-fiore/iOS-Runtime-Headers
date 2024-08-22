// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKOVERALLRATINGHEADERVIEW_H
#define MKOVERALLRATINGHEADERVIEW_H

@class UILabel, NSString, NSAttributedString, GEOAppleRating;


#import "MKPlaceSectionItemView.h"

@interface MKOverallRatingHeaderView : MKPlaceSectionItemView {
    UILabel *_overallPercentageLabel;
    UILabel *_thumbsRecommendedLabel;
    UILabel *_numberOfPeopleLabel;
}


@property (readonly, nonatomic) NSString *numberOfPeopleString;
@property (readonly, nonatomic) NSAttributedString *overallPercentageString;
@property (retain, nonatomic) GEOAppleRating *overallRating; // ivar: _overallRating


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)recommendedString;
-(void)_contentSizeDidChange;
-(void)_updateContent;


@end


#endif