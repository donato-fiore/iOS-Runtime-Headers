// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DTRANSFORMGEOMETRYRENDERPROCESSOR_H
#define TSCH3DTRANSFORMGEOMETRYRENDERPROCESSOR_H



#import "TSCH3DRetargetRenderProcessor.h"
#import "TSCH3DDataBuffer.h"

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor

@property (readonly, nonatomic) TSCH3DDataBuffer *buffer; // ivar: _buffer


+(id)processorWithOriginal:(id)arg0 ;
-(id)init;
-(id)initWithOriginal:(id)arg0 ;
-(id)matrix;
-(void)geometry:(id)arg0 ;
-(void)setOriginal:(id)arg0 ;


@end


#endif