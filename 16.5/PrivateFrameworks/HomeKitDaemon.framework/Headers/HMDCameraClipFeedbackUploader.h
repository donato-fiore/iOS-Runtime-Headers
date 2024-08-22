// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACLIPFEEDBACKUPLOADER_H
#define HMDCAMERACLIPFEEDBACKUPLOADER_H

@class HMFObject, NSString;
@protocol HMDCameraClipFeedbackUploader;



@interface HMDCameraClipFeedbackUploader : HMFObject <HMDCameraClipFeedbackUploader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)uploadFeedbackWithCameraProfileUUID:(id)arg0 clipModel:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif