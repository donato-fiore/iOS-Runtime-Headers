// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETDESTINATIONASSETCOPYPROPERTIES_H
#define PHASSETDESTINATIONASSETCOPYPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSInteger destinationAssetCopyState; // ivar: _destinationAssetCopyState


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif