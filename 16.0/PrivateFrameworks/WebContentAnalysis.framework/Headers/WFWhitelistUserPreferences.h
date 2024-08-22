// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWHITELISTUSERPREFERENCES_H
#define WFWHITELISTUSERPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFWhitelistSiteBuffer.h"

@interface WFWhitelistUserPreferences : NSObject

@property BOOL alwaysAllowHTTPS; // ivar: alwaysAllowHTTPS
@property (readonly) WFWhitelistSiteBuffer *filterBlacklist; // ivar: filterBlacklist
@property BOOL filterEnabled; // ivar: filterEnabled
@property (readonly) WFWhitelistSiteBuffer *filterWhitelist; // ivar: filterWhitelist
@property (retain) NSString *username; // ivar: username
@property (readonly) WFWhitelistSiteBuffer *webWhitelist; // ivar: webWhitelist
@property BOOL whitelistEnabled; // ivar: whitelistEnabled


+(BOOL)_isURLMetasite:(id)arg0 ;
+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg0 ;
+(id)_cachedWhitelistForPath:(id)arg0 username:(id)arg1 ;
+(id)_metasiteDomainNamesArray;
+(id)_modificationDateForFileAtPath:(id)arg0 ;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
+(id)defaultWhitelistForUser:(id)arg0 ;
+(id)metasitesExceptionPath;
+(id)metasitesPath;
+(id)preferencesPathForUsername:(id)arg0 ;
+(id)whitelistForUser:(id)arg0 ;
+(id)whitelistWithPreferences:(id)arg0 ;
-(BOOL)isURL:(id)arg0 onList:(id)arg1 ;
-(BOOL)isURLAllowed:(id)arg0 ;
-(BOOL)isURLAllowed:(id)arg0 reason:(*id)arg1 shouldFilter:(*BOOL)arg2 foundOnList:(*BOOL)arg3 ;
-(id)description;
-(id)init;
-(id)initWithPreferences:(id)arg0 ;
-(id)pronounceOnPageURLString:(id)arg0 shouldFilter:(*BOOL)arg1 ;
-(void)dealloc;


@end


#endif