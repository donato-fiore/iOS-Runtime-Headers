// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETIMPORTPROPERTIES_H
#define PHASSETIMPORTPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetImportProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSInteger importedBy; // ivar: _importedBy


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif