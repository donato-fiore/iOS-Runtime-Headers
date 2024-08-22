// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DTEXCOORDGENERATION_H
#define TSCH3DTEXCOORDGENERATION_H


#import <Foundation/Foundation.h>

#import "TSCH3DNormalDirectionMapper.h"

@interface TSCH3DTexCoordGeneration : NSObject {
    tmat4x4<float> _transform;
}


@property (retain, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper; // ivar: _normalDirectionMapper


-(id)init;
-(id)initWithTransform:(*void)arg0 ;


@end


#endif