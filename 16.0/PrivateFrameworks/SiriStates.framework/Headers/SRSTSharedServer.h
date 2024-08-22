// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSTSHAREDSERVER_H
#define SRSTSHAREDSERVER_H


#import <Foundation/Foundation.h>

#import "SRSTSharedState.h"
#import "_SRSTSharedServer.h"

@interface SRSTSharedServer : NSObject

@property (readonly, nonatomic) SRSTSharedState *currentState;
@property (readonly) _SRSTSharedServer *underlyingObject; // ivar: _underlyingObject


-(id)init;


@end


#endif