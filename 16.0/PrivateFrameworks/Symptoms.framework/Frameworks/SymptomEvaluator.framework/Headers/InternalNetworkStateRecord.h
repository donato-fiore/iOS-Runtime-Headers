// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTERNALNETWORKSTATERECORD_H
#define INTERNALNETWORKSTATERECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface InternalNetworkStateRecord : NSObject

@property (readonly) NSInteger stateAge; // ivar: _stateAge
@property (readonly) NSInteger stateDayOfWeek; // ivar: _stateDayOfWeek
@property (readonly) NSInteger stateDurationSeconds; // ivar: _stateDurationSeconds
@property (readonly) NSString *stateNetworkId; // ivar: _stateNetworkId
@property (readonly) NSInteger stateNetworkLQM; // ivar: _stateNetworkLQM
@property (readonly) NSInteger stateSlotId; // ivar: _stateSlotId
@property (readonly) NSInteger stateSlotLength; // ivar: _stateSlotLength


-(BOOL)_isEqualToNetworkStateRecord:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAge:(NSInteger)arg0 dayOfWeek:(NSInteger)arg1 slotId:(NSInteger)arg2 networkId:(id)arg3 networkLQM:(NSInteger)arg4 stateDurationSeconds:(NSInteger)arg5 stateSlotLength:(NSInteger)arg6 ;
-(void)mergeState:(id)arg0 ;


@end


#endif