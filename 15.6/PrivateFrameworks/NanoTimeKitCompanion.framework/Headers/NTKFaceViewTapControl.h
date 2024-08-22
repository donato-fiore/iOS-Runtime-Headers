// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEVIEWTAPCONTROL_H
#define NTKFACEVIEWTAPCONTROL_H

@class UIControl, NSString, UIImageView;
@protocol NTKControl;



@interface NTKFaceViewTapControl : UIControl <NTKControl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *highlightImageView; // ivar: _highlightImageView
@property (readonly) Class superclass;


-(BOOL)shouldCancelTouchesInScrollview;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif