// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDBITMAPRENDERINGQUALITYINFO_H
#define TSDBITMAPRENDERINGQUALITYINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSDBitmapRenderingQualityInfo : NSObject {
    NSMutableDictionary *mImageMap;
}


@property (readonly, nonatomic) CGFloat canvasScale; // ivar: mCanvasScale
@property (readonly, nonatomic) int quality; // ivar: mQuality


-(CGFloat)qualityScaleForSize:(struct CGSize )arg0 ;
-(Class)imageMapValueClass;
-(id)initWithQuality:(int)arg0 canvasScale:(CGFloat)arg1 ;
-(struct CGImage *)degradedImageRefForProvider:(id)arg0 ofSize:(struct CGSize )arg1 ;
-(void)cacheProvider:(id)arg0 ofSize:(struct CGSize )arg1 ;
-(void)doneCaching:(id)arg0 forProvider:(id)arg1 ;


@end


#endif