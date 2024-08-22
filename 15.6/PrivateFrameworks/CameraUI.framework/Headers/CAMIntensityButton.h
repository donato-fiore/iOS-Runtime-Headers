// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMINTENSITYBUTTON_H
#define CAMINTENSITYBUTTON_H

@class UIButton;



@interface CAMIntensityButton : UIButton

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) CGFloat intensityValue; // ivar: _intensityValue
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets


-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_updateColorsAnimated:(BOOL)arg0 ;


@end


#endif