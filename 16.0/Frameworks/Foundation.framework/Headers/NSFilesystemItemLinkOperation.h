// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILESYSTEMITEMLINKOPERATION_H
#define NSFILESYSTEMITEMLINKOPERATION_H



#import "NSFilesystemItemCopyOperation.h"

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation



+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg0 sourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(id)filesystemItemLinkOperationWithSourcePath:(id)arg0 destinationPath:(id)arg1 ;
-(?)_handleFTSEntry;
-(BOOL)_shouldLinkItemAtPath:(char *)arg0 toPath:(char *)arg1 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg0 linkingItemAtPath:(char *)arg1 toPath:(char *)arg2 ;
-(BOOL)_validatePaths:(*id)arg0 ;
-(BOOL)shouldLinkItemAtPath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)shouldProceedAfterError:(id)arg0 linkingItemAtPath:(id)arg1 toPath:(id)arg2 ;


@end


#endif