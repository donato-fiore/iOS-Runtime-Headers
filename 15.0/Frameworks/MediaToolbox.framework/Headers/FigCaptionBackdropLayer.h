// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTIONBACKDROPLAYER_H
#define FIGCAPTIONBACKDROPLAYER_H

@class CAFilter;


#import "FigBaseCABackdropLayer.h"

@interface FigCaptionBackdropLayer : FigBaseCABackdropLayer {
    CAFilter *backdropFilter;
}




+(unsigned char)isSupported;
+(void)initialize;
-(id)init;
-(void)applyRoundedCorners:(struct CGPath *)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)insertBackdropAsSublayerToLayer:(id)arg0 below:(id)arg1 ;
-(void)removeBackdropFromSuperLayer;


@end


#endif