// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSFILEREMOVEOPERATION_H
#define VSFILEREMOVEOPERATION_H

@class NSError, NSURL;


#import "VSAsyncOperation.h"

@interface VSFileRemoveOperation : VSAsyncOperation

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(void)executionDidBegin;


@end


#endif