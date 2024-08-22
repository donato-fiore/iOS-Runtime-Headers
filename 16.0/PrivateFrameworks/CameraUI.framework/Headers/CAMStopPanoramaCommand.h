// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSTOPPANORAMACOMMAND_H
#define CAMSTOPPANORAMACOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMStopPanoramaCommand : CAMCaptureCommand

@property (readonly, nonatomic) BOOL _interrupted; // ivar: __interrupted


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterrupted:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif