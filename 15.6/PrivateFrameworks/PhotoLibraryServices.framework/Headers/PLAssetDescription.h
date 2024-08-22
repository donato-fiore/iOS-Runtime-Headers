// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETDESCRIPTION_H
#define PLASSETDESCRIPTION_H

@class NSString;


#import "PLManagedObject.h"
#import "PLAdditionalAssetAttributes.h"

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) NSString *longDescription;


+(id)entityName;
+(id)listOfSyncedProperties;
-(BOOL)isSyncableChange;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(void)prepareForDeletion;
-(void)willSave;


@end


#endif