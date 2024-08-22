// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDMASTERMEDIAMETADATA_H
#define PLCLOUDMASTERMEDIAMETADATA_H

@class NSData;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"
#import "PLCloudMaster.h"

@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;
@property (retain, nonatomic) PLCloudMaster *cloudMaster;
@property (retain, nonatomic) NSData *data;


+(id)entityName;
-(id)payloadID;
-(id)payloadsForChangedKeys:(id)arg0 ;
-(void)_addPayloadIfValidForAsset:(id)arg0 changedKeys:(id)arg1 toPayloads:(id)arg2 modelProperties:(id)arg3 ;


@end


#endif