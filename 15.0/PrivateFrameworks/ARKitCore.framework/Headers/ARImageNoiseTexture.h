// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARIMAGENOISETEXTURE_H
#define ARIMAGENOISETEXTURE_H

@protocol OS_dispatch_queue, MTLTexture;

#import <Foundation/Foundation.h>


@interface ARImageNoiseTexture : NSObject {
    float _minSNR;
    float _maxSNR;
    float _nSteps;
    NSObject<OS_dispatch_queue> *_queue;
    float _lastSNR;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture


+(id)sharedInstanceForCameraPosition:(NSInteger)arg0 longEdgeImageResolution:(unsigned int)arg1 ;
-(float)snrToNoiseIntensity:(float)arg0 ;
-(id)initWithNoiseModel:(int)arg0 ;


@end


#endif