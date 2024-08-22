// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETREPRESENTATIONDOWNLOADOPERATION_H
#define PHASSETREPRESENTATIONDOWNLOADOPERATION_H

@class NSOperation, NSError, NSURL, NSRecursiveLock;
@protocol PHAssetRepresentationDownloadOperationDelegate;


#import "PHAssetRepresentation.h"

@interface PHAssetRepresentationDownloadOperation : NSOperation

@property (weak, nonatomic) NSObject<PHAssetRepresentationDownloadOperationDelegate> *delegate; // ivar: _delegate
@property (retain) NSError *error; // ivar: _error
@property (getter=isExecuting) BOOL executing; // ivar: executing
@property (getter=isFailed) BOOL failed; // ivar: _failed
@property (getter=isFinished) BOOL finished; // ivar: finished
@property (retain, nonatomic) NSURL *identifierURL; // ivar: _identifierURL
@property (nonatomic) int imageRequestID; // ivar: _imageRequestID
@property CGFloat progress; // ivar: _progress
@property (retain, nonatomic) PHAssetRepresentation *representation; // ivar: _representation
@property (retain) NSRecursiveLock *statusLock; // ivar: _statusLock
@property (getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


-(BOOL)isConcurrent;
-(id)initWithRepresentation:(id)arg0 ;
-(void)cancel;
-(void)finish;
-(void)start;


@end


#endif