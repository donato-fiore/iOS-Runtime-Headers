// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETLOCALDATEPROPERTIES_H
#define PHASSETLOCALDATEPROPERTIES_H

@class NSNumber;


#import "PHAssetPropertySet.h"

@interface PHAssetLocalDateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSInteger creationDateSource; // ivar: _creationDateSource
@property (readonly, nonatomic) NSNumber *inferredTimeZoneOffset; // ivar: _inferredTimeZoneOffset


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif