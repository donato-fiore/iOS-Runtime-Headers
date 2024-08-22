// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHENVIRONMENTPERFORMEVENTDATA_H
#define BLSHENVIRONMENTPERFORMEVENTDATA_H


#import <Foundation/Foundation.h>


@interface BLSHEnvironmentPerformEventData : NSObject

@property (readonly, nonatomic) NSInteger eventNewBacklightState; // ivar: _eventNewBacklightState
@property (readonly, nonatomic) NSInteger eventPreviousBacklightState; // ivar: _eventPreviousBacklightState
@property (readonly, nonatomic) NSUInteger startedTime; // ivar: _startedTime
@property (readonly, nonatomic) NSInteger stateMachineOldBacklightState; // ivar: _stateMachineOldBacklightState


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithStateMachineOldBacklightState:(NSInteger)arg0 eventPreviousBacklightState:(NSInteger)arg1 eventNewBacklightState:(NSInteger)arg2 ;


@end


#endif