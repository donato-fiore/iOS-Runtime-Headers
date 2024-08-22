// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFMODEL_H
#define _MKFMODEL_H

@class MKFObject, NSString, NSUUID, NSDate;
@protocol MKFModel, MKFModelModelIDDefaults;


#import "MKFModelDatabaseID.h"

@interface _MKFModel : MKFObject <MKFModel, MKFModelModelIDDefaults>



@property (readonly, copy, nonatomic) MKFModelDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)modelWithModelID:(id)arg0 context:(id)arg1 ;
+(id)modelWithModelID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(BOOL)validateModelID:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateWriterTimestamp:(*id)arg0 error:(*id)arg1 ;
-(id)castIfModel;
-(id)hmd_debugIdentifier;
-(void)willSave;


@end


#endif