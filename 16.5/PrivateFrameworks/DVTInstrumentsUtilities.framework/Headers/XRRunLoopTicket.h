// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRRUNLOOPTICKET_H
#define XRRUNLOOPTICKET_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface XRRunLoopTicket : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (nonatomic) BOOL stopWhenDone; // ivar: _stopWhenDone




@end


#endif