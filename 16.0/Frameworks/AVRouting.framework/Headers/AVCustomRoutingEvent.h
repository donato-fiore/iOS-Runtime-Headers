// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCUSTOMROUTINGEVENT_H
#define AVCUSTOMROUTINGEVENT_H


#import <Foundation/Foundation.h>

#import "AVCustomDeviceRoute.h"

@interface AVCustomRoutingEvent : NSObject

@property (nonatomic) NSInteger reason; // ivar: _reason
@property (retain, nonatomic) AVCustomDeviceRoute *route; // ivar: _route
@property (nonatomic) BOOL succeeded; // ivar: _succeeded


-(id)description;


@end


#endif