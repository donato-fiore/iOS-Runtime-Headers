// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSABASEAPPLICATIONDELEGATE_H
#define TSABASEAPPLICATIONDELEGATE_H

@class TSWPApplicationDelegate, NSArray;
@protocol TSADownloadDelegate;


#import "TSADocumentRoot.h"

@interface TSABaseApplicationDelegate : TSWPApplicationDelegate

@property (weak, nonatomic) TSADocumentRoot *documentRoot; // ivar: mDocumentRoot
@property (retain, nonatomic) NSObject<TSADownloadDelegate> *downloadDelegate; // ivar: _downloadDelegate
@property (readonly, nonatomic) BOOL hasIWorkAuthorName;
@property (readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;
@property (readonly, nonatomic) CGFloat maximumAspectRatioForPreviewImage;
@property (readonly, nonatomic) CGFloat mimimumAspectRatioForPreviewImage;


+(id)sharedDelegate;
+(id)tsa_sharedPropertiesProvider;
+(void)resetSharedConfigurations;
-(BOOL)hasApplicationBadgeCount;
-(BOOL)isICloudDocumentPreference:(id)arg0 validForKey:(id)arg1 ;
-(BOOL)isValidIWorkAuthorColorIndex:(NSUInteger)arg0 ;
-(BOOL)openURL:(id)arg0 displayAlertOnError:(BOOL)arg1 ;
-(NSUInteger)collaboratorColorIndexForKvsDocumentKey:(id)arg0 ;
-(NSUInteger)iWorkAuthorColorIndex;
-(id)collaboratorNameForDocumentInfo:(id)arg0 firstName:(*id)arg1 lastName:(*id)arg2 ;
-(id)documentPreferenceKeyPrefix;
-(id)existingNestedDocumentPathForPath:(id)arg0 ;
-(id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)arg0 isMatchingKey:(*BOOL)arg1 ;
-(id)iCloudPreferenceKeys;
-(id)iCloudPreferencesForKvsDocumentKey:(id)arg0 ;
-(id)iWorkAuthorName;
-(id)iWorkAuthorPrivateID;
-(id)init;
-(id)validICloudPreferencesForPreferences:(id)arg0 invalidKeys:(*id)arg1 ;
-(void)clearICloudDocumentPreferences;
-(void)clearIWorkAuthorColorIndex;
-(void)clearIWorkAuthorName;
-(void)clearIWorkAuthorPrivateID;
-(void)persistenceError:(id)arg0 ;
-(void)registerDefaults;
-(void)registerDrawableInfoClassMapping;
-(void)registerICloudPreferences;
-(void)registerSOSClassTypeMappings;
-(void)setApplicationBadgeCount:(NSUInteger)arg0 forCategory:(id)arg1 ;
-(void)setICloudPreferences:(id)arg0 forKvsDocumentKey:(id)arg1 ;
-(void)setIWorkAuthorColorIndex:(NSUInteger)arg0 ;
-(void)setIWorkAuthorName:(id)arg0 ;
-(void)setIWorkAuthorPrivateID:(id)arg0 ;
-(void)ubiquitousKeyValueStoreDidChange:(id)arg0 ;


@end


#endif