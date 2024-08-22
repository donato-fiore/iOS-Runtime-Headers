// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSAMPLEBUFFERVIDEOFORMATOUTPUTCOMMAND_H
#define CAMSAMPLEBUFFERVIDEOFORMATOUTPUTCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMSampleBufferVideoFormatOutputCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _videoFormat; // ivar: __videoFormat


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleBufferVideoFormat:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif