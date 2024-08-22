// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAINTERVISITMETRICSSNAPSHOT_H
#define TAINTERVISITMETRICSSNAPSHOT_H

@class NSMutableDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TAInterVisitMetricsSnapshot : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *accumulatedDeviceMetrics; // ivar: _accumulatedDeviceMetrics
@property (readonly, nonatomic) NSMutableDictionary *firstAssociatedLocationPerDevice; // ivar: _firstAssociatedLocationPerDevice
@property (readonly, nonatomic) NSDate *initialTime; // ivar: _initialTime
@property (readonly, nonatomic) BOOL isClosed; // ivar: _isClosed
@property (readonly, nonatomic) NSMutableDictionary *lastAdvPerDevice; // ivar: _lastAdvPerDevice
@property (readonly, nonatomic) NSMutableDictionary *lastAssociatedLocationPerDevice; // ivar: _lastAssociatedLocationPerDevice
@property (readonly, nonatomic) NSDate *lastUpdateTime; // ivar: _lastUpdateTime
@property (readonly, nonatomic) NSUInteger maxUniqueAddresses; // ivar: _maxUniqueAddresses


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTime:(id)arg0 maxUniqueAddresses:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateInterVisitMetric:(id)arg0 withUpdatedTime:(id)arg1 andCloseSnapshot:(BOOL)arg2 ;
-(void)updateWithInterVisitMetricsSnapshot:(id)arg0 ;


@end


#endif