// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFVEHICLEREPORT_H
#define NFVEHICLEREPORT_H

@class NSString, SESVehicleReport;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFVehicleReport : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *keyIdentifier;
@property (retain, nonatomic) SESVehicleReport *vehicleReport; // ivar: _vehicleReport


+(BOOL)supportsSecureCoding;
-(BOOL)isRKEFunctionInProgress:(id)arg0 ;
-(BOOL)isRKEFunctionSupported:(id)arg0 ;
-(id)description;
-(id)getRKEFunctionsInProgress;
-(id)getStatusForRKEFunction:(id)arg0 ;
-(id)getSupportedRKEFunctions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSESVehicleReport:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif