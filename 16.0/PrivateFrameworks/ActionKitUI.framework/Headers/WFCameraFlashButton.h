// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCAMERAFLASHBUTTON_H
#define WFCAMERAFLASHBUTTON_H

@class UIControl, UIImageView, NSArray, UILabel;



@interface WFCameraFlashButton : UIControl

@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (nonatomic) NSInteger flashMode;
@property (weak, nonatomic) UIImageView *flashView; // ivar: _flashView
@property (retain, nonatomic) NSArray *labels; // ivar: _labels
@property (nonatomic) BOOL needsHiding; // ivar: _needsHiding
@property (retain, nonatomic) UILabel *selectedLabel; // ivar: _selectedLabel


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif