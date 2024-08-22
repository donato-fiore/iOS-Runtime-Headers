// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETDESCRIPTIONPROPERTIES_H
#define PHASSETDESCRIPTIONPROPERTIES_H

@class NSString;


#import "PHAssetPropertySet.h"

@interface PHAssetDescriptionProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (readonly, copy, nonatomic) NSString *assetDescription; // ivar: _assetDescription
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif