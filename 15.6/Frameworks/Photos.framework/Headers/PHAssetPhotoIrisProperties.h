// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETPHOTOIRISPROPERTIES_H
#define PHASSETPHOTOIRISPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet

@property (readonly, nonatomic) ? photoIrisStillDisplayTime; // ivar: _photoIrisStillDisplayTime
@property (readonly, nonatomic) ? photoIrisVideoDuration; // ivar: _photoIrisVideoDuration
@property (readonly, nonatomic) unsigned short photoIrisVisibilityState; // ivar: _photoIrisVisibilityState


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif