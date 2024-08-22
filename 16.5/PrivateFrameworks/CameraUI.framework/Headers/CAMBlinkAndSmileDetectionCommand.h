// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMBLINKANDSMILEDETECTIONCOMMAND_H
#define CAMBLINKANDSMILEDETECTIONCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isBlinkDetectionEnabled) BOOL _blinkDetectionEnabled; // ivar: __blinkDetectionEnabled
@property (readonly, nonatomic, getter=_isSmileDetectionEnabled) BOOL _smileDetectionEnabled; // ivar: __smileDetectionEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlinkDetection:(BOOL)arg0 smileDetection:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif