// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETCAMERACAPTUREDEVICEPROPERTIES_H
#define PHASSETCAMERACAPTUREDEVICEPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetCameraCaptureDeviceProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL isSelfie; // ivar: _isSelfie


+(id)keyPathFromPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif