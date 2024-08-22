// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUCAPACKAGEVIEW_H
#define MRUCAPACKAGEVIEW_H

@class UIView, CAStateController, CAPackage, CALayer, NSString;



@interface MRUCAPackageView : UIView {
    CAStateController *_stateController;
    CAPackage *_package;
    CALayer *_packageLayer;
}


@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (retain, nonatomic) NSString *packageName; // ivar: _packageName
@property (nonatomic) CATransform3D permanentTransform; // ivar: _permanentTransform
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPackage:(id)arg0 ;
-(void)clear;
-(void)layoutSubviews;
-(void)mru_applyVisualStylingWithColor:(id)arg0 alpha:(CGFloat)arg1 blendMode:(NSInteger)arg2 ;
-(void)mt_applyVisualStyling:(id)arg0 ;
-(void)setAsset:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif