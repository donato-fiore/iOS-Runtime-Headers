// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADGRADIENTFILL_H
#define OADGRADIENTFILL_H

@class NSArray;


#import "OADFill.h"
#import "OADRelativeRect.h"
#import "OADShade.h"

@interface OADGradientFill : OADFill {
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADShade *mShade;
}




+(id)defaultProperties;
+(id)stringForTileFlipMode:(int)arg0 ;
-(BOOL)areStopsOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFlipModeOverridden;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)isShadeOverridden;
-(BOOL)isTileRectOverridden;
-(BOOL)rotateWithShape;
-(BOOL)usesPlaceholderColor;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstStop;
-(id)initWithDefaults;
-(id)lastStop;
-(id)shade;
-(id)stops;
-(id)tileRect;
-(int)flipMode;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setFlipMode:(int)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setRotateWithShape:(BOOL)arg0 ;
-(void)setShade:(id)arg0 ;
-(void)setStops:(id)arg0 ;
-(void)setStyleColor:(id)arg0 ;
-(void)setTileRect:(id)arg0 ;
-(void)sortStops;


@end


#endif