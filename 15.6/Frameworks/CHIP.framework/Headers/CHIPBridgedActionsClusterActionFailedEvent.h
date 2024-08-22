// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPBRIDGEDACTIONSCLUSTERACTIONFAILEDEVENT_H
#define CHIPBRIDGEDACTIONSCLUSTERACTIONFAILEDEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPBridgedActionsClusterActionFailedEvent : NSObject

@property (retain, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (retain, nonatomic) NSNumber *error; // ivar: _error
@property (retain, nonatomic) NSNumber *invokeID; // ivar: _invokeID
@property (retain, nonatomic, getter=getNewState) NSNumber *newState; // ivar: _newState


-(id)init;


@end


#endif