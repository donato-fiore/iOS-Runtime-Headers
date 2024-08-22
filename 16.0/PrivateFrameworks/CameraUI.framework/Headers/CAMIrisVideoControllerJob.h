// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMIRISVIDEOCONTROLLERJOB_H
#define CAMIRISVIDEOCONTROLLERJOB_H


#import <Foundation/Foundation.h>

#import "CAMStillImageCaptureRequest.h"
#import "CAMVideoCaptureResult.h"

@interface CAMIrisVideoControllerJob : NSObject

@property (readonly, nonatomic) CAMStillImageCaptureRequest *request; // ivar: _request
@property (readonly, nonatomic) CAMVideoCaptureResult *videoCaptureResult; // ivar: _videoCaptureResult


-(id)initWithRequest:(id)arg0 videoCaptureResult:(id)arg1 ;


@end


#endif