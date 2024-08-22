// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SESVEHICLEREPORT_H
#define SESVEHICLEREPORT_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SESVehicleReport : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *functionsInProgress; // ivar: _functionsInProgress
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (retain, nonatomic) NSDictionary *proprietaryData; // ivar: _proprietaryData
@property (readonly, nonatomic) NSString *readerIdentifier; // ivar: _readerIdentifier
@property (retain, nonatomic) NSDictionary *status; // ivar: _status
@property (retain, nonatomic) NSArray *supportedFunctions; // ivar: _supportedFunctions


+(BOOL)supportsSecureCoding;
-(BOOL)isRKEFunctionInProgress:(id)arg0 ;
-(BOOL)isRKEFunctionSupported:(id)arg0 ;
-(id)description;
-(id)getProprietaryDataForRKEFunction:(id)arg0 ;
-(id)getRKEFunctionsInProgress;
-(id)getStatusForRKEFunction:(id)arg0 ;
-(id)getSupportedRKEFunctions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyIdentifier:(id)arg0 readerIdentifier:(id)arg1 supportedFunctions:(id)arg2 functionsInProgress:(id)arg3 status:(id)arg4 proprietaryData:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif