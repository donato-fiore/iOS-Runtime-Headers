// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLOCATIONSUPPORT_H
#define PPLOCATIONSUPPORT_H


#import <Foundation/Foundation.h>


@interface PPLocationSupport : NSObject



+(BOOL)fuzzyMatchingLocations:(id)arg0 and:(id)arg1 ;
+(id)fullAddressOfLocation:(id)arg0 ;
+(id)locationFromThoroughfare:(id)arg0 subThoroughfare:(id)arg1 locality:(id)arg2 subLocality:(id)arg3 administrativeArea:(id)arg4 postalCode:(id)arg5 category:(unsigned short)arg6 ;
+(id)mapTitleForLocation:(id)arg0 ;
+(id)streetAddressOfLocation:(id)arg0 ;


@end


#endif