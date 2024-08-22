// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIDEFERREDDELETER_H
#define TRIDEFERREDDELETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TRIDeferredDeleter : NSObject {
    NSString *_rootDir;
}




+(BOOL)_createSymlinkIfNonExistentAtPath:(id)arg0 withDestinationPath:(id)arg1 ;
+(BOOL)_removeDeferredDeletedItemWithLink:(id)arg0 externalReferenceStore:(id)arg1 wasDeleted:(*BOOL)arg2 ;
-(BOOL)_cleanupWithLinksDirLockWitness:(struct TRIFlockWitness_ *)arg0 externalReferenceStore:(id)arg1 ;
-(BOOL)collectGarbageWithRootDirLockWitness:(struct TRIFlockWitness_ *)arg0 externalReferenceStore:(id)arg1 ;
-(BOOL)markItemAtRelativePath:(id)arg0 ;
-(BOOL)unmarkItemAtRelativePath:(id)arg0 ;
-(id)_collectRelativeLinkPathsWithLinksDirLockWitness:(struct TRIFlockWitness_ *)arg0 ;
-(id)_deferredDeletedLinksDir;
-(id)_linkPathForDeferredDeletedItemAtPath:(id)arg0 ;
-(id)initForRootDir:(id)arg0 ;


@end


#endif