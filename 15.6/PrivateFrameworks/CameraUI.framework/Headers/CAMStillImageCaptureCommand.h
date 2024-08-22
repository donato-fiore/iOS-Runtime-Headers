// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSTILLIMAGECAPTURECOMMAND_H
#define CAMSTILLIMAGECAPTURECOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMStillImageCaptureRequest.h"

@interface CAMStillImageCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMStillImageCaptureRequest *_request; // ivar: __request


-(NSInteger)_videoOrientationForCaptureOrientation:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)_sanitizeCapturePhotoSettings:(id)arg0 withContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif