// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMIRROROUTPUTVIDEOCOMMAND_H
#define CAMMIRROROUTPUTVIDEOCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMMirrorOutputVideoCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isOutputMirrored) BOOL outputMirrored; // ivar: _outputMirrored


-(id)_debugStringForMirroringMethod:(NSInteger)arg0 ;
-(id)_debugStringForSupportedMirroringMethods:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOutputMirrored:(BOOL)arg0 ;
-(void)_setVideoMirrored:(BOOL)arg0 forOutput:(id)arg1 requirePhysicalFlip:(BOOL)arg2 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif