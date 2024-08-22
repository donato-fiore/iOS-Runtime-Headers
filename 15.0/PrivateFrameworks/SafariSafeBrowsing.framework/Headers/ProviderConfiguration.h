// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROVIDERCONFIGURATION_H
#define PROVIDERCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ProviderConfiguration : NSObject {
    NSDictionary *_configuration;
}


@property (readonly, nonatomic) BOOL malwareThreatTypeOff; // ivar: _malwareThreatTypeOff
@property (nonatomic) BOOL providerOff; // ivar: _providerOff
@property (readonly, nonatomic) BOOL proxyOff; // ivar: _proxyOff
@property (readonly, nonatomic) BOOL socialEngineeringThreatTypeOff; // ivar: _socialEngineeringThreatTypeOff
@property (readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff; // ivar: _unwantedSoftwareThreatTypeOff


-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)_currentRegionCode;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_configureToBeOff;
-(void)_configureToUseDefaultValues;
-(void)_parseConfiguration:(id)arg0 ;


@end


#endif