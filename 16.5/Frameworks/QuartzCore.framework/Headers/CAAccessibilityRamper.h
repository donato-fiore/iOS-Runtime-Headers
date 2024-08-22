// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAACCESSIBILITYRAMPER_H
#define CAACCESSIBILITYRAMPER_H



#import "CAWindowServerRamper.h"

@interface CAAccessibilityRamper : CAWindowServerRamper

@property CGFloat axScaleBegin; // ivar: _axScaleBegin
@property CGFloat axScaleEnd; // ivar: _axScaleEnd


-(id)initWithDisplay:(id)arg0 ;
-(void)rampCallback:(id)arg0 ;


@end


#endif