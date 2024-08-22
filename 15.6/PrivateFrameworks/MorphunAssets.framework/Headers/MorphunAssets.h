// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MORPHUNASSETS_H
#define MORPHUNASSETS_H

@class NSMutableDictionary, NSUserDefaults, NSString, NSLock;

#import <Foundation/Foundation.h>


@interface MorphunAssets : NSObject

@property (retain) NSMutableDictionary *readyLanguages; // ivar: readyLanguages
@property (retain, nonatomic) NSUserDefaults *subscriptionCache; // ivar: subscriptionCache
@property (retain, nonatomic) NSString *subscriptionProcessKey; // ivar: subscriptionProcessKey
@property (retain, nonatomic) NSMutableDictionary *subscriptionView; // ivar: subscriptionView
@property (retain) NSLock *subscriptionViewLock; // ivar: subscriptionViewLock


+(BOOL)isLanguageEmbedded:(id)arg0 ;
+(BOOL)isLocaleEmbedded:(id)arg0 ;
+(BOOL)validateLanguageCode:(id)arg0 ;
+(NSInteger)getCurrentNamespace;
+(id)EmbeddedLanguages;
+(id)EmbeddedLocales;
+(id)EmbeddedVersion;
+(id)MorphunDomain;
+(id)SupportedLanguages;
+(id)SupportedLocales;
+(id)blockingOnDemandDownloadForLanguageCode:(id)arg0 withTimeout:(NSUInteger)arg1 withProgress:(id)arg2 ;
+(id)blockingOnDemandDownloadForLocale:(id)arg0 withTimeout:(NSUInteger)arg1 withProgress:(id)arg2 ;
+(id)blockingRemoveAssetForLanguageCode:(id)arg0 withTimeout:(NSUInteger)arg1 ;
+(id)blockingRemoveAssetForLocale:(id)arg0 withTimeout:(NSUInteger)arg1 ;
+(id)get;
+(id)getAssetForLanguageCode:(id)arg0 ;
+(id)getAssetPathForCurrentSiriLanguage;
+(id)getAssetPathForLanguageCode:(id)arg0 ;
+(id)getAssetPathForLocale:(id)arg0 ;
+(id)getCurrentNamespaceName;
+(id)getFactorNameForLanguageCode:(id)arg0 ;
+(id)getFactorNameForLocale:(id)arg0 ;
+(id)getTRIClient;
+(id)getTRINamespaceName:(NSInteger)arg0 ;
+(id)subscriptionDbInitializerWithKey:(id)arg0 ;
+(void)MorphunAssetsLazyInitIfNeeded;
// +(void)onDemandDownloadForLanguageCode:(id)arg0 withProgress:(id)arg1 withCompletion:(unk)arg2  ;
// +(void)onDemandDownloadForLocale:(id)arg0 withProgress:(id)arg1 withCompletion:(unk)arg2  ;
+(void)registerForTRINamespaceUpdates;
+(void)removeAssetForLanguageCode:(id)arg0 withCompletion:(id)arg1 ;
+(void)removeAssetForLocale:(id)arg0 withCompletion:(id)arg1 ;
+(void)setTrialNamespaceToUse:(NSInteger)arg0 ;
-(BOOL)isAssetReadyForLocale:(id)arg0 ;
-(BOOL)isSubscribedToLocale:(id)arg0 ;
-(BOOL)validateLocale:(id)arg0 ;
-(id)getMorphunDataPathForLocale:(id)arg0 ;
-(id)init;
-(id)listSubscriptions;
-(id)processSubscriptions;
-(id)referenceCountsFromSubscriptionView;
-(void)downloadLanguageIfNeeded:(id)arg0 withCompletion:(id)arg1 ;
-(void)readSubscriptionView;
-(void)removeLanguageIfNeeded:(id)arg0 ;
-(void)setLanguageReadinessFromTrial;
-(void)subscribeToLocale:(id)arg0 withCompletion:(id)arg1 ;
-(void)unsubscribeFromLocale:(id)arg0 ;
-(void)writeSubscriptionView;


@end


#endif