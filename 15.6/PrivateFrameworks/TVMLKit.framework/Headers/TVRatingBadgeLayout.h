// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRATINGBADGELAYOUT_H
#define TVRATINGBADGELAYOUT_H

@class UIColor, NSString;


#import "TVViewLayout.h"

@interface TVRatingBadgeLayout : TVViewLayout

@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat interitemSpacingAXLarge; // ivar: _interitemSpacingAXLarge
@property (nonatomic) CGFloat interitemSpacingAXSmall; // ivar: _interitemSpacingAXSmall
@property (retain, nonatomic) NSString *ratingStyle; // ivar: _ratingStyle
@property (retain, nonatomic) NSString *ratingStyleAXLarge; // ivar: _ratingStyleAXLarge
@property (retain, nonatomic) NSString *ratingStyleAXSmall; // ivar: _ratingStyleAXSmall


+(id)layoutWithLayout:(id)arg0 element:(id)arg1 ;


@end


#endif