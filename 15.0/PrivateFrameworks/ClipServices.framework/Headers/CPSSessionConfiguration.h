// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSSESSIONCONFIGURATION_H
#define CPSSESSIONCONFIGURATION_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPSSessionConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *analyticsLaunchReason;
@property (readonly, nonatomic) NSString *analyticsReferrerBundleID;
@property (readonly, nonatomic) BOOL analyticsShouldIncludeReferrerURL;
@property (readonly, nonatomic) BOOL canPrefetchEncryptionKey;
@property (copy, nonatomic) NSString *fallbackClipBundleID; // ivar: _fallbackClipBundleID
@property (nonatomic) BOOL isForSwitcherOverlay; // ivar: _isForSwitcherOverlay
@property (copy, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (readonly, nonatomic) BOOL mayLaunchWithoutInvocationUI;
@property (nonatomic) BOOL originIsControlCenter; // ivar: _originIsControlCenter
@property (copy, nonatomic) NSString *referrerBundleID; // ivar: _referrerBundleID
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSString *sourceBundleID; // ivar: _sourceBundleID
@property (nonatomic) BOOL useLocalContent; // ivar: _useLocalContent
@property (nonatomic) BOOL usedByPPT; // ivar: _usedByPPT


+(BOOL)supportsSecureCoding;
+(id)_defaultSourceBundleIDToReasonMap;
+(id)localConfiguration;
+(id)pptConfiguration;
+(id)pptLocalConfiguration;
+(id)reasonForSourceBundleID:(id)arg0 ;
+(id)standardConfiguration;
+(id)standardConfigurationWithFallbackClipBundleID:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif