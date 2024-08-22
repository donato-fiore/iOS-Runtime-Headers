// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGMOMENTCAPTURESETTINGS_H
#define FIGMOMENTCAPTURESETTINGS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) int HDRMode; // ivar: _HDRMode
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) BOOL autoDeferredProcessingEnabled; // ivar: _autoDeferredProcessingEnabled
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) BOOL autoOriginalPhotoDeliveryEnabled; // ivar: _autoOriginalPhotoDeliveryEnabled
@property (nonatomic) BOOL autoRedEyeReductionEnabled; // ivar: _autoRedEyeReductionEnabled
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled; // ivar: _autoSpatialOverCaptureEnabled
@property (nonatomic) int clientQualityPrioritization; // ivar: _clientQualityPrioritization
@property (nonatomic) int digitalFlashMode; // ivar: _digitalFlashMode
@property (nonatomic) int flashMode; // ivar: _flashMode
@property (nonatomic) unsigned int outputHeight; // ivar: _outputHeight
@property (nonatomic) unsigned int outputWidth; // ivar: _outputWidth
@property (nonatomic) int qualityPrioritization; // ivar: _qualityPrioritization
@property (nonatomic) unsigned int rawOutputFormat; // ivar: _rawOutputFormat
@property (readonly, nonatomic) NSInteger settingsID; // ivar: _settingsID
@property (nonatomic) int torchMode; // ivar: _torchMode
@property (readonly, nonatomic) NSUInteger userInitiatedCaptureTime; // ivar: _userInitiatedCaptureTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettingsID:(NSInteger)arg0 userInitiatedCaptureTime:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif