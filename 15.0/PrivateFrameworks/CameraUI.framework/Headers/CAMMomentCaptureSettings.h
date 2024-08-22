// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMMOMENTCAPTURESETTINGS_H
#define CAMMOMENTCAPTURESETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CAMMomentCaptureSettings : NSObject

@property (readonly, nonatomic) BOOL autoOriginalPhotoDeliveryEnabled; // ivar: _autoOriginalPhotoDeliveryEnabled
@property (readonly, nonatomic) BOOL autoSpatialOverCaptureEnabled; // ivar: _autoSpatialOverCaptureEnabled
@property (readonly, nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (readonly, nonatomic) NSInteger hdrMode; // ivar: _hdrMode
@property (readonly, nonatomic) NSInteger lowLightMode; // ivar: _lowLightMode
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // ivar: _persistenceUUID
@property (readonly, nonatomic) NSInteger photoEncodingBehavior; // ivar: _photoEncodingBehavior
@property (readonly, nonatomic) NSInteger photoQualityPrioritization; // ivar: _photoQualityPrioritization
@property (readonly, nonatomic) BOOL shouldDisableCameraSwitchingDuringVideoRecording; // ivar: _shouldDisableCameraSwitchingDuringVideoRecording
@property (readonly, nonatomic) NSInteger torchMode; // ivar: _torchMode
@property (readonly, nonatomic) NSUInteger userInitiationTime; // ivar: _userInitiationTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif