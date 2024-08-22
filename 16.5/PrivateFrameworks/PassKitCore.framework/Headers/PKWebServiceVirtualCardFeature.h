// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEBSERVICEVIRTUALCARDFEATURE_H
#define PKWEBSERVICEVIRTUALCARDFEATURE_H

@class NSSet, NSString, NSDictionary;


#import "PKWebServiceRegionFeature.h"

@interface PKWebServiceVirtualCardFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSSet *implicitlySupportedNetworks; // ivar: _implicitlySupportedNetworks
@property (readonly, copy, nonatomic) NSString *merchantId; // ivar: _merchantId
@property (copy, nonatomic) NSDictionary *networks; // ivar: _networks


+(id)virtualCardFeatureWithWebService:(id)arg0 ;
-(BOOL)doesPaymentApplication:(id)arg0 supportVPANOnDevice:(id)arg1 ;
-(id)initWithFeatureType:(NSInteger)arg0 dictionary:(id)arg1 region:(id)arg2 ;


@end


#endif