// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIDEOCAPTUREREQUEST_H
#define CAMVIDEOCAPTUREREQUEST_H

@protocol NSCopying, NSMutableCopying, CAMVideoCaptureRequestDelegate;


#import "CAMCaptureRequest.h"

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSInteger captureVideoConfiguration; // ivar: _captureVideoConfiguration
@property (readonly, weak, nonatomic) NSObject<CAMVideoCaptureRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat maximumRecordedDuration; // ivar: _maximumRecordedDuration
@property (readonly, nonatomic) NSInteger maximumRecordedFileSize; // ivar: _maximumRecordedFileSize
@property (readonly, nonatomic) NSInteger remainingDiskUsageThreshold; // ivar: _remainingDiskUsageThreshold
@property (readonly, nonatomic) BOOL shouldGenerateVideoPreviewImage; // ivar: _shouldGenerateVideoPreviewImage
@property (readonly, nonatomic, getter=isTimelapse) BOOL timelapse; // ivar: _timelapse
@property (readonly, nonatomic) NSInteger torchMode; // ivar: _torchMode
@property (readonly, nonatomic) CGFloat userInitationTimestamp; // ivar: _userInitationTimestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRequest:(id)arg0 distinctPersistence:(BOOL)arg1 includeAnalytics:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif