// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUSERSETTINGS_H
#define WFUSERSETTINGS_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WFWhitelistSiteBuffer.h"

@interface WFUserSettings : NSObject {
    NSDictionary *_userSettings;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}


@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenBlackListedSites;
@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenWhiteListedSites;
@property (readonly, nonatomic) BOOL canEditOverridesAllowed;
@property (readonly, nonatomic) BOOL canEditRestrictionType;
@property (readonly, nonatomic) BOOL canEditWhiteListAllowedSites;
@property (retain, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property (retain, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
@property (nonatomic) BOOL overridesAllowed;
@property (nonatomic) NSInteger restrictionType;
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property (retain, nonatomic) NSArray *whiteListAllowedSites;


+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg0 ;
+(id)_metasiteDomainNamesArray;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
+(id)metasitesExceptionPath;
+(id)metasitesPath;
-(BOOL)_addManagedDefaults:(id)arg0 ;
-(BOOL)_setManagedDefaults:(id)arg0 ;
-(BOOL)alwaysAllowHTTPS;
-(BOOL)autoWhitelistContainsURL:(id)arg0 ;
-(BOOL)canEditAlwaysAllowHTTPS;
-(BOOL)contentFilterEnabled;
-(BOOL)contentFilterListsAllowURL:(id)arg0 ;
-(BOOL)contentFilterOverriddenBlackListContainsURL:(id)arg0 ;
-(BOOL)contentFilterOverriddenList:(id)arg0 containsURL:(id)arg1 ;
-(BOOL)contentFilterOverriddenWhiteListContainsURL:(id)arg0 ;
-(BOOL)contentFilterOverridesEnabled;
-(BOOL)restrictWebEnabled;
-(BOOL)whiteListContainsURL:(id)arg0 ;
-(BOOL)whiteListEnabled;
-(id)_managedDefaultsPath;
-(id)_userSettingsForUser:(id)arg0 ;
-(id)contentFilterOverriddenSites;
-(id)initWithUserName:(id)arg0 ;
-(id)whiteListedSitesBuffer;
-(void)dealloc;
-(void)setAlwaysAllowHTTPS:(BOOL)arg0 ;
-(void)setContentFilterEnabled:(BOOL)arg0 ;
-(void)setContentFilterOverridesEnabled:(BOOL)arg0 ;
-(void)setRestrictWebEnabled:(BOOL)arg0 ;
-(void)setWhiteListEnabled:(BOOL)arg0 ;


@end


#endif