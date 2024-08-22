// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGMLSEGMENTATIONMODEL_H
#define VGMLSEGMENTATIONMODEL_H

@class NSDictionary;


#import "VGMLImageToMultiFloatsModel.h"

@interface VGMLSegmentationModel : VGMLImageToMultiFloatsModel {
    NSDictionary *_outputLayerNameRemap;
}


@property (readonly, nonatomic) NSUInteger inputImageHeight; // ivar: _inputImageHeight
@property (readonly, nonatomic) NSUInteger inputImageWidth; // ivar: _inputImageWidth
@property (readonly, nonatomic) NSDictionary *outputLayersDictionary; // ivar: _outputLayersDictionary
@property (readonly, nonatomic) NSUInteger outputSegmentationMapHeight; // ivar: _outputSegmentationMapHeight
@property (readonly, nonatomic) NSUInteger outputSegmentationMapWidth; // ivar: _outputSegmentationMapWidth


-(BOOL)hasGlasses:(struct __CVBuffer *)arg0 ;
-(id)_runModel:(struct __CVBuffer *)arg0 ;
-(id)init;
-(id)segmentationMaps:(struct __CVBuffer *)arg0 ;
-(void)inferInputImage:(struct __CVBuffer *)arg0 toOutput:(id)arg1 ;


@end


#endif