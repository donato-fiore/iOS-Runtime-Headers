// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICQHELPERFUNCTIONS_H
#define _ICQHELPERFUNCTIONS_H


#import <Foundation/Foundation.h>


@interface _ICQHelperFunctions : NSObject



+(BOOL)_checkOptions:(id)arg0 forKey:(id)arg1 ;
+(BOOL)_requestedDefaultOfferInOptions:(id)arg0 ;
+(BOOL)_requestedFetchOffersInOptions:(id)arg0 ;
+(BOOL)_requestedPremiumOfferInOptions:(id)arg0 ;
+(BOOL)defaultKeyExists:(id)arg0 ;
+(BOOL)isBackupEnabledForAccount:(id)arg0 accountStore:(id)arg1 ;
+(BOOL)isICPLEnabledForAccount:(id)arg0 ;
+(BOOL)isInternalUI;
+(BOOL)isPhotosLibraryIncludedInBackupForAccount:(id)arg0 ;
+(BOOL)isServerMockingEnabled;
+(BOOL)userDefaultsBoolValueForKey:(id)arg0 ;
+(NSInteger)_getOfferRequestTypeFromOptions:(id)arg0 bundleId:(id)arg1 isBuddy:(BOOL)arg2 ;
+(NSInteger)_offerRequestTypeForStub:(id)arg0 ;
+(id)_darwinNotificationNameForRequestType:(NSInteger)arg0 ;
+(id)_getOfferDescriptionFromRequestType:(NSInteger)arg0 ;
+(id)_remoteBackupSizeOperationQueue;
+(id)base64EncodeString:(id)arg0 ;
+(id)defaultStringValueForKey:(id)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
+(id)dictionaryForKey:(id)arg0 from:(id)arg1 ;
+(id)findPlaceholdersInString:(id)arg0 ;
+(id)getStringFromNumber:(id)arg0 ;
+(id)numberForKey:(id)arg0 from:(id)arg1 ;
+(id)parseTemplates:(id)arg0 ;
+(id)replaceWordsIn:(id)arg0 with:(id)arg1 ;
+(id)stringFromTemplates:(id)arg0 key:(id)arg1 ;
+(id)usedCapacityForVolume:(id)arg0 ;
+(id)userAgentString;
+(void)getOriginalPhotosSizeWithCompletion:(id)arg0 ;
+(void)getPhotosLibrarySizeWithCompletion:(id)arg0 ;
+(void)remoteBackupSizeForAccount:(id)arg0 timeoutInSeconds:(CGFloat)arg1 completion:(id)arg2 ;
+(void)setUserDefaultsBool:(BOOL)arg0 forKey:(id)arg1 ;


@end


#endif