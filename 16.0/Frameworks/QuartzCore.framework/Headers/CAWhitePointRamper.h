// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAWHITEPOINTRAMPER_H
#define CAWHITEPOINTRAMPER_H



#import "CAWindowServerRamper.h"

@interface CAWhitePointRamper : CAWindowServerRamper

@property float scaleEnd; // ivar: _scaleEnd
@property float scaleStart; // ivar: _scaleStart
@property ? whitePointEnd; // ivar: _whitePointEnd
@property ? whitePointStart; // ivar: _whitePointStart


-(id)initWithDisplay:(id)arg0 ;
-(void)rampCallback:(id)arg0 ;


@end


#endif