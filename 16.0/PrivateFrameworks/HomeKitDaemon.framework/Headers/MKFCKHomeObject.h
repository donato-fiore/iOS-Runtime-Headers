// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKHOMEOBJECT_H
#define MKFCKHOMEOBJECT_H

@class NSString, NSUUID;
@protocol HMDCoreDataCloudTransformable;


#import "MKFCKModel.h"
#import "MKFCKHome.h"

@interface MKFCKHomeObject : MKFCKModel <HMDCoreDataCloudTransformable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (readonly) Class superclass;


+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)isReadyToImportIntoLocalModelWithContext:(id)arg0 ;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(BOOL)validateHome:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateHomeModelID:(*id)arg0 error:(*id)arg1 ;
-(void)willSave;


@end


#endif