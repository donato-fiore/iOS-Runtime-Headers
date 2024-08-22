// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXELEMENTNAMESITEMVIEW_H
#define AXELEMENTNAMESITEMVIEW_H

@class UIView, UILabel, UIImageView, NSString;



@interface AXElementNamesItemView : UIView {
    UILabel *_label;
    UIView *_backgroundView;
    UIImageView *_backgroundMaskView;
}


@property (nonatomic) CGPoint arrowTipLocation; // ivar: _arrowTipLocation
@property (readonly, nonatomic) CGRect availableBounds; // ivar: _availableBounds
@property (readonly, nonatomic) CGRect elementFrame; // ivar: _elementFrame
@property (nonatomic) CGSize forcedLabelContainerSize; // ivar: _forcedLabelContainerSize
@property (readonly, nonatomic) BOOL hasExtendedArrow;
@property (nonatomic) BOOL isSpacer; // ivar: _isSpacer
@property (nonatomic) CGRect labelContainerFrame; // ivar: _labelContainerFrame
@property (nonatomic) CGSize labelContainerSize; // ivar: _labelContainerSize
@property (nonatomic) NSInteger labelPosition; // ivar: _labelPosition
@property (readonly, nonatomic) NSString *name;


-(BOOL)_arrowPointsDown;
-(BOOL)_shouldAllowLongArrows;
-(BOOL)_usesArrow;
-(BOOL)_usesExtendedArrow;
-(BOOL)collidesWithView:(id)arg0 ;
-(CGFloat)_arrowHeight;
-(CGFloat)_cornerRadius;
-(CGFloat)_outlineWidth;
-(id)_newBackgroundImage;
-(id)initWithName:(id)arg0 elementFrame:(struct CGRect )arg1 availableBounds:(struct CGRect )arg2 styleProvider:(id)arg3 isSpacer:(BOOL)arg4 ;
-(struct CGRect )_collisionFrameForArrow;
-(struct CGRect )_validateLabelContainerFrame:(struct CGRect )arg0 ;
-(void)_updateFromLabelContainerFrame;
-(void)_updateFromMainProperties;
-(void)_updateLabelContainerSize;
-(void)layoutSubviews;


@end


#endif