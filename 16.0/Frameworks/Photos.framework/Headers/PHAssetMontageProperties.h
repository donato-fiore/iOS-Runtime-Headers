// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETMONTAGEPROPERTIES_H
#define PHASSETMONTAGEPROPERTIES_H

@class NSString;


#import "PHAssetPropertySet.h"

@interface PHAssetMontageProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *montage; // ivar: _montage


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif