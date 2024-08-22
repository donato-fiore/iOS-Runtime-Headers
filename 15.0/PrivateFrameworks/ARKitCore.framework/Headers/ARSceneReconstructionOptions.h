// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSCENERECONSTRUCTIONOPTIONS_H
#define ARSCENERECONSTRUCTIONOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARSceneReconstructionOptions : NSObject <NSCopying>



@property (nonatomic) NSInteger bucketsCount; // ivar: _bucketsCount
@property (nonatomic) BOOL deterministicMode; // ivar: _deterministicMode
@property (nonatomic) BOOL enableKeyVolPipeline; // ivar: _enableKeyVolPipeline
@property (nonatomic) BOOL enableOccupancyMapping; // ivar: _enableOccupancyMapping
@property (nonatomic) BOOL lowQosSchedulingEnabled; // ivar: _lowQosSchedulingEnabled
@property (nonatomic) NSInteger preset; // ivar: _preset
@property (nonatomic) NSInteger voxelSize; // ivar: _voxelSize


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif