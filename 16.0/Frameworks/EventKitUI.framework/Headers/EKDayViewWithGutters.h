// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKDAYVIEWWITHGUTTERS_H
#define EKDAYVIEWWITHGUTTERS_H

@class UIView;


#import "EKDayAllDayView.h"
#import "EKDayView.h"

@interface EKDayViewWithGutters : UIView {
    EKDayAllDayView *_leftAllDayView;
    EKDayAllDayView *_rightAllDayView;
    NSInteger _targetSizeClass;
}


@property (nonatomic) CGFloat allDayHeight; // ivar: _allDayHeight
@property (retain, nonatomic) EKDayView *dayView; // ivar: _dayView
@property (nonatomic) CGFloat gutterWidth; // ivar: _gutterWidth
@property (readonly, nonatomic) UIView *leftGutter; // ivar: _leftGutter
@property (readonly, nonatomic) UIView *rightGutter; // ivar: _rightGutter


-(id)_createAllDayView;
-(id)initWithFrame:(struct CGRect )arg0 dayView:(id)arg1 sizeClass:(NSInteger)arg2 ;


@end


#endif