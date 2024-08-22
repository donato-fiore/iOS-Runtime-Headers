// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSHARINGREMAKEROPERATION_H
#define PFSHARINGREMAKEROPERATION_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "PFPhotoSharingOperation.h"
#import "PFVideoSharingOperation.h"

@interface PFSharingRemakerOperation : NSObject

@property (retain, nonatomic, setter=_setImageOperation:) PFPhotoSharingOperation *_imageOperation; // ivar: __imageOperation
@property (copy, nonatomic, setter=_setUUID:) NSString *_uuid; // ivar: __uuid
@property (retain, nonatomic, setter=_setVideoOperation:) PFVideoSharingOperation *_videoOperation; // ivar: __videoOperation
@property (copy, nonatomic, setter=_setImageOutputURL:) NSURL *imageOutputURL; // ivar: _imageOutputURL
@property (nonatomic, setter=_setInputType:) NSInteger inputType; // ivar: _inputType
@property (copy, nonatomic, setter=_setVideoOutputURL:) NSURL *videoOutputURL; // ivar: _videoOutputURL


+(id)remakerOperationWithInputType:(NSInteger)arg0 videoURL:(id)arg1 imageURL:(id)arg2 adjustmentData:(id)arg3 ;
-(id)init;


@end


#endif