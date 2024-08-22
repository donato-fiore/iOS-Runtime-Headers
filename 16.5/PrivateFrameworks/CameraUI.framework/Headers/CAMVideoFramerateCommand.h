// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMVIDEOFRAMERATECOMMAND_H
#define CAMVIDEOFRAMERATECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMVideoFramerateCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _videoConfiguration; // ivar: __videoConfiguration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoConfiguration:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif