// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PMTRIMMERCONTAINERVIEW_H
#define _PMTRIMMERCONTAINERVIEW_H

@class UIView;



@interface _PMTrimmerContainerView : UIView

@property (retain, nonatomic) UIView *debugOverlay; // ivar: _debugOverlay
@property (retain, nonatomic) UIView *movieScrubber; // ivar: _movieScrubber


-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif