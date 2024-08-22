// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUNETLINKENDPOINT_H
#define CUNETLINKENDPOINT_H


#import <Foundation/Foundation.h>


@interface CUNetLinkEndpoint : NSObject {
    NSUInteger _expireTime;
    NSUInteger _expiredTicks;
    BOOL _present;
    unsigned int _seqNum;
    unsigned int _stateChanges;
}


@property (readonly, nonatomic, getter=isClient) BOOL client; // ivar: _client
@property (nonatomic) unk ipAddr; // ivar: _ipAddr
@property (readonly, nonatomic) int state; // ivar: _state
@property (copy, nonatomic) id *stateChangedHandler; // ivar: _stateChangedHandler


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;


@end


#endif