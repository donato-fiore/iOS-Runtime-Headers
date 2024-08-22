// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWEBSERVICEVIRTUALCARDFEATURE_H
#define PKWEBSERVICEVIRTUALCARDFEATURE_H

@class NSString, NSSet;


#import "PKWebServiceRegionFeature.h"

@interface PKWebServiceVirtualCardFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSString *merchantId; // ivar: _merchantId
@property (readonly, copy, nonatomic) NSSet *supportedNetworks; // ivar: _supportedNetworks


+(id)virtualCardFeature;
-(id)initWithFeatureType:(NSInteger)arg0 dictionary:(id)arg1 region:(id)arg2 ;


@end


#endif