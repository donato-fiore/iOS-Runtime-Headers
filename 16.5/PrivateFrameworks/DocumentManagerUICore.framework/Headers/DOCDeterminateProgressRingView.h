// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCDETERMINATEPROGRESSRINGVIEW_H
#define DOCDETERMINATEPROGRESSRINGVIEW_H

@class UIView, CALayer;



@interface DOCDeterminateProgressRingView : UIView {
    CALayer *_squareLayer;
}


@property (nonatomic) BOOL canShowStopButton; // ivar: _canShowStopButton
@property (nonatomic) CGFloat progress; // ivar: _progress


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateShapePath;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg0 ;


@end


#endif