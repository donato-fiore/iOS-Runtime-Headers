// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPBRIDGEDACTIONSCLUSTERSTATECHANGEDEVENT_H
#define CHIPBRIDGEDACTIONSCLUSTERSTATECHANGEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPBridgedActionsClusterStateChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (retain, nonatomic) NSNumber *invokeID; // ivar: _invokeID
@property (retain, nonatomic, getter=getNewState) NSNumber *newState; // ivar: _newState


-(id)init;


@end


#endif