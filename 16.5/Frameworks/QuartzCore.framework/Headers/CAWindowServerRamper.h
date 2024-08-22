// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAWINDOWSERVERRAMPER_H
#define CAWINDOWSERVERRAMPER_H


#import <Foundation/Foundation.h>

#import "CADisplay.h"
#import "CAWindowServerDisplay.h"
#import "CADisplayLink.h"

@interface CAWindowServerRamper : NSObject

@property CGFloat beginTime; // ivar: _beginTime
@property (retain) CADisplay *cadisplay; // ivar: _cadisplay
@property (retain) CAWindowServerDisplay *display; // ivar: _display
@property CGFloat duration; // ivar: _duration
@property int id; // ivar: _id
@property (retain) CADisplayLink *link; // ivar: _link


-(id)initWithDisplay:(id)arg0 ;
-(void)rampCallback:(id)arg0 ;
-(void)runRamp;


@end


#endif