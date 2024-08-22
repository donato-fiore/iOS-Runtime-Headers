// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPERSITEPREFERENCESUTILITIES_H
#define _SFPERSITEPREFERENCESUTILITIES_H


#import <Foundation/Foundation.h>


@interface _SFPerSitePreferencesUtilities : NSObject



+(BOOL)isBinaryPreferenceValueOn:(id)arg0 preference:(id)arg1 preferenceManager:(id)arg2 ;
+(id)preferenceValueForBoolValue:(BOOL)arg0 preference:(id)arg1 preferenceManager:(id)arg2 ;
+(id)preferenceValueForPSSpecifierValue:(id)arg0 specifier:(id)arg1 preference:(id)arg2 preferenceManager:(id)arg3 ;
+(id)specifierValueForSpecifier:(id)arg0 preferenceValue:(id)arg1 preference:(id)arg2 preferenceManager:(id)arg3 ;


@end


#endif