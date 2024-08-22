// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIMAGEVIEWSPEC_H
#define PXIMAGEVIEWSPEC_H

@class NSArray;


#import "PXViewSpec.h"

@interface PXImageViewSpec : PXViewSpec

@property (readonly, nonatomic) CGPoint floatingContentMotionRotation;
@property (readonly, nonatomic) CGPoint floatingContentMotionTranslation;
@property (readonly, nonatomic) CGFloat floatingShadowOpacity;
@property (readonly, nonatomic) CGFloat floatingShadowRadius;
@property (readonly, nonatomic) CGSize floatingUnfocusedShadowExpansion;
@property (readonly, nonatomic) CGFloat floatingUnfocusedShadowOpacity;
@property (readonly, nonatomic) CGFloat floatingUnfocusedShadowRadius;
@property (readonly, nonatomic) CGFloat floatingUnfocusedShadowVerticalOffset;
@property (readonly, nonatomic) CGFloat focusedSizeIncrease;
@property (copy, nonatomic) NSArray *overlaySpecs; // ivar: _overlaySpecs
@property (nonatomic) NSInteger roundedCornersMode; // ivar: _roundedCornersMode
@property (nonatomic) BOOL shouldEnableFocus; // ivar: _shouldEnableFocus


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif