// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTEMPERATUREICONDESCRIPTOR_H
#define HFTEMPERATUREICONDESCRIPTOR_H

@class NSString;
@protocol HFIconDescriptor;

#import <Foundation/Foundation.h>


@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedTemperature; // ivar: _formattedTemperature
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger heatingCoolingMode; // ivar: _heatingCoolingMode
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR; // ivar: _shouldForceLTR
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger targetHeatingCoolingMode; // ivar: _targetHeatingCoolingMode


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithFormattedTemperature:(id)arg0 heatingCoolingMode:(NSInteger)arg1 targetHeatingCoolingMode:(NSInteger)arg2 ;


@end


#endif