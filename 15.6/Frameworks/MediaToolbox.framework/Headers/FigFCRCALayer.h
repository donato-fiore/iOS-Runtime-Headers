// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGFCRCALAYER_H
#define FIGFCRCALAYER_H



#import "FigBaseCALayer.h"

@interface FigFCRCALayer : FigBaseCALayer {
    *OpaqueFigCaptionRendererCALayerInternal layerInternal;
}




-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)clear:(struct CGRect )arg0 ;
-(void)compose;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setCallbacks:(id)arg0 userEvent:(*unk)arg1 viewportChanged:(*unk)arg2 drawInContext:(*unk)arg3 ;
-(void)setVideoBounds:(struct CGRect )arg0 ;


@end


#endif