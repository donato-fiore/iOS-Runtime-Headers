// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBDESCRIPTOR_H
#define CBDESCRIPTOR_H

@class NSNumber;


#import "CBAttribute.h"
#import "CBCharacteristic.h"
#import "CBPeripheral.h"

@interface CBDescriptor : CBAttribute

@property (weak, nonatomic) CBCharacteristic *characteristic; // ivar: _characteristic
@property (readonly, nonatomic) NSNumber *handle; // ivar: _handle
@property (readonly, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (retain) id *value; // ivar: _value


-(id)description;
-(id)handleValueUpdated:(id)arg0 ;
-(id)handleValueWritten:(id)arg0 ;
-(id)initWithCharacteristic:(id)arg0 dictionary:(id)arg1 ;
-(void)invalidate;


@end


#endif