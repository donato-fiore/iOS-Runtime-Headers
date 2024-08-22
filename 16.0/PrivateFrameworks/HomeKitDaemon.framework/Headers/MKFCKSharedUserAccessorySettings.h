// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKSHAREDUSERACCESSORYSETTINGS_H
#define MKFCKSHAREDUSERACCESSORYSETTINGS_H

@class NSUUID, NSString;
@protocol HMDCoreDataCloudTransformable;


#import "MKFCKSharedUserData.h"
#import "MKFCKSharedUserDataRoot.h"

@interface MKFCKSharedUserAccessorySettings : MKFCKSharedUserData <HMDCoreDataCloudTransformable>



@property (copy, nonatomic) NSUUID *accessoryModelID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL listeningHistoryEnabled;
@property (nonatomic) BOOL mediaContentProfileEnabled;
@property (nonatomic) BOOL personalRequestsEnabled;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;
@property (readonly) Class superclass;


+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)createWithHomeModelID:(id)arg0 accessoryModelID:(id)arg1 persistentStore:(id)arg2 context:(id)arg3 ;
+(id)fetchRequest;
-(BOOL)_importWithContext:(id)arg0 ;


@end


#endif