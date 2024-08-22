// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHPSAPICONFORMANCEPROVIDING_H
#define HMDHPSAPICONFORMANCEPROVIDING_H

@protocol HMDHPSAPIConformanceProviding;

#import <Foundation/Foundation.h>


@interface HMDHPSAPIConformanceProviding : NSObject <HMDHPSAPIConformanceProviding>





+(BOOL)objectRespondsToHPSBooleanSettingProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSConstrainedNumberSettingProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSLanguageValueProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSNumberSettingProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSSettingProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSSiriAvailableLanguagesProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSSiriLanguageSettingProtocolMethods:(id)arg0 ;
+(BOOL)objectRespondsToHPSStringSettingProtocolMethods:(id)arg0 ;


@end


#endif