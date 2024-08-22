// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMRAMPTOVIDEOZOOMFACTORCOMMAND_H
#define CAMRAMPTOVIDEOZOOMFACTORCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand

@property (readonly, nonatomic) CGFloat _duration; // ivar: __duration
@property (readonly, nonatomic) float _rate; // ivar: __rate
@property (readonly, nonatomic) CGFloat _videoZoomFactor; // ivar: __videoZoomFactor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoZoomFactor:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)initWithVideoZoomFactor:(CGFloat)arg0 rate:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif