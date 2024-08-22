// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAAPPLICATIONICLOUDPREFERENCES_H
#define TSAAPPLICATIONICLOUDPREFERENCES_H

@class TSKApplicationICloudPreferences;



@interface TSAApplicationICloudPreferences : TSKApplicationICloudPreferences

@property (readonly, nonatomic) BOOL hasIWorkAuthorName;


-(BOOL)isICloudDocumentPreference:(id)arg0 validForKey:(id)arg1 ;
-(BOOL)isValidIWorkAuthorColorIndex:(NSUInteger)arg0 ;
-(NSUInteger)collaboratorColorIndexForKvsDocumentKey:(id)arg0 ;
-(NSUInteger)iWorkAuthorColorIndex;
-(id)collaboratorNameForDocumentInfo:(id)arg0 firstName:(*id)arg1 lastName:(*id)arg2 ;
-(id)documentPreferenceKeyPrefix;
-(id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)arg0 isMatchingKey:(*BOOL)arg1 ;
-(id)iCloudPreferenceKeys;
-(id)iWorkAuthorName;
-(id)iWorkAuthorPrivateIDsAndMetadata;
-(id)preferencesForKvsDocumentKey:(id)arg0 ;
-(id)validICloudPreferencesForPreferences:(id)arg0 invalidKeys:(*id)arg1 ;
-(void)clearICloudDocumentPreferences;
-(void)clearIWorkAuthorColorIndex;
-(void)clearIWorkAuthorName;
-(void)clearIWorkAuthorPrivateID;
-(void)p_ubiquitousKeyValueStoreDidChange:(id)arg0 ;
-(void)registerICloudPreferences;
-(void)setIWorkAuthorColorIndex:(NSUInteger)arg0 ;
-(void)setIWorkAuthorName:(id)arg0 ;
-(void)setIWorkAuthorPrivateIDsAndMetadata:(id)arg0 ;
-(void)setPreferences:(id)arg0 forKvsDocumentKey:(id)arg1 ;


@end


#endif