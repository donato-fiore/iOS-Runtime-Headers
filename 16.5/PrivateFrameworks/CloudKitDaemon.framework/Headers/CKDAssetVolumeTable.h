// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDASSETVOLUMETABLE_H
#define CKDASSETVOLUMETABLE_H

@class CKSQLiteTable, NSMutableDictionary;



@interface CKDAssetVolumeTable : CKSQLiteTable {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_volumeUUIDByVolumeIndex;
    NSMutableDictionary *_volumeIndexByVolumeUUID;
}




+(Class)entryClass;
+(id)dbProperties;
-(id)finishInitializing:(BOOL)arg0 ;
-(id)initWithLogicalTableName:(id)arg0 ;
-(id)unmountedAssetVolumes;
-(id)volumeIndexForVolumeUUID:(id)arg0 ;
-(id)volumeUUIDWithVolumeIndex:(id)arg0 ;
-(void)_lockedSetVolumeIndex:(id)arg0 forVolumeUUID:(id)arg1 ;


@end


#endif