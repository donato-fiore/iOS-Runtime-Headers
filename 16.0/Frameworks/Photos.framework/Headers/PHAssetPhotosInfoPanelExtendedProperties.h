// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETPHOTOSINFOPANELEXTENDEDPROPERTIES_H
#define PHASSETPHOTOSINFOPANELEXTENDEDPROPERTIES_H

@class NSNumber, NSString, NSDate;


#import "PHAssetPropertySet.h"

@interface PHAssetPhotosInfoPanelExtendedProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSNumber *aperture; // ivar: _aperture
@property (readonly, nonatomic) NSNumber *bitrate; // ivar: _bitrate
@property (readonly, nonatomic) NSString *cameraMake; // ivar: _cameraMake
@property (readonly, nonatomic) NSString *cameraModel; // ivar: _cameraModel
@property (readonly, nonatomic) NSString *codec; // ivar: _codec
@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSNumber *digitalZoomRatio; // ivar: _digitalZoomRatio
@property (readonly, nonatomic) NSNumber *duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *exposureBias; // ivar: _exposureBias
@property (readonly, nonatomic) NSNumber *flashFired; // ivar: _flashFired
@property (readonly, nonatomic) NSNumber *focalLength; // ivar: _focalLength
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm; // ivar: _focalLengthIn35mm
@property (readonly, nonatomic) NSString *formattedCameraModel; // ivar: _formattedCameraModel
@property (readonly, nonatomic) NSNumber *fps; // ivar: _fps
@property (readonly, nonatomic) NSNumber *iso; // ivar: _iso
@property (readonly, nonatomic) NSString *lensModel; // ivar: _lensModel
@property (readonly, nonatomic) NSNumber *meteringMode; // ivar: _meteringMode
@property (readonly, nonatomic) NSNumber *sampleRate; // ivar: _sampleRate
@property (readonly, nonatomic) NSNumber *semanticStylePreset; // ivar: _semanticStylePreset
@property (readonly, nonatomic) NSNumber *shutterSpeed; // ivar: _shutterSpeed
@property (readonly, nonatomic) NSString *timezoneName; // ivar: _timezoneName
@property (readonly, nonatomic) NSNumber *timezoneOffset; // ivar: _timezoneOffset
@property (readonly, nonatomic) NSNumber *trackFormat; // ivar: _trackFormat
@property (readonly, nonatomic) NSNumber *whiteBalance; // ivar: _whiteBalance


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif