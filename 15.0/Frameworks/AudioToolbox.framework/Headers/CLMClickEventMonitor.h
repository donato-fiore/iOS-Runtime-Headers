// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLMCLICKEVENTMONITOR_H
#define CLMCLICKEVENTMONITOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CLMClickEventMonitor : NSObject

@property (retain) NSMutableArray *events; // ivar: _events
@property (nonatomic) shared_ptr<HIDEventMonitor> hidEventMonitor; // ivar: _hidEventMonitor


-(id)eventsForMovieStartingAtMachAbsoluteTime:(NSUInteger)arg0 endingAt:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithHIDDispatchQueueQOSClass:(unsigned int)arg0 relativePriority:(int)arg1 ;
-(void)newClickEvent:(id)arg0 ;


@end


#endif