// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILESYSTEMITEMMOVEOPERATION_H
#define NSFILESYSTEMITEMMOVEOPERATION_H

@class NSURL;


#import "NSOperation.h"
#import "NSError.h"

@interface NSFilesystemItemMoveOperation : NSOperation {
    id *_delegate;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSError *_error;
    NSUInteger _options;
}




+(id)_errorWithErrno:(int)arg0 sourceURL:(id)arg1 destinationURL:(id)arg2 ;
+(id)filesystemItemMoveOperationWithSourceURL:(id)arg0 destinationURL:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)filesystemItemCopyOperation:(id)arg0 shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)delegate;
-(id)error;
-(id)initWithSourceURL:(id)arg0 destinationURL:(id)arg1 options:(NSUInteger)arg2 ;
-(void)_setError:(id)arg0 ;
-(void)dealloc;
-(void)main;
-(void)setDelegate:(id)arg0 ;


@end


#endif