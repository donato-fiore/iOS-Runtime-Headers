// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARIMAGEROTATIONTECHNIQUE_H
#define ARIMAGEROTATIONTECHNIQUE_H



#import "ARTechnique.h"

@interface ARImageRotationTechnique : ARTechnique {
    *OpaqueVTPixelRotationSession _vtPixelRotationSession;
    *__CVPixelBufferPool _bufferPool;
}


@property (readonly, nonatomic) NSInteger mirrorMode; // ivar: _mirrorMode
@property (readonly, nonatomic) NSInteger rotationAngle; // ivar: _rotationAngle


-(?)_rotateAcceleratepOutputBuffer;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)_fullDescription;
-(id)initWithRotation:(NSInteger)arg0 mirror:(NSInteger)arg1 ;
-(id)processData:(id)arg0 ;
-(void)dealloc;


@end


#endif