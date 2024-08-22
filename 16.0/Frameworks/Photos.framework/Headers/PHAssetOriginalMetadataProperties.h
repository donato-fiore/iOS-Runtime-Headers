// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETORIGINALMETADATAPROPERTIES_H
#define PHASSETORIGINALMETADATAPROPERTIES_H

@class NSString, NSTimeZone;


#import "PHAssetPropertySet.h"

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *originalAssetsUUID; // ivar: _originalAssetsUUID
@property (readonly, nonatomic) short originalExifOrientation; // ivar: _originalExifOrientation
@property (readonly, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (readonly, nonatomic) NSUInteger originalFilesize; // ivar: _originalFilesize
@property (readonly, nonatomic) NSInteger originalHeight; // ivar: _originalHeight
@property (readonly, nonatomic) NSInteger originalWidth; // ivar: _originalWidth
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) int timeZoneOffset; // ivar: _timeZoneOffset


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif