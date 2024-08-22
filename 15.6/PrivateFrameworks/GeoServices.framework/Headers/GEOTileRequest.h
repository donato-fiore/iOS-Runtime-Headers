// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILEREQUEST_H
#define GEOTILEREQUEST_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "GEOTileKeyMap.h"
#import "GEOApplicationAuditToken.h"
#import "GEOTileKeyList.h"
#import "GEOResourceManifestConfiguration.h"

@interface GEOTileRequest : NSObject

@property (readonly, nonatomic) GEOTileKeyMap *additionalInfos; // ivar: _additionalInfos
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSString *backgroundSessionIdentifier; // ivar: _backgroundSessionIdentifier
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) GEOTileKeyMap *cachedData; // ivar: _cachedData
@property (readonly, nonatomic) GEOTileKeyMap *cachedEtags; // ivar: _cachedEtags
@property (readonly, nonatomic) NSUInteger constraints; // ivar: _constraints
@property (readonly, nonatomic) GEOTileKeyMap *createTimes; // ivar: _createTimes
@property (readonly, nonatomic) GEOTileKeyList *keyList; // ivar: _keyList
@property (readonly, nonatomic) unsigned char loadReason; // ivar: _loadReason
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // ivar: _manifestConfiguration
@property (readonly, nonatomic) GEOTileKeyMap *priorities; // ivar: _priorities
@property (readonly, nonatomic) BOOL shouldParticipateInBalancer; // ivar: _shouldParticipateInBalancer
@property (readonly, nonatomic) GEOTileKeyMap *signpostIDs; // ivar: _signpostIDs


-(id)description;
-(id)init;
-(id)initWithKeyList:(id)arg0 manifestConfiguration:(id)arg1 locale:(id)arg2 ;
-(id)initWithKeyList:(id)arg0 manifestConfiguration:(id)arg1 locale:(id)arg2 cachedEtags:(id)arg3 cachedData:(id)arg4 priorities:(id)arg5 signpostIDs:(id)arg6 createTimes:(id)arg7 additionalInfos:(id)arg8 bundleIdentifier:(id)arg9 bundleVersion:(id)arg10 auditToken:(id)arg11 constraints:(NSUInteger)arg12 backgroundSessionIdentifier:(id)arg13 shouldParticipateInBalancer:(BOOL)arg14 reason:(unsigned char)arg15 ;


@end


#endif