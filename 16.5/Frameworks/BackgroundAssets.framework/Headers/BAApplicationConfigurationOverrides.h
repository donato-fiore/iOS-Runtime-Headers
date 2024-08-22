// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPLICATIONCONFIGURATIONOVERRIDES_H
#define BAAPPLICATIONCONFIGURATIONOVERRIDES_H

@class NSArray, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface BAApplicationConfigurationOverrides : NSObject

@property (retain, nonatomic) NSArray *domainAllowlist; // ivar: _domainAllowlist
@property (retain, nonatomic) NSNumber *downloadAllowance; // ivar: _downloadAllowance
@property (retain, nonatomic) NSNumber *essentialDownloadAllowance; // ivar: _essentialDownloadAllowance
@property (retain, nonatomic) NSNumber *essentialMaxInstallSize; // ivar: _essentialMaxInstallSize
@property (retain, nonatomic) NSString *manifestURL; // ivar: _manifestURL
@property (retain, nonatomic) NSNumber *maxInstallSize; // ivar: _maxInstallSize
@property (retain, nonatomic) NSNumber *optionalDownloadAllowance;
@property (retain, nonatomic) NSNumber *optionalMaxInstallSize;


+(BOOL)clearAllOverrides;
+(BOOL)clearOverridesForAppBundleIdentifier:(id)arg0 ;
+(BOOL)setOverrides:(id)arg0 forAppBundleIdentifier:(id)arg1 ;
+(id)overridesForAppBundleIdentifier:(id)arg0 ;


@end


#endif