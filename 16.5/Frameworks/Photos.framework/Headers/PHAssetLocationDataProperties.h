// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETLOCATIONDATAPROPERTIES_H
#define PHASSETLOCATIONDATAPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetLocationDataProperties : PHAssetPropertySet

@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif