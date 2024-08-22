// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSINGLEINTERFACEIPADDRESSPROVIDER_H
#define CRKSINGLEINTERFACEIPADDRESSPROVIDER_H

@class NSString;
@protocol CRKIPAddressProviding;

#import <Foundation/Foundation.h>


@interface CRKSingleInterfaceIPAddressProvider : NSObject <CRKIPAddressProviding>

 {
    NSString *mInterfaceName;
}


@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithInterfaceName:(id)arg0 ;


@end


#endif