// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCALLOUTBAR_H
#define AKCALLOUTBAR_H

@class UIView, _UIBackdropView, UIImageView, NSArray;



@interface AKCalloutBar : UIView {
    _UIBackdropView *_backgroundView;
    _UIBackdropView *_separatorBackgroundView;
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    UIImageView *_separatorMaskView;
    CGRect _highlightRect;
}


@property (nonatomic) CGFloat arrowX; // ivar: _arrowX
@property (retain, nonatomic) NSArray *controls; // ivar: _controls
@property (nonatomic) BOOL up; // ivar: _up


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)newMaskView:(NSInteger)arg0 ;
-(struct CGRect )dividerLineRectForControl:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsControls:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBlurDisabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 forControl:(id)arg1 ;


@end


#endif