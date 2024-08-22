// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARCV3DPLANEDETECTIONPLANELIST_H
#define ARCV3DPLANEDETECTIONPLANELIST_H


#import <Foundation/Foundation.h>


@interface ARCV3DPlaneDetectionPlaneList : NSObject

@property (readonly, nonatomic) *CV3DPlaneDetectionPlaneList cv3dPlaneDetections; // ivar: _cv3dPlaneDetections


-(NSUInteger)numberOfPlanes;
-(id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList *)arg0 ;
-(struct CV3DPlaneDetectionPlane *)planeAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif