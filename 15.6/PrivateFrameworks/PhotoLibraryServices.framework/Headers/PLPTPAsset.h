// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPTPASSET_H
#define PLPTPASSET_H

@class NSString, UTType, NSData, NSNumber;
@protocol NSMutableCopying, NSCopying;

#import <Foundation/Foundation.h>

#import "PLPTPAssetHandle.h"

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying>



@property (readonly, copy, nonatomic) PLPTPAssetHandle *assetHandle; // ivar: _assetHandle
@property (readonly, nonatomic, getter=isBurstFavorite) BOOL burstFavorite; // ivar: _burstFavorite
@property (readonly, nonatomic, getter=isBurstFirstPicked) BOOL burstFirstPicked; // ivar: _burstFirstPicked
@property (readonly, nonatomic, getter=isBurstPicked) BOOL burstPicked; // ivar: _burstPicked
@property (readonly, copy, nonatomic) NSString *burstUUID; // ivar: _burstUUID
@property (readonly, copy, nonatomic) NSString *cacheKey;
@property (readonly, copy, nonatomic) NSString *captureDateString; // ivar: _captureDateString
@property (readonly, nonatomic) UTType *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSInteger conversionGroup; // ivar: _conversionGroup
@property (readonly, copy, nonatomic) NSString *createdFilename; // ivar: _createdFilename
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic) NSInteger desiredOrientation; // ivar: _desiredOrientation
@property (readonly, copy, nonatomic) NSString *durationString; // ivar: _durationString
@property (readonly, copy, nonatomic) NSData *event; // ivar: _event
@property (readonly, nonatomic, getter=isExifAvailable) BOOL exifAvailable; // ivar: _exifAvailable
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, copy, nonatomic) NSString *fullDirectoryPath; // ivar: _fullDirectoryPath
@property (readonly, copy, nonatomic) NSString *groupUUID; // ivar: _groupUUID
@property (readonly, nonatomic, getter=isHighFrameRateVideo) BOOL highFrameRateVideo; // ivar: _highFrameRateVideo
@property (readonly, nonatomic) CGSize imagePixSize; // ivar: _imagePixSize
@property (readonly, copy, nonatomic) NSString *locationString; // ivar: _locationString
@property (readonly, copy, nonatomic) NSString *modificationDateString; // ivar: _modificationDateString
@property (readonly, copy, nonatomic) NSNumber *objectCompressedSize; // ivar: _objectCompressedSize
@property (readonly, copy, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (readonly, copy, nonatomic) NSString *originatingAssetID; // ivar: _originatingAssetID
@property (readonly, copy, nonatomic) NSString *relatedUUID; // ivar: _relatedUUID
@property (readonly, copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier; // ivar: _spatialOverCaptureGroupIdentifier
@property (readonly, copy, nonatomic) NSNumber *thumbCompressedSize; // ivar: _thumbCompressedSize
@property (readonly, copy, nonatomic) NSNumber *thumbOffset; // ivar: _thumbOffset
@property (readonly, nonatomic) CGSize thumbPixSize; // ivar: _thumbPixSize
@property (readonly, nonatomic, getter=isTimeLapseVideo) BOOL timeLapseVideo; // ivar: _timeLapseVideo
@property (readonly, nonatomic) unsigned int videoCodec; // ivar: _videoCodec


-(id)_pl_prettyDescriptionWithIndent:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPTPAsset:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif