// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKMOMENTSINDICATORBUBBLE_H
#define CNKMOMENTSINDICATORBUBBLE_H

@class UIView, NSLayoutConstraint, UILabel, NSTimer;
@protocol CNKMomentsIndicatorBubbleDelegate;


#import "CNKMomentsIndicatorViewModel.h"

@interface CNKMomentsIndicatorBubble : UIView

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (weak, nonatomic) NSObject<CNKMomentsIndicatorBubbleDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UILabel *indicatorLabel; // ivar: _indicatorLabel
@property (retain, nonatomic) CNKMomentsIndicatorViewModel *model; // ivar: _model
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSLayoutConstraint *verticalAlignmentConstraint; // ivar: _verticalAlignmentConstraint


+(float)layoutPadding;
+(id)font;
-(id)description;
-(id)initWithModel:(id)arg0 ;
-(void)loadConstraints;
-(void)refresh;
-(void)start;
-(void)timeOut;


@end


#endif