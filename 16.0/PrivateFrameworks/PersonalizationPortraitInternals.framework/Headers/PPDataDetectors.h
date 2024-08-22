// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPDATADETECTORS_H
#define PPDATADETECTORS_H


#import <Foundation/Foundation.h>


@interface PPDataDetectors : NSObject



+(?)isValidDataDetectorsMatchaddressComponents;
+(id)addressComponentsFromString:(id)arg0 extractedAddress:(*id)arg1 ;
+(id)addressComponentsFromString:(id)arg0 extractedAddress:(*id)arg1 locale:(id)arg2 ;
+(void)addAddressComponentsInResult:(struct __DDResult *)arg0 toDictionary:(id)arg1 ;
+(void)scanString:(id)arg0 inRange:(struct ? )arg1 withScanner:(struct __DDScanner *)arg2 options:(NSInteger)arg3 block:(id)arg4 ;


@end


#endif