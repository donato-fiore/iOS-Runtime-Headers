// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKSHAREDHOME_H
#define MKFCKSHAREDHOME_H

@class NSDate, NSString, NSUUID;
@protocol HMDCoreDataCloudTransformable;


#import "MKFCKModel.h"

@interface MKFCKSharedHome : MKFCKModel <HMDCoreDataCloudTransformable>



@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *defaultRoomModelID;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSUUID *flags;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ownerAccountHandle;
@property (copy, nonatomic) NSUUID *ownerModelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(BOOL)exportDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)exportInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)exportUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)createWithModelID:(id)arg0 persistentStore:(id)arg1 context:(id)arg2 ;
+(id)fetchRequest;
+(id)rootKeyPath;
-(id)createLocalModelWithContext:(id)arg0 ;
-(id)homeModelID;


@end


#endif