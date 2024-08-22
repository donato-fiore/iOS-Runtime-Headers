// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPORTRAITAPERTURECOMMAND_H
#define CAMPORTRAITAPERTURECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMPortraitApertureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CGFloat aperture; // ivar: _aperture


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAperture:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif