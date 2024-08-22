// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGSUBTITLEWEBVTTREGIONCALAYER_H
#define FIGSUBTITLEWEBVTTREGIONCALAYER_H



#import "FigBaseCALayer.h"

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {
    *OpaqueFigSubtitleWebVTTRegionCALayerInternal layerInternal;
}




-(id)init;
-(struct __CFString *)getContentID;
-(void)dealloc;
-(void)handleNeedsLayoutNotification;
-(void)layoutSublayers;
-(void)setContent:(struct __CFDictionary *)arg0 ;
-(void)setNeedsDisplay;
-(void)setReLayout;
-(void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg0 ;
-(void)setViewport:(struct CGRect )arg0 ;


@end


#endif