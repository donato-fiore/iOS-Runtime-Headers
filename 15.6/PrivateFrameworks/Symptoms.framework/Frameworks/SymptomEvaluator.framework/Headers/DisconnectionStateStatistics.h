// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DISCONNECTIONSTATESTATISTICS_H
#define DISCONNECTIONSTATESTATISTICS_H

@class NSString, NSSet, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DisconnectionStateStatistics : NSObject <NSSecureCoding>



@property (readonly) NSUInteger averageDisconnectionLength; // ivar: _averageDisconnectionLength
@property (readonly) NSString *connectToNetworkId; // ivar: _connectToNetworkId
@property (readonly) NSSet *daysOfWeek; // ivar: _daysOfWeek
@property (readonly) NSString *disconnectedFromNetworkId; // ivar: _disconnectedFromNetworkId
@property (readonly) NSMutableArray *networkStateRecords; // ivar: _networkStateRecords
@property (readonly) NSUInteger periodId; // ivar: _periodId


+(BOOL)supportsSecureCoding;
-(BOOL)isMergeableWithDisconnectionStateStatistics:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDaysOfWeek:(id)arg0 periodId:(NSUInteger)arg1 forNetworkStateRecord:(id)arg2 ;
-(void)calculateAverageLength;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeDisconnectionStateStatistics:(id)arg0 ;


@end


#endif