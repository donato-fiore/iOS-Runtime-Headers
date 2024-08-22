// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSERVICE_H
#define CBSERVICE_H

@class NSArray, NSNumber;


#import "CBAttribute.h"
#import "CBPeripheral.h"

@interface CBService : CBAttribute

@property (retain) NSArray *characteristics; // ivar: _characteristics
@property (readonly, nonatomic) NSNumber *endHandle; // ivar: _endHandle
@property (retain) NSArray *includedServices; // ivar: _includedServices
@property (nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (readonly, weak, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (readonly, nonatomic) NSNumber *startHandle; // ivar: _startHandle


-(id)description;
-(id)handleCharacteristicsDiscovered:(id)arg0 ;
-(id)handleIncludedServicesDiscovered:(id)arg0 ;
-(id)initWithPeripheral:(id)arg0 dictionary:(id)arg1 ;
-(void)invalidate;


@end


#endif