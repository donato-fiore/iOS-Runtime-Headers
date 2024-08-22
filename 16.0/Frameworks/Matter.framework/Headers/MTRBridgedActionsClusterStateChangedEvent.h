// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBRIDGEDACTIONSCLUSTERSTATECHANGEDEVENT_H
#define MTRBRIDGEDACTIONSCLUSTERSTATECHANGEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRBridgedActionsClusterStateChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (retain, nonatomic) NSNumber *invokeID; // ivar: _invokeID
@property (retain, nonatomic, getter=getNewState) NSNumber *newState; // ivar: _newState


-(id)description;
-(id)init;


@end


#endif