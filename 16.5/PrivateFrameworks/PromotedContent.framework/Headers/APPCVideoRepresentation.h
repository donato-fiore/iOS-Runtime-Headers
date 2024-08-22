// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCVIDEOREPRESENTATION_H
#define APPCVIDEOREPRESENTATION_H

@class NSURL;
@protocol APPCPromotableVideoRepresentation;


#import "APPCContentRepresentation.h"

@interface APPCVideoRepresentation : APPCContentRepresentation <APPCPromotableVideoRepresentation>

 {
    ? $__lazy_storage_$_videoURL;
    ? duration;
    ? originalVideoURL;
}


@property (nonatomic, readonly) CGFloat bitrate; // ivar: bitrate
@property (nonatomic, readonly) NSInteger connectionType; // ivar: connectionType
@property (nonatomic, readonly) NSInteger fileSize; // ivar: fileSize
@property (nonatomic, readonly) NSUInteger signalStrength; // ivar: signalStrength
@property (nonatomic, readonly) BOOL skipEnabled; // ivar: skipEnabled
@property (nonatomic, readonly) CGFloat skipThreshold; // ivar: skipThreshold
@property (nonatomic, readonly) BOOL unbranded; // ivar: unbranded
@property (nonatomic, readonly) ? videoSize; // ivar: videoSize
@property (nonatomic, copy) NSURL *videoURL;


-(id)initWithIdentifier:(id)arg0 adType:(NSInteger)arg1 desiredPosition:(NSInteger)arg2 videoURL:(id)arg3 duration:(CGFloat)arg4 fileSize:(NSInteger)arg5 skipThreshold:(CGFloat)arg6 skipEnabled:(BOOL)arg7 unbranded:(BOOL)arg8 bitrate:(CGFloat)arg9 connectionType:(NSInteger)arg10 signalStrength:(NSUInteger)arg11 videoSize:(struct ? )arg12 tapAction:(id)arg13 adPolicyData:(id)arg14 ;


@end


#endif