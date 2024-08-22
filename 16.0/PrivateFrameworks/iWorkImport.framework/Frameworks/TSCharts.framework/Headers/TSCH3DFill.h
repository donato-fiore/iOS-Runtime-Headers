// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DFILL_H
#define TSCH3DFILL_H

@class TSDFill, NSNumber;


#import "TSCH3DLightingModel.h"
#import "TSCH3DFillSetIdentifier.h"

@interface TSCH3DFill : TSDFill {
    TSCH3DLightingModel *_lightingModel;
    TSDFill *_fallbackFill;
    TSDFill *_cachedImageFill;
    CGSize _cachedImageFillSize;
    TSDFill *_swatchFill;
}


@property (retain, nonatomic) TSCH3DFillSetIdentifier *identifier; // ivar: _identifier
@property (readonly) TSCH3DLightingModel *lightingModel;
@property (retain, nonatomic) NSNumber *percentage; // ivar: _percentage
@property (readonly, nonatomic) float percentageValue;


+(id)fill;
+(id)fillWithIdentifier:(id)arg0 ;
+(id)fillWithLightingModel:(id)arg0 identifier:(id)arg1 ;
+(id)fillWithSageFillData:(id)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)lightingModelWithSageFillData:(id)arg0 ;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOpaque;
-(BOOL)tsch_hasAllResources;
-(NSInteger)fillType;
-(NSUInteger)hash;
-(id)convertForChartSeriesType:(id)arg0 context:(id)arg1 ;
-(id)convertToSimpleTSDFillWithSize:(NSUInteger)arg0 context:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithLightingModel:(id)arg0 identifier:(id)arg1 ;
-(id)lightenByPercent:(float)arg0 ;
-(id)p_convertToTSDFillWithSize:(NSUInteger)arg0 technique:(NSUInteger)arg1 ;
-(id)p_convertToTSDFillWithSize:(NSUInteger)arg0 technique:(NSUInteger)arg1 context:(id)arg2 ;
-(id)p_iconFill;
-(id)p_imageFillForRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(id)p_imageFillForSize:(struct CGSize )arg0 context:(id)arg1 ;
-(id)p_lazyLightingModel;
-(id)referenceColor;
-(id)renderingLightingModelWithLightings:(id)arg0 ;
-(id)representativeDiffuseColor;
-(id)sageFillData;
-(id)swatchFillWithSize:(struct CGSize )arg0 scaleFactor:(CGFloat)arg1 ;
-(void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg0 ;
-(void)didInitFromSOS;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)nonatomicallyClearLightingModel;
-(void)nonatomicallySetLightingModel:(id)arg0 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 offset:(struct CGPoint )arg2 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setFallbackFill:(id)arg0 ;


@end


#endif