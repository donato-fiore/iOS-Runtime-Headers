// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTHUMBNAILCREATIONOPERATION_H
#define QLTHUMBNAILCREATIONOPERATION_H

@class NSOperation, NSOperationQueue, NSURL, NSError, UIImage;



@interface QLThumbnailCreationOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    NSOperationQueue *_operationQueue;
}


@property CGRect contentRect; // ivar: _contentRect
@property (retain) NSURL *documentURL; // ivar: _documentURL
@property (retain) NSError *error; // ivar: _error
@property BOOL generateIfNeeded; // ivar: _generateIfNeeded
@property (retain) UIImage *image; // ivar: _image
@property CGFloat maximumDimension; // ivar: _maximumDimension
@property CGFloat scaleFactor; // ivar: _scaleFactor
@property NSUInteger useMode; // ivar: _useMode


-(BOOL)_finishIfCancelled;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(void)_finish;
-(void)_finishWithError:(id)arg0 ;
-(void)main;
-(void)retrieveThumbnailForTaggedLogicalURL:(id)arg0 ;
-(void)setExecuting:(BOOL)arg0 ;
-(void)setFinished:(BOOL)arg0 ;
-(void)start;
-(void)updateLastHitDateOfAddition:(id)arg0 onPhysicalURL:(id)arg1 ;


@end


#endif