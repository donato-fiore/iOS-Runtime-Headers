// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUJSDEPTHPROPERTIES_H
#define NUJSDEPTHPROPERTIES_H

@protocol NUJSDepthPropertiesExport, NUAuxiliaryImageProperties;


#import "NUJSProxy.h"
#import "NUJSAVCameraCalibrationData.h"
#import "NUJSCGImageMetadata.h"

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>



@property (readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property (readonly) NUJSCGImageMetadata *depthMetaData;
@property (readonly) NSObject<NUAuxiliaryImageProperties> *depthProperties;


-(id)initWithDepthProperties:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;


@end


#endif