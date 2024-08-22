// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOKERBEROSHEIMDALPLUGINSETTINGS_H
#define SOKERBEROSHEIMDALPLUGINSETTINGS_H

@class NSUUID, NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOKerberosHeimdalPluginSettings : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger credentialUseMode; // ivar: _credentialUseMode
@property (retain, nonatomic) NSUUID *currentCredential;
@property (nonatomic, getter=isDefaultRealm) BOOL defaultRealm; // ivar: _defaultRealm
@property (retain, nonatomic) NSDictionary *domainRealmMapping; // ivar: _domainRealmMapping
@property (retain, nonatomic) NSArray *hosts; // ivar: _hosts
@property (retain, nonatomic) NSArray *kdcs; // ivar: _kdcs
@property (readonly, nonatomic) NSString *realm; // ivar: _realm
@property (retain, nonatomic) NSString *siteCode;


+(BOOL)createSettingCacheEntryIfNeededWithError:(*id)arg0 ;
+(BOOL)deleteSettingsForRealm:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)appSSOKerberosCacheName;
+(id)retrieveAllCurrentSettings;
+(id)retrieveCurrentSettingsForRealm:(id)arg0 error:(*id)arg1 ;
+(id)stringWithCredentialUseMode:(NSInteger)arg0 ;
+(struct HeimCred_s *)createCacheEntryWithError:(*id)arg0 ;
+(struct HeimCred_s *)retrieveCacheEntry;
+(struct HeimCred_s *)retrieveCurrentSettingsForRealm:(id)arg0 ;
+(struct HeimCred_s *)retrieveSetting:(id)arg0 forRealm:(id)arg1 ;
+(void)deleteAllSettings;
+(void)setAppSSOKerberosCacheName:(id)arg0 ;
-(BOOL)saveSetting:(id)arg0 data:(id)arg1 withError:(*id)arg2 ;
-(BOOL)saveWithError:(*id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRealm:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif