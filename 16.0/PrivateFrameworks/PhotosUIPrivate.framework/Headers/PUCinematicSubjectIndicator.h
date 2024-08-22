// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCINEMATICSUBJECTINDICATOR_H
#define PUCINEMATICSUBJECTINDICATOR_H

@class UIView, CEKSubjectIndicatorView, CEKCinematicSubjectIndicatorView;



@interface PUCinematicSubjectIndicator : UIView {
    CEKSubjectIndicatorView *_fixedFocusView;
    CEKCinematicSubjectIndicatorView *_subjectView;
    CGSize _fixedFocusSize;
}


@property (nonatomic) BOOL isPulsing; // ivar: _isPulsing
@property (nonatomic) NSInteger shape; // ivar: _shape


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_startPulseAnimation;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif