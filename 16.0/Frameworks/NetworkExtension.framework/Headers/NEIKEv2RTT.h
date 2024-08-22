// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2RTT_H
#define NEIKEV2RTT_H


#import <Foundation/Foundation.h>


@interface NEIKEv2RTT : NSObject {
    unsigned short _rxt_shift;
    int _lastRequestMessageID;
    NSUInteger _rtt_cur;
    NSUInteger _srtt;
    NSUInteger _rtt_var;
    NSUInteger _rtt_start_time;
    NSUInteger _rtt_min;
    NSUInteger _rtt_updated;
    NSUInteger _rxt_cur;
}




-(id)init;


@end


#endif