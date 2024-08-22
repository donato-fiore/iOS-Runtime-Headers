// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIMAGEDRAWINGHELPER_H
#define TSDIMAGEDRAWINGHELPER_H

@class TSPData, TSDRep<TSDImageDrawingDataSource>;

#import <Foundation/Foundation.h>


@interface TSDImageDrawingHelper : NSObject

@property (readonly, nonatomic) BOOL drawsBitmap;
@property (readonly, nonatomic) BOOL drawsError;
@property (readonly, nonatomic) TSPData *imageDataForDrawing;
@property (readonly, weak, nonatomic) TSDRep<TSDImageDrawingDataSource> *rep; // ivar: _rep
@property (readonly, nonatomic) BOOL shouldShowCheckerboard;


-(BOOL)p_canDrawThumbnailAsSizedImage;
-(id)initWithRep:(id)arg0 ;
-(id)p_imageProvider;
-(id)p_validatedBitmapImageProvider;
-(id)p_validatedImageProvider;
-(id)p_validatedThumbnailImageProvider;
-(struct CGRect )imageRectInContext:(struct CGContext *)arg0 ;
-(struct CGRect )p_antialiasingDefeatedRectForRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(struct CGSize )p_desiredSizedImageSize;
-(struct CGSize )p_imagePixelSize;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 forLayer:(BOOL)arg1 forShadowOrHitTest:(BOOL)arg2 ;
-(void)teardown;


@end


#endif