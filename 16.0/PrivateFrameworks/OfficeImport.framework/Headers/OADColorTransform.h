// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADCOLORTRANSFORM_H
#define OADCOLORTRANSFORM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADColorTransform : NSObject <NSCopying>

 {
    int mType;
}




+(float)alphaByApplyingTransforms:(id)arg0 toAlpha:(float)arg1 ;
+(float)applyAlphaTransform:(id)arg0 toAlpha:(float)arg1 ;
+(id)applyExpTransformWithValue:(float)arg0 toColor:(id)arg1 ;
+(id)applyHSLTransform:(id)arg0 toColor:(id)arg1 ;
+(id)applyRGBTransform:(id)arg0 toColor:(id)arg1 skipGamma:(BOOL)arg2 ;
+(id)colorByApplyingTransforms:(id)arg0 toColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(int)arg0 ;
-(int)type;


@end


#endif