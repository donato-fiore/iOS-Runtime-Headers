// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTILETECHNIQUE_H
#define OADTILETECHNIQUE_H



#import "OADImageFillTechnique.h"

@interface OADTileTechnique : OADImageFillTechnique {
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}




+(id)defaultProperties;
-(BOOL)isAlignmentOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFlipModeOverridden;
-(BOOL)isOffsetXOverridden;
-(BOOL)isOffsetYOverridden;
-(BOOL)isScaleXOverridden;
-(BOOL)isScaleYOverridden;
-(NSUInteger)hash;
-(float)offsetX;
-(float)offsetY;
-(float)scaleX;
-(float)scaleY;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(int)alignment;
-(int)flipMode;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setAlignment:(int)arg0 ;
-(void)setFlipMode:(int)arg0 ;
-(void)setOffsetX:(float)arg0 ;
-(void)setOffsetY:(float)arg0 ;
-(void)setScaleX:(float)arg0 ;
-(void)setScaleY:(float)arg0 ;


@end


#endif