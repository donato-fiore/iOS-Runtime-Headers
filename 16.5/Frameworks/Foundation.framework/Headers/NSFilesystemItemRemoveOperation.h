// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILESYSTEMITEMREMOVEOPERATION_H
#define NSFILESYSTEMITEMREMOVEOPERATION_H



#import "NSOperation.h"
#import "NSString.h"
#import "NSError.h"
#import "NSFileManager.h"

@interface NSFilesystemItemRemoveOperation : NSOperation {
    NSString *_removePath;
    NSError *_error;
    *void _state;
}


@property (readonly) NSFileManager *fileManager; // ivar: _fm


+(id)_errorWithErrno:(int)arg0 atPath:(id)arg1 ;
+(id)filesystemItemRemoveOperationWithPath:(id)arg0 fileManager:(id)arg1 ;
-(BOOL)_delegateSaysProceedAfterError:(id)arg0 removingItemAtPath:(id)arg1 ;
-(BOOL)_delegateSaysShouldRemoveItemAtPath:(id)arg0 ;
-(id)error;
-(id)initWithPath:(id)arg0 fileManager:(id)arg1 ;
-(void)_setError:(id)arg0 ;
-(void)dealloc;
-(void)main;


@end


#endif