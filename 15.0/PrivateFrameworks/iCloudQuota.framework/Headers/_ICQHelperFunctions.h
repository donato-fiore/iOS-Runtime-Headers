// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQHELPERFUNCTIONS_H
#define _ICQHELPERFUNCTIONS_H


#import <Foundation/Foundation.h>


@interface _ICQHelperFunctions : NSObject



+(BOOL)_checkOptions:(id)arg0 forKey:(id)arg1 ;
+(BOOL)_requestedDefaultOfferInOptions:(id)arg0 ;
+(BOOL)_requestedFetchOffersInOptions:(id)arg0 ;
+(BOOL)_requestedPremiumOfferInOptions:(id)arg0 ;
+(BOOL)defaultKeyExists:(id)arg0 ;
+(BOOL)isInternalUI;
+(BOOL)isServerMockingEnabled;
+(NSInteger)_getOfferRequestTypeFromOptions:(id)arg0 bundleId:(id)arg1 isBuddy:(BOOL)arg2 ;
+(id)_darwinNotificationNameForRequestType:(NSInteger)arg0 ;
+(id)_getOfferDescriptionFromRequestType:(NSInteger)arg0 ;
+(id)base64EncodeString:(id)arg0 ;
+(id)defaultStringValueForKey:(id)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
+(id)findPlaceholdersInString:(id)arg0 ;
+(id)getStringFromNumber:(id)arg0 ;
+(id)parseTemplates:(id)arg0 ;
+(id)replaceWordsIn:(id)arg0 with:(id)arg1 ;
+(id)stringFromTemplates:(id)arg0 key:(id)arg1 ;


@end


#endif