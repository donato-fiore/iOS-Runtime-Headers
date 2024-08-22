// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLEXTENDEDATTRIBUTES_H
#define PLEXTENDEDATTRIBUTES_H

@class NSNumber, NSString;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"

@interface PLExtendedAttributes : PLManagedObject

@property (retain, nonatomic) NSNumber *aperture;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSString *cameraMake;
@property (retain, nonatomic) NSString *cameraModel;
@property (retain, nonatomic) NSString *codec;
@property (retain, nonatomic) NSNumber *digitalZoomRatio;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *exposureBias;
@property (retain, nonatomic) NSNumber *flashFired;
@property (retain, nonatomic) NSNumber *focalLength;
@property (retain, nonatomic) NSNumber *focalLengthIn35mm;
@property (retain, nonatomic) NSNumber *fps;
@property (retain, nonatomic) NSNumber *iso;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSString *lensModel;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *meteringMode;
@property (retain, nonatomic) NSNumber *sampleRate;
@property (retain, nonatomic) NSNumber *shutterSpeed;
@property (retain, nonatomic) NSNumber *slushPreset;
@property (retain, nonatomic) NSNumber *slushSceneBias;
@property (retain, nonatomic) NSNumber *slushVersion;
@property (retain, nonatomic) NSNumber *slushWarmthBias;
@property (retain, nonatomic) NSNumber *trackFormat;
@property (retain, nonatomic) NSNumber *whiteBalance;


+(id)distinctValuesForKeyPath:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(id)entityName;
-(id)formattedCameraModel;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;


@end


#endif