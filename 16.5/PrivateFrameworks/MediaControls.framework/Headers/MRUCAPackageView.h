// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUCAPACKAGEVIEW_H
#define MRUCAPACKAGEVIEW_H

@class UIView, NSString, CAPackage, CALayer, CAStateController;


#import "MRUCAPackageAsset.h"

@interface MRUCAPackageView : UIView

@property (retain, nonatomic) MRUCAPackageAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CALayer *packageLayer; // ivar: _packageLayer
@property (readonly, nonatomic) NSString *packageName;
@property (nonatomic) CATransform3D permanentTransform; // ivar: _permanentTransform
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clear;
-(void)layoutSubviews;
-(void)mru_applyVisualStylingWithColor:(id)arg0 alpha:(CGFloat)arg1 blendMode:(NSInteger)arg2 ;
-(void)mt_applyVisualStyling:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)updateFilter;


@end


#endif