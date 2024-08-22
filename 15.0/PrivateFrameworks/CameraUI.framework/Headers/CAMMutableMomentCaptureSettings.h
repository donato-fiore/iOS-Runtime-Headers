// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMMUTABLEMOMENTCAPTURESETTINGS_H
#define CAMMUTABLEMOMENTCAPTURESETTINGS_H

@class NSString;


#import "CAMMomentCaptureSettings.h"

@interface CAMMutableMomentCaptureSettings : CAMMomentCaptureSettings

@property (nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) BOOL autoSpatialOverCaptureEnabled;
@property (nonatomic) NSInteger flashMode;
@property (nonatomic) NSInteger hdrMode;
@property (nonatomic) NSInteger lowLightMode;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) NSInteger photoEncodingBehavior;
@property (nonatomic) NSInteger photoQualityPrioritization;
@property (nonatomic) BOOL shouldDisableCameraSwitchingDuringVideoRecording;
@property (nonatomic) NSInteger torchMode;
@property (nonatomic) NSUInteger userInitiationTime;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif