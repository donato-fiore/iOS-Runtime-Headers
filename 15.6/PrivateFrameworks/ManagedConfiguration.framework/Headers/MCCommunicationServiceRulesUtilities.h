// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCCOMMUNICATIONSERVICERULESUTILITIES_H
#define MCCOMMUNICATIONSERVICERULESUTILITIES_H


#import <Foundation/Foundation.h>


@interface MCCommunicationServiceRulesUtilities : NSObject



+(id)defaultAppBundleIDForCommunicationServiceType:(id)arg0 forAccountWithIdentifier:(id)arg1 ;
+(id)restrictionsForValidatedCommunicationServiceRules:(id)arg0 ;
+(id)validServiceTypes;
+(id)validatedCommunicationServiceRules:(id)arg0 outError:(*id)arg1 ;


@end


#endif