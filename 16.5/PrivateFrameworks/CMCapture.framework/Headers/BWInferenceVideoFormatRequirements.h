// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCEVIDEOFORMATREQUIREMENTS_H
#define BWINFERENCEVIDEOFORMATREQUIREMENTS_H

@protocol BWInferenceCropDescriptor;


#import "BWVideoFormatRequirements.h"

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements

@property (retain, nonatomic) NSObject<BWInferenceCropDescriptor> *cropDescriptor; // ivar: _cropDescriptor
@property (nonatomic) BOOL deviceOriented; // ivar: _deviceOriented
@property (copy, nonatomic) id *histogramRequest; // ivar: _histogramRequest
@property (nonatomic) BOOL includesInvalidContent; // ivar: _includesInvalidContent
@property (nonatomic) int rotationDegrees; // ivar: _rotationDegrees
@property (nonatomic) NSInteger videoContentMode; // ivar: _videoContentMode


+(id)defaultEspressoFormatRequirementsWithWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)initWithFormat:(id)arg0 ;
-(void)dealloc;


@end


#endif