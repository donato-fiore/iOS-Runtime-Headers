// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDLEGACYCLOUDZONE_H
#define HMDLEGACYCLOUDZONE_H

@class HMBCloudZone, NSSet;



@interface HMDLegacyCloudZone : HMBCloudZone

@property (readonly, nonatomic) NSInteger keyStatus; // ivar: _keyStatus
@property (readonly, nonatomic) NSSet *participants; // ivar: _participants


-(id)decodeModelFromRecord:(id)arg0 externalRecordFields:(id)arg1 source:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)encodeRecordFromModel:(id)arg0 existingRecord:(id)arg1 encodingContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithCloudDatabase:(id)arg0 configuration:(id)arg1 state:(id)arg2 ;
-(id)recordIDForModelID:(id)arg0 ;
-(id)recordWithExistingRecord:(id)arg0 modelData:(id)arg1 modelID:(id)arg2 modelContainer:(id)arg3 error:(*id)arg4 ;
-(id)rootRecordModelID;
-(id)rootRecordParentModelID;
-(id)rootRecordRecordName;
-(id)tupleForRootRecordWithOutputBlockRow:(NSUInteger)arg0 objectIDToRecordNameMap:(id)arg1 ;
-(id)waitForPendingRebuild;
-(void)pushGroupWithBlockRow:(NSUInteger)arg0 tuples:(id)arg1 options:(id)arg2 activity:(id)arg3 completionPromise:(id)arg4 ;
-(void)startUpWithLocalZone:(id)arg0 ;


@end


#endif