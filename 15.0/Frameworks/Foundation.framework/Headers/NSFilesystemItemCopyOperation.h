// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILESYSTEMITEMCOPYOPERATION_H
#define NSFILESYSTEMITEMCOPYOPERATION_H

@class NSMutableSet;


#import "NSDirectoryTraversalOperation.h"
#import "NSString.h"

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {
    NSString *_destinationPath;
    NSMutableSet *_skippedPaths;
    NSUInteger _options;
}




+(id)_errorWithErrno:(int)arg0 sourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(id)filesystemItemCopyOperationWithSourcePath:(id)arg0 destinationPath:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)_shouldCopyItemAtPath:(char *)arg0 toPath:(char *)arg1 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg0 copyingItemAtPath:(char *)arg1 toPath:(char *)arg2 ;
-(BOOL)_validatePaths:(*id)arg0 ;
-(BOOL)shouldCopyItemAtPath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)shouldProceedAfterError:(id)arg0 copyingItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)initWithSourcePath:(id)arg0 destinationPath:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_handleFTSEntry:(struct _ftsent *)arg0 ;
-(void)dealloc;


@end


#endif