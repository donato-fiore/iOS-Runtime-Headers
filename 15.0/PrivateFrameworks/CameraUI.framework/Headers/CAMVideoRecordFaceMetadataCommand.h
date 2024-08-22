// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIDEORECORDFACEMETADATACOMMAND_H
#define CAMVIDEORECORDFACEMETADATACOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled; // ivar: __enabled


-(id)_connectionForMovieFileOutput:(id)arg0 metadataPortType:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabled:(BOOL)arg0 ;
-(void)_addMetadataConnectionForPortType:(id)arg0 videoDeviceInput:(id)arg1 movieFileOutput:(id)arg2 captureSession:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif