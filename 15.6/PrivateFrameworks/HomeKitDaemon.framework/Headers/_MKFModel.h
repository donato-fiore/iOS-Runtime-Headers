// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFMODEL_H
#define _MKFMODEL_H

@class MKFObject, NSString, NSUUID, NSDate;
@protocol MKFModel, MKFModelPrivateExtensions;


#import "MKFModelDatabaseID.h"

@interface _MKFModel : MKFObject <MKFModel, MKFModelPrivateExtensions>



@property (readonly, copy, nonatomic) MKFModelDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelWithModelID:(id)arg0 context:(id)arg1 ;
+(id)modelWithModelID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)castIfModel;
-(id)hmd_debugIdentifier;
-(void)willSave;


@end


#endif