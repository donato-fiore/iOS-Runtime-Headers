// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFOCUSRING_H
#define PXFOCUSRING_H

@class UIView, CALayer;



@interface PXFocusRing : UIView {
    CALayer *_outerLayer;
    CALayer *_focusLayer;
    CALayer *_innerLayer;
}




+(void)updateView:(id)arg0 infoProviderBlock:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateColors;
-(void)_updateWithInfo:(id)arg0 ;
-(void)_updateWithView:(id)arg0 ;
-(void)_updateWithView:(id)arg0 focusRect:(struct CGRect )arg1 cornerRadius:(CGFloat)arg2 innerBorderWidth:(CGFloat)arg3 outerBorderWidth:(CGFloat)arg4 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif