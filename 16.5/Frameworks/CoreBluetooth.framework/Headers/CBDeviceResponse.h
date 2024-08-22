// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDEVICERESPONSE_H
#define CBDEVICERESPONSE_H

@class NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBDeviceResponse : NSObject <CUXPCCodable>



@property (nonatomic) unsigned short connectionHandle; // ivar: _connectionHandle
@property (nonatomic) char core0TargetPower; // ivar: _core0TargetPower
@property (nonatomic) char core1TargetPower; // ivar: _core1TargetPower
@property (nonatomic) char currentPCAP; // ivar: _currentPCAP
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) char rssi; // ivar: _rssi
@property (nonatomic) unsigned int sniffInterval; // ivar: _sniffInterval
@property (nonatomic) char txPower; // ivar: _txPower
@property (nonatomic) char txPowerMax; // ivar: _txPowerMax


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif