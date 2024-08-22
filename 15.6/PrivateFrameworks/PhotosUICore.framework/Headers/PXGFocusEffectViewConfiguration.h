// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGFOCUSEFFECTVIEWCONFIGURATION_H
#define PXGFOCUSEFFECTVIEWCONFIGURATION_H



#import "PXGFocusableViewConfiguration.h"

@interface PXGFocusEffectViewConfiguration : PXGFocusableViewConfiguration

@property (nonatomic) CGPoint contentMotionRotation; // ivar: _contentMotionRotation
@property (nonatomic) CGPoint contentMotionTranslation; // ivar: _contentMotionTranslation
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat focusedSizeIncrease; // ivar: _focusedSizeIncrease


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif