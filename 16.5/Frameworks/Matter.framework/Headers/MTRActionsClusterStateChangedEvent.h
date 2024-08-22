// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACTIONSCLUSTERSTATECHANGEDEVENT_H
#define MTRACTIONSCLUSTERSTATECHANGEDEVENT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRActionsClusterStateChangedEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (copy, nonatomic) NSNumber *invokeID; // ivar: _invokeID
@property (copy, nonatomic, getter=getNewState) NSNumber *newState; // ivar: _newState


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif