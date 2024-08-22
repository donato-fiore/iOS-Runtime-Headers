// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATNETWORKPOWERPRIMITIVESBACKEDASSERTIONPROVIDER_H
#define CATNETWORKPOWERPRIMITIVESBACKEDASSERTIONPROVIDER_H

@protocol CATAssertionProviding, CATNetworkPowerPrimitives;

#import <Foundation/Foundation.h>


@interface CATNetworkPowerPrimitivesBackedAssertionProvider : NSObject <CATAssertionProviding>



@property (readonly, nonatomic) NSObject<CATNetworkPowerPrimitives> *networkPowerPrimitives; // ivar: _networkPowerPrimitives


-(id)acquireAssertion;
-(id)initWithNetworkPowerPrimitives:(id)arg0 ;


@end


#endif