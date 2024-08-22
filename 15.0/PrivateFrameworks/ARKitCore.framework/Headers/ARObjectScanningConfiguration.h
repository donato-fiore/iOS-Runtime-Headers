// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AROBJECTSCANNINGCONFIGURATION_H
#define AROBJECTSCANNINGCONFIGURATION_H



#import "ARConfiguration.h"

@interface ARObjectScanningConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults; // ivar: _deliverRawSceneUnderstandingResults
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled; // ivar: _lowQosSchedulingEnabled
@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled; // ivar: _mlModelEnabled
@property (nonatomic) NSUInteger planeDetection; // ivar: _planeDetection


+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(id)new;
+(id)supportedVideoFormats;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageSensorSettings;
-(id)init;
-(void)createTechniques:(id)arg0 ;


@end


#endif