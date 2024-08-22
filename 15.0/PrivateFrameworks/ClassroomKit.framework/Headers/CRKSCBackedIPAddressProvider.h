// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSCBACKEDIPADDRESSPROVIDER_H
#define CRKSCBACKEDIPADDRESSPROVIDER_H

@class NSSet, NSString;
@protocol CRKIPAddressProviding;

#import <Foundation/Foundation.h>


@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding>

 {
    NSSet *mInterfaceTypes;
}


@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAllowedInterfaceType:(id)arg0 ;
-(id)init;
-(id)initWithInterfaceType:(id)arg0 ;
-(id)initWithInterfaceTypes:(id)arg0 ;


@end


#endif