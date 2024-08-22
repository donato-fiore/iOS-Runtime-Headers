// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSUSERACTIVITY_H
#define NSUSERACTIVITY_H

@class NSDictionary, NSDate, UAUserActivity, NSSet, NSURL;
@protocol NSUserActivityDelegate;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSUUID.h"

@interface NSUserActivity : NSObject {
    id *_delegate;
    id *_frameworkDelegate;
}


@property (copy, setter=_setContentAttributes:) NSDictionary *_contentAttributes;
@property (copy, setter=_setContentIdentifier:) NSString *_contentIdentifier;
@property (copy, setter=_setContentType:) NSString *_contentType;
@property (copy, setter=_setContentUserAction:) NSString *_contentUserAction;
@property (getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:) BOOL _eligibleForUserActivityHandoff;
@property (getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:) BOOL _eligibleForUserActivityIndexing;
@property (getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:) BOOL _eligibleForUserActivityPublicIndexing;
@property (getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:) BOOL _eligibleForUserActivityReminders;
@property (copy, setter=_setExpirationDate:) NSDate *_expirationDate;
@property (weak, setter=_setFrameworkDelegate:) NSObject<NSUserActivityDelegate> *_frameworkDelegate;
@property (copy, setter=_setFrameworkPayload:) NSDictionary *_frameworkPayload;
@property (readonly, retain) UAUserActivity *_internalUserActivity; // ivar: _internal
@property (readonly, retain) UAUserActivity *_internalUserActivity;
@property (copy, setter=_setKeywords:) NSSet *_keywords;
@property (readonly, copy) NSDate *_lastActivityDate;
@property (copy, setter=_setMinimalRequiredUserInfoKeys:) NSSet *_minimalRequiredUserInfoKeys;
@property (copy, setter=_setOptions:) NSDictionary *_options;
@property (copy, setter=_setSubtitle:) NSString *_subtitle;
@property (readonly) NSInteger _suggestedActionType;
@property (readonly, copy) NSString *_teamIdentifier;
@property (readonly, retain) NSUUID *_uniqueIdentifier;
@property (readonly, copy) NSString *activityType;
@property (weak) NSObject<NSUserActivityDelegate> *delegate;
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property (getter=isEligibleForPrediction) BOOL eligibleForPrediction;
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing;
@property (getter=isEligibleForSearch) BOOL eligibleForSearch;
@property (copy) NSDate *expirationDate;
@property (copy) NSSet *keywords;
@property BOOL needsSave;
@property (copy) NSString *persistentIdentifier;
@property (copy) NSURL *referrerURL;
@property (copy) NSSet *requiredUserInfoKeys;
@property BOOL supportsContinuationStreams;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSString *title;
@property (copy) NSDictionary *userInfo;
@property (copy) NSURL *webpageURL;


+(BOOL)_currentUserActivityUUIDWithOptions:(id)arg0 completionHandler:(id)arg1 ;
+(BOOL)_supportsUserActivityAppLinks;
+(id)_currentUserActivityUUID;
+(id)_fetchUserActivityWithUUID:(id)arg0 intervalToWaitForDocumentSynchronizationToComplete:(CGFloat)arg1 completionHandler:(id)arg2 ;
+(id)_userFacingErrorForLaunchServicesError:(id)arg0 userInfo:(id)arg1 ;
+(void)_fetchUserActivityWithUUID:(id)arg0 completionHandler:(id)arg1 ;
+(void)_registerUserActivityType:(id)arg0 dynamicActivityType:(id)arg1 ;
+(void)_unregisterUserActivityType:(id)arg0 dynamicActivityType:(id)arg1 ;
+(void)deleteAllSavedUserActivitiesWithCompletionHandler:(id)arg0 ;
+(void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_createUserActivityDataWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_createUserActivityStringsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg0 ;
-(id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg0 ;
-(id)_initWithTypeIdentifier:(id)arg0 suggestedActionType:(NSInteger)arg1 options:(id)arg2 ;
-(id)_initWithUserActivityData:(id)arg0 ;
-(id)_initWithUserActivityStrings:(id)arg0 secondaryString:(id)arg1 optionalData:(id)arg2 ;
-(id)_initWithUserActivityType:(id)arg0 dynamicActivityType:(id)arg1 options:(id)arg2 ;
-(id)_parentUserActivity;
-(id)contentAttributeSet;
-(id)contentAttributes;
-(id)contentType;
-(id)contentUserAction;
-(id)init;
-(id)initWithActivityType:(id)arg0 ;
-(id)initWithInternalUserActivity:(id)arg0 ;
-(id)initWithTypeIdentifier:(id)arg0 ;
-(id)typeIdentifier;
-(id)webPageURL;
-(void)_addKeywordsFromArray:(id)arg0 ;
-(void)_prepareUserActivityForLaunchingWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeFrameworkPayloadValueForKey:(id)arg0 ;
-(void)_removeUserInfoValueForKey:(id)arg0 ;
-(void)_resignCurrent;
-(void)_setLastActivityDate:(id)arg0 ;
-(void)_setParentUserActivity:(id)arg0 ;
-(void)_updateFrameworkPayloadValue:(id)arg0 forKey:(id)arg1 ;
-(void)_updateUserInfoValue:(id)arg0 forKey:(id)arg1 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg0 ;
-(void)becomeCurrent;
-(void)dealloc;
-(void)didReceiveInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)didSynchronizeActivity;
-(void)getContinuationStreamsWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)resignCurrent;
-(void)setContentAttributeSet:(id)arg0 ;
-(void)setContentAttributes:(id)arg0 ;
-(void)setContentType:(id)arg0 ;
-(void)setContentUserAction:(id)arg0 ;
-(void)setWebPageURL:(id)arg0 ;
-(void)willSynchronizeActivity;


@end


#endif