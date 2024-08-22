// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMEXPOSURECOMMAND_H
#define CAMEXPOSURECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMExposureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _exposureMode; // ivar: __exposureMode
@property (readonly, nonatomic) CGPoint _exposurePointOfInterest; // ivar: __exposurePointOfInterest


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExposureMode:(NSInteger)arg0 ;
-(id)initWithExposureMode:(NSInteger)arg0 atPointOfInterest:(struct CGPoint )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif