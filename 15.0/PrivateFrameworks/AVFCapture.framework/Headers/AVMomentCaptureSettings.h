// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMOMENTCAPTURESETTINGS_H
#define AVMOMENTCAPTURESETTINGS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVMomentCaptureSettings : NSObject <NSCopying>

 {
    NSInteger _torchMode;
    NSInteger _flashMode;
    NSInteger _digitalFlashMode;
    NSInteger _photoQualityPrioritization;
    NSInteger _HDRMode;
    NSString *_bravoCameraSelectionBehaviorForRecording;
}


@property (nonatomic) NSInteger HDRMode;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) BOOL autoDeferredProcessingEnabled; // ivar: _autoDeferredProcessingEnabled
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) BOOL autoOriginalPhotoDeliveryEnabled; // ivar: _autoOriginalPhotoDeliveryEnabled
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) BOOL autoRedEyeReductionEnabled; // ivar: _autoRedEyeReductionEnabled
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled; // ivar: _autoSpatialOverCaptureEnabled
@property (copy, nonatomic) NSString *bravoCameraSelectionBehaviorForRecording;
@property (nonatomic) NSInteger digitalFlashMode;
@property (nonatomic) NSInteger flashMode;
@property (nonatomic) NSInteger photoQualityPrioritization;
@property (nonatomic) unsigned int rawOutputFormat; // ivar: _rawOutputFormat
@property (nonatomic) NSInteger torchMode;
@property (readonly, nonatomic) NSInteger uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) NSUInteger userInitiatedCaptureTime; // ivar: _userInitiatedCaptureTime


+(id)settingsWithUserInitiatedCaptureTime:(NSUInteger)arg0 ;
+(id)settingsWithUserInitiatedCaptureTime:(NSUInteger)arg0 uniqueID:(NSInteger)arg1 ;
-(id)_initWithUserInitiatedCaptureTime:(NSUInteger)arg0 uniqueID:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif