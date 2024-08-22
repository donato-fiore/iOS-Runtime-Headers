// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNSMARTCAM5COMPOUNDREQUESTGROUPINGCONFIGURATION_H
#define VNSMARTCAM5COMPOUNDREQUESTGROUPINGCONFIGURATION_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    NSUInteger _imageCropAndScaleOption;
    NSMutableSet *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}




-(BOOL)preferBackgroundProcessing;
-(NSUInteger)imageCropAndScaleOption;
-(id)detectorConfigurationOptions;
-(id)initWithImageCropAndScaleOption:(NSUInteger)arg0 ;
-(id)originalRequests;
-(id)processingDevice;
-(void)addOriginalRequest:(id)arg0 ;
-(void)setDetectorConfigurationOption:(id)arg0 value:(id)arg1 ;


@end


#endif