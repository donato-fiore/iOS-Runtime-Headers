// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESVEHICLEREPORT_H
#define SESVEHICLEREPORT_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESVehicleReport : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *functionsInProgress; // ivar: _functionsInProgress
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (retain, nonatomic) NSDictionary *status; // ivar: _status
@property (retain, nonatomic) NSArray *supportedFunctions; // ivar: _supportedFunctions


+(BOOL)supportsSecureCoding;
-(BOOL)isRKEFunctionInProgress:(id)arg0 ;
-(BOOL)isRKEFunctionSupported:(id)arg0 ;
-(id)description;
-(id)getRKEFunctionsInProgress;
-(id)getStatusForRKEFunction:(id)arg0 ;
-(id)getSupportedRKEFunctions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyIdentifier:(id)arg0 supportedFunctions:(id)arg1 functionsInProgress:(id)arg2 status:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif