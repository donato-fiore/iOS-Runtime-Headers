// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSETVIDEOZOOMFACTORCOMMAND_H
#define CAMSETVIDEOZOOMFACTORCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand

@property (readonly, nonatomic) CGFloat _videoZoomFactor; // ivar: __videoZoomFactor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoZoomFactor:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif