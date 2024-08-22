// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCURRENTPLATFORMIPADDRESSPROVIDER_H
#define CRKCURRENTPLATFORMIPADDRESSPROVIDER_H

@class NSString;
@protocol CRKIPAddressProviding;

#import <Foundation/Foundation.h>


@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding>



@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) NSObject<CRKIPAddressProviding> *baseProvider; // ivar: _baseProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)makeProviderForCurrentPlatform;


@end


#endif