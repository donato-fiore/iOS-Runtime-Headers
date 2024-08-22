// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPHOUGHTRANSFORM_H
#define VCPHOUGHTRANSFORM_H


#import <Foundation/Foundation.h>


@interface VCPHoughTransform : NSObject {
    *float _edgeMap;
    int _mapWidth;
    int _mapHeight;
    *int _accumulator;
    int _accWidth;
    int _accHeight;
    int _accHalfHeight;
    float _angleStep;
    BOOL _verbose;
}




-(id)initWithEdgeMap:(*float)arg0 mapWidth:(int)arg1 mapHeight:(int)arg2 angleStep:(float)arg3 ;
-(int)DetectLinesWithThreshold:(int)arg0 output:(id)arg1 ;
-(void)Transform;
-(void)dealloc;


@end


#endif