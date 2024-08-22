// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPREPARESTILLIMAGECAPTURECOMMAND_H
#define CAMPREPARESTILLIMAGECAPTURECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSUInteger _systemTimeOfCapture; // ivar: __systemTimeOfCapture


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystemTime:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif