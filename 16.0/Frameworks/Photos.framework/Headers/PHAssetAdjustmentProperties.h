// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETADJUSTMENTPROPERTIES_H
#define PHASSETADJUSTMENTPROPERTIES_H

@class NSString;


#import "PHAssetPropertySet.h"

@interface PHAssetAdjustmentProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *formatIdentifier; // ivar: _formatIdentifier
@property (readonly, nonatomic) NSString *formatVersion; // ivar: _formatVersion
@property (readonly, nonatomic) NSUInteger originalResourceChoice; // ivar: _originalResourceChoice


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif