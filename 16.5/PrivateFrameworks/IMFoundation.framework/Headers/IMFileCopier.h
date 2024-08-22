// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMFILECOPIER_H
#define IMFILECOPIER_H

@class NSURL;
@protocol OS_dispatch_queue, IMFileCopierDelegate;

#import <Foundation/Foundation.h>


@interface IMFileCopier : NSObject

@property *void _BOMCopier; // ivar: _BOMCopier
@property (copy) id *_callback; // ivar: _callback
@property (retain) NSObject<OS_dispatch_queue> *_queue; // ivar: _queue
@property NSObject<IMFileCopierDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL didErrorOccur; // ivar: _didErrorOccur
@property (readonly, retain) id *identifier; // ivar: _identifier
@property BOOL inProgress; // ivar: _inProgress
@property (readonly, retain) NSURL *inputURL; // ivar: _inputURL
@property NSUInteger operation; // ivar: _operation
@property (readonly, retain) NSURL *outputURL; // ivar: _outputURL
@property (readonly, nonatomic) BOOL wasCancelled; // ivar: _shouldCancel


-(id)_temporaryCopierPath;
// -(id)initWithInputURL:(id)arg0 outputURL:(id)arg1 identifier:(id)arg2 operation:(NSUInteger)arg3 completionBlock:(id)arg4 queue:(unk)arg5  ;
-(id)initWithInputURL:(id)arg0 outputURL:(id)arg1 identifier:(id)arg2 operation:(NSUInteger)arg3 delegate:(id)arg4 ;
-(void)_fillOutputURLFromInputURL;
-(void)_main_copierFinishedWithResult:(id)arg0 ;
-(void)_worker_doCopy;
-(void)cancel;
-(void)cleanup;
-(void)dealloc;
-(void)start;


@end


#endif