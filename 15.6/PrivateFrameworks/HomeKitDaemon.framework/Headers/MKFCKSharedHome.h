// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKSHAREDHOME_H
#define MKFCKSHAREDHOME_H

@class NSUUID, NSDate, NSString;


#import "MKFCKModel.h"

@interface MKFCKSharedHome : MKFCKModel

@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSUUID *defaultRoomModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ownerAccountHandle;
@property (copy, nonatomic) NSUUID *ownerModelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(BOOL)importDeleteWithObjectID:(id)arg0 modelID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(BOOL)importInsertWithObjectID:(id)arg0 additionalUpdates:(id)arg1 context:(id)arg2 ;
+(BOOL)importUpdateWithObjectID:(id)arg0 updatedProperties:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3 ;
+(id)fetchRequest;
-(id)createLocalModelWithContext:(id)arg0 ;
-(id)homeModelID;
-(id)initWithContext:(id)arg0 assignStore:(id)arg1 ;


@end


#endif