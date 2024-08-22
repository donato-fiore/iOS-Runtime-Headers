// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIREFERENCEMANAGEDDIR_H
#define TRIREFERENCEMANAGEDDIR_H


#import <Foundation/Foundation.h>


@interface TRIReferenceManagedDir : NSObject



+(BOOL)_deleteReferenceManagedDirectory:(id)arg0 usingTempDir:(id)arg1 managedDirWasDeleted:(*BOOL)arg2 ;
+(BOOL)_isTargetOfSymlink:(id)arg0 containedInManagedDir:(id)arg1 ;
+(BOOL)_removePaths:(id)arg0 withLockWitness:(struct TRIFlockWitness_ *)arg1 numRemoved:(*unsigned int)arg2 ;
+(BOOL)_testDeletionEligibilityForManagedDir:(id)arg0 withExternalReferenceStore:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 logPrefix:(id)arg3 isEligible:(*BOOL)arg4 ;
+(BOOL)collectGarbageForManagedDir:(id)arg0 withExternalReferenceStore:(id)arg1 usingTempDir:(id)arg2 managedDirWasDeleted:(*BOOL)arg3 ;
+(BOOL)createFromDir:(id)arg0 ;
+(BOOL)removeFileInManagedDirWithPath:(id)arg0 inUseDeletionBehavior:(unsigned char)arg1 wasDeleted:(*BOOL)arg2 ;
+(BOOL)saveFromGarbageCollectionItemWithPath:(id)arg0 ;
+(BOOL)symlinkFromCurrentPath:(id)arg0 withFuturePath:(id)arg1 toManagedPath:(id)arg2 ;
+(BOOL)symlinkFromPath:(id)arg0 toManagedPath:(id)arg1 ;
+(id)_collectDeadSymlinksForManagedDir:(id)arg0 withLockWitness:(struct TRIFlockWitness_ *)arg1 liveSymlinkCount:(*unsigned int)arg2 ;
+(id)_containingManagedDirForPath:(id)arg0 resolvedAbsPath:(*id)arg1 ;
+(id)_metadataDirForManagedDir:(id)arg0 ;
+(id)_reverseLinksDirForManagedDir:(id)arg0 ;
+(struct ? )_acquireLockOnDir:(id)arg0 withLockingMode:(int)arg1 andRunBlock:(id)arg2 ;
-(id)init;


@end


#endif