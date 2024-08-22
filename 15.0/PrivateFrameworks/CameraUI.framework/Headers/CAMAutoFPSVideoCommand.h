// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMAUTOFPSVIDEOCOMMAND_H
#define CAMAUTOFPSVIDEOCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMAutoFPSVideoCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isAutoFPSVideoEnabled) BOOL autoFPSVideoEnabled; // ivar: _autoFPSVideoEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAutoFPSVideoEnabled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif