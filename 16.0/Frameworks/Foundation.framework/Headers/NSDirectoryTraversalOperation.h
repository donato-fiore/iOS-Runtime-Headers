// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDIRECTORYTRAVERSALOPERATION_H
#define NSDIRECTORYTRAVERSALOPERATION_H

@class NSMutableArray;


#import "NSOperation.h"
#import "NSString.h"
#import "NSError.h"

@interface NSDirectoryTraversalOperation : NSOperation {
    id *_delegate;
    NSString *_sourcePath;
    NSError *_error;
    *void _stream;
    int _optionsFlags;
    int _lastDeviceInode;
    BOOL _shouldFilterUnderbars;
    BOOL _stopped;
    NSMutableArray *_deviceEntryPoints;
    NSMutableArray *_deviceNumbers;
}




+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg0 atPath:(id)arg1 ;
+(id)directoryTraversalOperationAtPath:(id)arg0 ;
-(?)_handleFTSEntry;
-(BOOL)_shouldFilterEntry:(struct _ftsent *)arg0 ;
-(BOOL)_validatePaths:(*id)arg0 ;
-(BOOL)shouldProceedAfterError:(id)arg0 ;
-(id)delegate;
-(id)error;
-(id)initWithPath:(id)arg0 ;
-(void)_setError:(id)arg0 ;
-(void)dealloc;
-(void)handlePathname:(id)arg0 ;
-(void)main;
-(void)setDelegate:(id)arg0 ;


@end


#endif