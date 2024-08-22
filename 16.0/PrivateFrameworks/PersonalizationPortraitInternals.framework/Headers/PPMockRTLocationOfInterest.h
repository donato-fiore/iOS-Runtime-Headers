// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPMOCKRTLOCATIONOFINTEREST_H
#define PPMOCKRTLOCATIONOFINTEREST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PPMockRTMapItem.h"

@interface PPMockRTLocationOfInterest : NSObject

@property (retain, nonatomic) PPMockRTMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSArray *visits; // ivar: _visits


+(id)mockLocationOfInterestWithSubThoroughfare:(id)arg0 thoroughfare:(id)arg1 subLocality:(id)arg2 locality:(id)arg3 administrativeArea:(id)arg4 administrativeAreaCode:(id)arg5 postalCode:(id)arg6 country:(id)arg7 countryCode:(id)arg8 longitude:(CGFloat)arg9 latitude:(CGFloat)arg10 visits:(id)arg11 ;


@end


#endif