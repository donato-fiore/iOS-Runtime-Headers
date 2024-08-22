// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBRIDGEDACTIONSCLUSTERINSTANTACTIONPARAMS_H
#define MTRBRIDGEDACTIONSCLUSTERINSTANTACTIONPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRBridgedActionsClusterInstantActionParams : NSObject

@property (retain, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (retain, nonatomic) NSNumber *invokeID; // ivar: _invokeID
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif