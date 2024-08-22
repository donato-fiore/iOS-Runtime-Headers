// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERACLIPDOWNLOADASSETDATATASKHANDLER_H
#define HMCAMERACLIPDOWNLOADASSETDATATASKHANDLER_H

@class NSString;
@protocol HMCameraClipDownloadAssetDataTaskHandling;

#import <Foundation/Foundation.h>


@interface HMCameraClipDownloadAssetDataTaskHandler : NSObject <HMCameraClipDownloadAssetDataTaskHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)resumeDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif