// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFEXPORTGIFREQUEST_H
#define PFEXPORTGIFREQUEST_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PFExportGIFRequest : NSObject <NSCopying>



@property (nonatomic) CGFloat ditherDepth; // ivar: _ditherDepth
@property (nonatomic) CGFloat maximumFrameRate; // ivar: _maximumFrameRate
@property (nonatomic) NSUInteger maximumFrameSize; // ivar: _maximumFrameSize
@property (nonatomic) BOOL shouldDither; // ivar: _shouldDither
@property (nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous
@property (copy, nonatomic) NSURL *videoURL; // ivar: _videoURL


// +(BOOL)_exportGIFToURL:(id)arg0 request:(id)arg1 progress:(id)arg2 error:(unk)arg3  ;
+(id)_exportQueue;
+(id)runExport:(id)arg0 toURL:(id)arg1 completion:(id)arg2 ;
+(struct CGImage *)_createProcessedGIFImage:(struct opaqueCMSampleBuffer *)arg0 options:(id)arg1 error:(*id)arg2 ;
+(struct opaqueCMSampleBuffer *)_copyNextSampleBuffer:(id)arg0 reader:(id)arg1 time:(struct ? *)arg2 didReachEnd:(*BOOL)arg3 error:(*id)arg4 ;
// +(void)runExport:(id)arg0 toURL:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVideoURL:(id)arg0 ;
-(void)_ensureValidInputs;


@end


#endif