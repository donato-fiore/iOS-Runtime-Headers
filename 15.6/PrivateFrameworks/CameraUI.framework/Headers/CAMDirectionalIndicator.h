// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDIRECTIONALINDICATOR_H
#define CAMDIRECTIONALINDICATOR_H

@class UIControl, CAShapeLayer, NSString;
@protocol CAMAccessibilityHUDItemProvider;



@interface CAMDirectionalIndicator : UIControl <CAMAccessibilityHUDItemProvider>



@property (readonly, nonatomic) CAShapeLayer *_arrowLayer; // ivar: __arrowLayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_createCircleImage;
+(struct CGSize )_circleSize;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateArrowColorAnimated:(BOOL)arg0 ;
-(void)_updateArrowLineWidth;
-(void)_updateArrowShapeAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif