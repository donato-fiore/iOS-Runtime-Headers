// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNMOTIONBACKGROUND_H
#define KNMOTIONBACKGROUND_H

@class TSUColor;

#import <Foundation/Foundation.h>

#import "KNMotionBackgroundStyle.h"

@interface KNMotionBackground : NSObject

@property (readonly, nonatomic) TSUColor *referenceColor;
@property (readonly, nonatomic) KNMotionBackgroundStyle *style; // ivar: _style


+(id)serialQueue;
+(struct CGColorSpace *)colorSpace;
-(BOOL)canBlendWithMotionBackground:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)blendingFactoryForTargetMotionBackground:(id)arg0 ;
-(id)fillWithSize:(struct CGSize )arg0 ;
-(id)initWithStyle:(id)arg0 ;
-(struct CGImage *)newPosterFrameWithSize:(struct CGSize )arg0 ;
-(struct CGImage *)p_newPosterFrameWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(struct CGSize )p_adjustedPosterFrameSize:(struct CGSize )arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 inRect:(struct CGRect )arg1 ;
-(void)reset;
-(void)updateWithStyle:(id)arg0 ;


@end


#endif