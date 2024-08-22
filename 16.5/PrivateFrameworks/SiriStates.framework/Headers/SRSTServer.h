// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTSERVER_H
#define SRSTSERVER_H


#import <Foundation/Foundation.h>

#import "SRSTState.h"
#import "_SRSTServer.h"

@interface SRSTServer : NSObject

@property (readonly, nonatomic) SRSTState *currentState;
@property (readonly) _SRSTServer *underlyingObject; // ivar: _underlyingObject


-(id)init;


@end


#endif