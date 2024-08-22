// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETGRIDMETADATAPROPERTIES_H
#define PHASSETGRIDMETADATAPROPERTIES_H

@class NSString;


#import "PHAssetPropertySet.h"

@interface PHAssetGridMetadataProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif