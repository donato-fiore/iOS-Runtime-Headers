// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSTEREOAUDIOCAPTURECOMMAND_H
#define CAMSTEREOAUDIOCAPTURECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isStereoAudioCaptureEnabled) BOOL stereoAudioCaptureEnabled; // ivar: _stereoAudioCaptureEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStereoAudioCaptureEnabled:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif