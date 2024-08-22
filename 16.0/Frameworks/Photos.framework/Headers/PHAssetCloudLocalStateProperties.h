// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETCLOUDLOCALSTATEPROPERTIES_H
#define PHASSETCLOUDLOCALSTATEPROPERTIES_H

@class NSManagedObjectID;


#import "PHAssetPropertySet.h"

@interface PHAssetCloudLocalStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) unsigned short assetCloudLocalState; // ivar: _assetCloudLocalState
@property (readonly, nonatomic) NSManagedObjectID *cloudMasterObjectID; // ivar: _cloudMasterObjectID


+(BOOL)inverseIsToMany;
+(id)additionalPropertiesToFetchOnPrimaryObject;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
+(unsigned short)_assetCloudLocalStateFromAssetLocalState:(short)arg0 masterLocalState:(short)arg1 ;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif