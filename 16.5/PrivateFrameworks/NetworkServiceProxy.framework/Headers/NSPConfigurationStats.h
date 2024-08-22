// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPCONFIGURATIONSTATS_H
#define NSPCONFIGURATIONSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPConfigurationStats : NSPProxyAnalytics

@property (nonatomic) BOOL appTrackersEnabled; // ivar: _appTrackersEnabled
@property (nonatomic) BOOL appleCertificatesEnabled; // ivar: _appleCertificatesEnabled
@property (nonatomic) BOOL brandedCallingEnabled; // ivar: _brandedCallingEnabled
@property (nonatomic) BOOL configurationEnabled; // ivar: _configurationEnabled
@property (nonatomic) NSUInteger configurationVersion; // ivar: _configurationVersion
@property (nonatomic) BOOL dnsEnabled; // ivar: _dnsEnabled
@property (nonatomic) BOOL exposureNotificationsEnabled; // ivar: _exposureNotificationsEnabled
@property (nonatomic) BOOL knownTrackersEnabled; // ivar: _knownTrackersEnabled
@property (nonatomic) BOOL mailTrackersEnabled; // ivar: _mailTrackersEnabled
@property (nonatomic) BOOL metricsUploadEnabled; // ivar: _metricsUploadEnabled
@property (nonatomic) BOOL networkToolsEnabled; // ivar: _networkToolsEnabled
@property (nonatomic) BOOL newsEmbeddedContentEnabled; // ivar: _newsEmbeddedContentEnabled
@property (nonatomic) BOOL newsURLResolutionEnabled; // ivar: _newsURLResolutionEnabled
@property (nonatomic) BOOL safariAllEnabled; // ivar: _safariAllEnabled
@property (nonatomic) BOOL safariDNSEnabled; // ivar: _safariDNSEnabled
@property (nonatomic) BOOL safariHTTPEnabled; // ivar: _safariHTTPEnabled
@property (nonatomic) BOOL safariTrackersEnabled; // ivar: _safariTrackersEnabled
@property (nonatomic) BOOL safariUnencryptedEnabled; // ivar: _safariUnencryptedEnabled
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType
@property (nonatomic) BOOL tokenFetchEnabled; // ivar: _tokenFetchEnabled
@property (nonatomic) BOOL unencryptedEnabled; // ivar: _unencryptedEnabled


-(id)analyticsDict;
-(id)eventName;


@end


#endif