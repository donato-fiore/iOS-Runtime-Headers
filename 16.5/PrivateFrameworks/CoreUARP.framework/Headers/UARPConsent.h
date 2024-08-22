// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPCONSENT_H
#define UARPCONSENT_H

@class NSString, NSNumber, NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPConsent : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSString *accessoryName; // ivar: _accessoryName
@property (copy) NSString *assetBuildVersion; // ivar: _assetBuildVersion
@property (readonly) NSString *assetVersion; // ivar: _assetVersion
@property (copy) NSString *consentDescription; // ivar: _consentDescription
@property NSNumber *downloadSize; // ivar: _downloadSize
@property (retain) NSNumber *installerOverallProgress; // ivar: _installerOverallProgress
@property (copy) NSString *installerProgressDescription; // ivar: _installerProgressDescription
@property (retain) NSError *installerProgressError; // ivar: _installerProgressError
@property (copy) NSString *installerProgressPhase; // ivar: _installerProgressPhase
@property BOOL isDownloadable; // ivar: _isDownloadable
@property BOOL isRecommended; // ivar: _isRecommended
@property BOOL needsPostLogoutMode; // ivar: _needsPostLogoutMode
@property (copy) NSString *warning; // ivar: _warning


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccessoryName:(id)arg0 assetVersion:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dumpWithTabDepth:(NSUInteger)arg0 dumpString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif