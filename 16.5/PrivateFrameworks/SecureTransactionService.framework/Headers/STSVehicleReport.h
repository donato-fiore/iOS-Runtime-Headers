// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSVEHICLEREPORT_H
#define STSVEHICLEREPORT_H

@class NSArray, NSString, NFVehicleReport;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSVehicleReport : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *functionsInProgress;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSArray *supportedFunctions;
@property (readonly, nonatomic) BOOL supportsSecureRanging; // ivar: _supportsSecureRanging
@property (retain, nonatomic) NFVehicleReport *vehicleReport; // ivar: _vehicleReport


+(BOOL)supportsSecureCoding;
-(BOOL)isFunctionInProgress:(id)arg0 ;
-(BOOL)isFunctionSupported:(id)arg0 ;
-(id)description;
-(id)getStatusForFunction:(id)arg0 ;
-(id)initVehicleReport:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif