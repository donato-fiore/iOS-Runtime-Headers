// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETSCENEPRINTPROPERTIES_H
#define PHASSETSCENEPRINTPROPERTIES_H

@class NSData;


#import "PHAssetPropertySet.h"

@interface PHAssetSceneprintProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *sceneprint; // ivar: _sceneprint


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif