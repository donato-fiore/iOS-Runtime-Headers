// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWAKEEVENT_H
#define SBWAKEEVENT_H


#import <Foundation/Foundation.h>


@interface SBWakeEvent : NSObject

@property (nonatomic) NSUInteger eventAbsTimestamp; // ivar: _eventAbsTimestamp
@property (nonatomic) NSUInteger eventRecvContTimestamp; // ivar: _eventRecvContTimestamp


-(id)initWithTimestamp:(NSUInteger)arg0 ;


@end


#endif