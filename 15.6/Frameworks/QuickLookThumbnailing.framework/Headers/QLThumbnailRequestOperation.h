// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTHUMBNAILREQUESTOPERATION_H
#define QLTHUMBNAILREQUESTOPERATION_H

@class NSOperation, NSDate, NSError;
@protocol OS_dispatch_queue;


#import "QLThumbnailRepresentation.h"
#import "QLThumbnailGenerationRequest.h"

@interface QLThumbnailRequestOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
    NSDate *_beginDate;
}


@property (nonatomic) CGFloat minimumDimension;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail; // ivar: _mostRepresentativeThumbnail
@property (retain) QLThumbnailGenerationRequest *request; // ivar: _request
@property (copy, nonatomic) id *requestCompletionBlock; // ivar: _requestCompletionBlock
@property (copy, nonatomic) id *requestUpdateBlock; // ivar: _requestUpdateBlock
@property (nonatomic) NSUInteger requestedTypes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue; // ivar: _serialResponseQueue
@property (copy, nonatomic) id *thumbnailRequestGenerationWillStartBlock; // ivar: _thumbnailRequestGenerationWillStartBlock
@property (retain, nonatomic) NSError *thumbnailRequestInvalidError; // ivar: _thumbnailRequestInvalidError


+(id)operationWithThumbnailRequest:(id)arg0 ;
-(BOOL)_finishIfNeeded;
-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)wantsBaseline;
-(NSInteger)generationBehavior;
-(NSUInteger)badgeType;
-(id)initWithFPItem:(id)arg0 size:(struct CGSize )arg1 minimumDimension:(CGFloat)arg2 scale:(CGFloat)arg3 iconMode:(BOOL)arg4 ;
-(id)initWithFileAtURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)initWithFileAtURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 iconMode:(BOOL)arg3 ;
-(id)initWithThumbnailRequest:(id)arg0 ;
-(id)sharedSerialResponseQueue;
-(void)__finishWithError:(id)arg0 ;
-(void)_finish;
-(void)_finishIfRequestIsInvalid;
-(void)_finishWithError:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)setBadgeType:(NSUInteger)arg0 ;
-(void)setExecuting:(BOOL)arg0 ;
-(void)setFinished:(BOOL)arg0 ;
-(void)setGenerationBehavior:(NSInteger)arg0 ;
-(void)setWantsBaseline:(BOOL)arg0 ;
-(void)start;


@end


#endif