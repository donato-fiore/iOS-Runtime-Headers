// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBCHARACTERISTIC_H
#define CBCHARACTERISTIC_H

@class NSArray, NSNumber, NSData;


#import "CBAttribute.h"
#import "CBPeripheral.h"
#import "CBService.h"

@interface CBCharacteristic : CBAttribute

@property (retain) NSArray *descriptors; // ivar: _descriptors
@property (readonly, nonatomic) NSNumber *handle; // ivar: _handle
@property (readonly) BOOL isBroadcasted; // ivar: _isBroadcasted
@property BOOL isNotifying; // ivar: _isNotifying
@property (readonly, nonatomic) CBPeripheral *peripheral; // ivar: _peripheral
@property (nonatomic) NSUInteger properties; // ivar: _properties
@property (weak, nonatomic) CBService *service; // ivar: _service
@property (retain) NSData *value; // ivar: _value
@property (readonly, nonatomic) NSNumber *valueHandle; // ivar: _valueHandle
@property (readonly, nonatomic) NSUInteger valueTimestamp; // ivar: _valueTimestamp


-(id)description;
-(id)handleDescriptorsDiscovered:(id)arg0 ;
-(id)handleValueBroadcasted:(id)arg0 ;
-(id)handleValueNotifying:(id)arg0 ;
-(id)handleValueUpdated:(id)arg0 ;
-(id)handleValueWritten:(id)arg0 ;
-(id)initWithService:(id)arg0 dictionary:(id)arg1 ;
-(void)invalidate;


@end


#endif