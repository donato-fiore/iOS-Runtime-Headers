// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONNECTIONSADDRESSFORMATTER_H
#define PPCONNECTIONSADDRESSFORMATTER_H


#import <Foundation/Foundation.h>


@interface PPConnectionsAddressFormatter : NSObject



+(BOOL)isValidAddressDictionary:(id)arg0 ;
+(id)addressComponentValueWithLocationField:(unsigned char)arg0 forAddress:(id)arg1 duetEvent:(id)arg2 ;
+(id)addressDictionaryFromAttributeSet:(id)arg0 ;
+(id)formattedAddressWithLocationField:(unsigned char)arg0 address:(id)arg1 duetEvent:(id)arg2 shortStyle:(BOOL)arg3 ;
+(id)formattedCityAndStateWithCity:(id)arg0 state:(id)arg1 ;
+(id)formattedStreetNameWithThoroughfare:(id)arg0 subThoroughfare:(id)arg1 ;
+(id)postalAddressFromAttributeSet:(id)arg0 ;
+(id)postalAddressFromDuetEvent:(id)arg0 ;
+(id)singleLineFormattedAddressWithPostalAddress:(id)arg0 shortStyle:(BOOL)arg1 ;


@end


#endif