// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETWORKSTATERECORD_H
#define NETWORKSTATERECORD_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NetworkStateRecord : NSObject <NSSecureCoding>



@property (readonly) NSInteger stateAge; // ivar: _stateAge
@property (readonly) NSString *stateBeginningNetworkId; // ivar: _stateBeginningNetworkId
@property (readonly) NSInteger stateDayOfWeek; // ivar: _stateDayOfWeek
@property (readonly) NSString *stateEndingNetworkId; // ivar: _stateEndingNetworkId
@property (readonly) NSInteger stateLabelAssigned; // ivar: _stateLabelAssigned
@property (readonly) NSInteger stateLength; // ivar: _stateLength
@property (readonly) NSInteger stateSlotId; // ivar: _stateSlotId
@property (readonly) NSInteger stateType; // ivar: _stateType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAge:(NSInteger)arg0 dayOfWeek:(NSInteger)arg1 slotId:(NSInteger)arg2 stateLength:(NSInteger)arg3 beginningNetworkId:(id)arg4 endingNetworkId:(id)arg5 stateType:(NSInteger)arg6 label:(NSInteger)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)assignDayOfWeek:(NSInteger)arg0 ;
-(void)assignLabel:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif