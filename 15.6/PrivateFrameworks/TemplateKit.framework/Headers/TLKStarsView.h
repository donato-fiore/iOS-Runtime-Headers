// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKSTARSVIEW_H
#define TLKSTARSVIEW_H

@class UIFont;


#import "TLKStackView.h"

@interface TLKStarsView : TLKStackView

@property (nonatomic) CGFloat currentStarRating; // ivar: _currentStarRating
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat starRating; // ivar: _starRating
@property (nonatomic) BOOL useCompactMode; // ivar: _useCompactMode


-(id)init;
-(void)updateStarImages;


@end


#endif