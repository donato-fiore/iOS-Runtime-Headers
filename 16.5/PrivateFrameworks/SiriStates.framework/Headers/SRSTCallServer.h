// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTCALLSERVER_H
#define SRSTCALLSERVER_H


#import <Foundation/Foundation.h>

#import "SRSTCallState.h"
#import "_SRSTCallServer.h"

@interface SRSTCallServer : NSObject

@property (readonly, nonatomic) SRSTCallState *currentState;
@property (readonly) _SRSTCallServer *underlyingObject; // ivar: _underlyingObject


-(id)init;


@end


#endif