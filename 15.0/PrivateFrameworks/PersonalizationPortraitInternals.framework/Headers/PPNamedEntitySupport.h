// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPNAMEDENTITYSUPPORT_H
#define PPNAMEDENTITYSUPPORT_H


#import <Foundation/Foundation.h>


@interface PPNamedEntitySupport : NSObject



+(id)fullAddressForStreetAddress:(id)arg0 city:(id)arg1 state:(id)arg2 postalCode:(id)arg3 country:(id)arg4 ;
+(id)streetAddressFromThoroughfare:(id)arg0 subThoroughfare:(id)arg1 ;


@end


#endif