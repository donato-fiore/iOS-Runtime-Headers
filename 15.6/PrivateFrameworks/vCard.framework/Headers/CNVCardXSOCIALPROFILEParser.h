// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDXSOCIALPROFILEPARSER_H
#define CNVCARDXSOCIALPROFILEPARSER_H


#import <Foundation/Foundation.h>


@interface CNVCardXSOCIALPROFILEParser : NSObject



+(BOOL)propertyLooksLikeDOSAttackString:(id)arg0 ;
+(id)adjust:(id)arg0 withParameters:(id)arg1 ;
+(id)os_log;
+(id)parametersForSocialProperty:(id)arg0 ;
+(id)profileFromURL:(id)arg0 ;
+(id)rawForSocialProperty:(id)arg0 ;
+(id)typeForSocialProperty:(id)arg0 ;
+(id)unfold:(id)arg0 ;
+(id)unwrapDoubleQuotedProperty:(id)arg0 ;
+(id)urlSuffixForSocialProperty:(id)arg0 ;
+(id)valueWithParser:(id)arg0 ;
+(void)handleBundleIndentifiersAsList:(id)arg0 socialProfile:(id)arg1 ;
+(void)handleSpecialCaseUpdateForService:(id)arg0 socialProfile:(id)arg1 ;
+(void)processExtensionValuesForLines:(id)arg0 parser:(id)arg1 ;


@end


#endif