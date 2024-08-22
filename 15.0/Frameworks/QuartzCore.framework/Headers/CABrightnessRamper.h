// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CABRIGHTNESSRAMPER_H
#define CABRIGHTNESSRAMPER_H



#import "CAWindowServerRamper.h"

@interface CABrightnessRamper : CAWindowServerRamper

@property CGFloat headroomBegin; // ivar: _headroomBegin
@property CGFloat headroomEnd; // ivar: _headroomEnd
@property CGFloat limitBegin; // ivar: _limitBegin
@property CGFloat limitEnd; // ivar: _limitEnd
@property CGFloat sdrNitsBegin; // ivar: _sdrNitsBegin
@property CGFloat sdrNitsEnd; // ivar: _sdrNitsEnd


-(id)initWithDisplay:(id)arg0 ;
-(void)rampCallback:(id)arg0 ;


@end


#endif