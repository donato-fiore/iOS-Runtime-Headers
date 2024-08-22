// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSNSHELPERCONTEXT_H
#define DSNSHELPERCONTEXT_H


#import <Foundation/Foundation.h>


@interface DSNSHelperContext : NSObject {
    *void impl;
}




// -(BOOL)copyItemsAtURLs:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 conflictStrategy:(id)arg3 receiveTargets:(id)arg4 error:(unk)arg5  ;
-(BOOL)copyRootMetadataAtURL:(id)arg0 toDestinationURL:(id)arg1 targetName:(id)arg2 error:(*id)arg3 ;
-(BOOL)createLockInDestinationURL:(id)arg0 sourceURL:(id)arg1 groupUUID:(id)arg2 groupCount:(NSInteger)arg3 conflictStrategy:(id)arg4 isDuplication:(BOOL)arg5 clonedInstead:(*BOOL)arg6 resultName:(*id)arg7 error:(*id)arg8 ;
-(BOOL)createLockNamed:(id)arg0 destinationURL:(id)arg1 sourceURL:(id)arg2 groupUUID:(id)arg3 isDuplication:(BOOL)arg4 groupCount:(NSInteger)arg5 clonedInstead:(*BOOL)arg6 error:(*id)arg7 ;
-(BOOL)ensureFreeSpace:(NSInteger)arg0 onVolume:(id)arg1 error:(*id)arg2 ;
-(BOOL)launchDesktopServicesHelper:(*id)arg0 ;
// -(BOOL)preflightAndCloneIfPossible:(id)arg0 toURL:(id)arg1 groupUUID:(id)arg2 sourceURLsToCopy:(*id)arg3 isDuplication:(BOOL)arg4 targetNames:(*id)arg5 maxFileSize:(*NSUInteger)arg6 conflictStrategy:(id)arg7 receiveTargets:(id)arg8 error:(unk)arg9  ;
-(BOOL)sizeURL:(id)arg0 destinationURL:(id)arg1 targetName:(id)arg2 spaceNeeds:(struct DestinationSpaceNeeds *)arg3 groupUUID:(id)arg4 error:(*id)arg5 ;
-(NSUInteger)resolveConflictAtURL:(id)arg0 withStrategy:(id)arg1 ;
-(id)initWithOptions:(unsigned int)arg0 delegate:(id)arg1 ;
-(void)clearCopyStateForSources:(id)arg0 destination:(id)arg1 targetNames:(id)arg2 groupUUID:(id)arg3 ;
-(void)dealloc;
-(void)stopAccessingURLs:(id)arg0 ;


@end


#endif