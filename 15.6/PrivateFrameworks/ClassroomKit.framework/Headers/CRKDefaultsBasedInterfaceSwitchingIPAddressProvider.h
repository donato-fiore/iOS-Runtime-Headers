// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKDEFAULTSBASEDINTERFACESWITCHINGIPADDRESSPROVIDER_H
#define CRKDEFAULTSBASEDINTERFACESWITCHINGIPADDRESSPROVIDER_H

@class NSString;
@protocol CRKIPAddressProviding;

#import <Foundation/Foundation.h>


@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject <CRKIPAddressProviding>

 {
    id<CRKIPAddressProviding> *mBaseProvider;
}


@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)prefersEthernet;
-(id)init;
-(void)makeProvider;


@end


#endif