// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDASSETHANDLETABLE_H
#define CKDASSETHANDLETABLE_H

@class CKSQLiteTable;



@interface CKDAssetHandleTable : CKSQLiteTable



+(Class)entryClass;
+(id)dbProperties;
-(BOOL)assetHandleExistsInDatabase:(id)arg0 ;
-(id)assetHandleWithUUID:(id)arg0 ;
-(id)interruptedAssetWithSignature:(id)arg0 error:(*id)arg1 ;
-(id)oldestLastUsedTime;
-(id)saveChunkCount:(id)arg0 ;
-(id)saveLastUsedTime:(id)arg0 ;
-(id)saveOrInsert:(id)arg0 ;
-(id)saveStatus:(id)arg0 ;
-(id)saveStatusAndChunkCount:(id)arg0 ;
-(id)selectProperties:(id)arg0 inAssetHandlesWithStatus:(NSInteger)arg1 error:(*id)arg2 ;


@end


#endif