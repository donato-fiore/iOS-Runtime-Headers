// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRTFENROLLMENTASSETDOWNLOADPROGRESS_H
#define HRTFENROLLMENTASSETDOWNLOADPROGRESS_H


#import <Foundation/Foundation.h>


@interface HRTFEnrollmentAssetDownloadProgress : NSObject

@property (readonly) NSInteger downloadedBytes; // ivar: _downloadedBytes
@property (readonly) CGFloat estimatedRemainingTime; // ivar: _estimatedRemainingTime
@property (readonly) BOOL isStalled; // ivar: _isStalled
@property (readonly) NSInteger totalBytes; // ivar: _totalBytes


-(id)initWithTotalBytes:(NSInteger)arg0 downloadedBytes:(NSInteger)arg1 isStalled:(BOOL)arg2 estimatedRemainingTime:(CGFloat)arg3 ;


@end


#endif