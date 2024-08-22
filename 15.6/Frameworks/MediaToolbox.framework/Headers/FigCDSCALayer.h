// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCDSCALAYER_H
#define FIGCDSCALAYER_H



#import "FigBaseCALayer.h"

@interface FigCDSCALayer : FigBaseCALayer {
    *OpaqueFigCDSCALayerInternal layerInternal;
}




-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)clear:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)layoutSublayers;
-(void)setCallbacks:(id)arg0 userEvent:(*unk)arg1 viewportChanged:(*unk)arg2 drawInContext:(*unk)arg3 ;
-(void)setVideoBounds:(struct CGRect )arg0 ;


@end


#endif