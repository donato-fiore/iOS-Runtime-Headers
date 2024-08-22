// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADIMAGEFILL_H
#define OADIMAGEFILL_H



#import "OADFill.h"
#import "OADBlipRef.h"
#import "OADRelativeRect.h"
#import "OADImageFillTechnique.h"

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}




+(id)defaultProperties;
-(BOOL)isAnythingOverridden;
-(BOOL)isBlipRefOverridden;
-(BOOL)isDpiOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)isSourceRectOverridden;
-(BOOL)isTechniqueOverridden;
-(BOOL)rotateWithShape;
-(NSUInteger)hash;
-(id)blipRef;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(id)sourceRect;
-(id)technique;
-(int)dpi;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setBlipRef:(id)arg0 ;
-(void)setDpi:(int)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setRotateWithShape:(BOOL)arg0 ;
-(void)setSourceRect:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;
-(void)setTechnique:(id)arg0 ;


@end


#endif