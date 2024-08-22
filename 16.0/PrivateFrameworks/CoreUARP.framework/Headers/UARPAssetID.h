// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPASSETID_H
#define UARPASSETID_H

@class NSString, NSNumber, NSMutableArray, NSDate, NSArray, NSURL;
@protocol NSCopying, NSSecureCoding, OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPAssetTag.h"

@interface UARPAssetID : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_remoteBuildManifestPlistPath;
    NSNumber *_deploymentDay;
    NSNumber *_deploymentPercent;
    BOOL _signatureValidationNeeded;
    NSInteger _validationStatus;
    NSString *_firmwareHash;
    NSMutableArray *_activeAccessoriesForStaging;
    NSObject<OS_os_log> *_log;
    BOOL _reportProgressToDelegates;
}


@property (readonly) NSDate *assetReleaseDate; // ivar: _assetReleaseDate
@property (readonly, copy) NSString *assetVersion; // ivar: _assetVersion
@property (readonly) BOOL deploymentAllowed; // ivar: _deploymentAllowed
@property (readonly) NSArray *deploymentRules; // ivar: _deploymentRules
@property (readonly) NSInteger downloadStatus; // ivar: _downloadStatus
@property (readonly) NSNumber *firmwareFileSize; // ivar: _firmwareFileSize
@property (readonly, copy) NSString *firmwareHash;
@property (readonly) BOOL isDynamicAsset;
@property (readonly) BOOL isUrgentUpdate; // ivar: _isUrgentUpdate
@property (readonly, copy) NSString *localPath;
@property (readonly, copy) NSURL *localURL; // ivar: _localURL
@property (readonly) NSString *releaseDate;
@property (readonly) NSInteger releaseNotesAvailabilityStatus; // ivar: _releaseNotesAvailabilityStatus
@property (readonly) NSInteger releaseNotesDownloadStatus; // ivar: _releaseNotesDownloadStatus
@property (readonly) NSNumber *releaseNotesFileSize; // ivar: _releaseNotesFileSize
@property (readonly) NSString *releaseNotesLocalPath;
@property (readonly) NSURL *releaseNotesLocalURL; // ivar: _releaseNotesLocalURL
@property (readonly) NSString *releaseNotesRemotePath; // ivar: _releaseNotesRemotePath
@property (readonly) NSURL *releaseNotesRemoteURL; // ivar: _releaseNotesRemoteURL
@property (copy) NSString *remotePath; // ivar: _remotePath
@property (copy) NSURL *remoteURL; // ivar: _remoteURL
@property (readonly, copy) UARPAssetTag *tag; // ivar: _tag
@property (readonly) NSURL *tatsuServerURL; // ivar: _tatsuServerURL
@property (readonly) NSInteger type; // ivar: _type
@property (readonly) NSInteger updateAvailabilityStatus; // ivar: _updateAvailabilityStatus


+(BOOL)supportsSecureCoding;
-(BOOL)analyticsIsEqual:(id)arg0 ;
-(BOOL)isDeploymentAllowed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStagingInProgressOnAccessoryID:(id)arg0 ;
-(BOOL)reportProgressToDelegates;
-(BOOL)signatureValidationNeeded;
-(NSInteger)validationStatus;
-(id)_createUARPDeploymentRules:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deploymentDay;
-(id)deploymentPercent;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationType:(NSInteger)arg0 remotePath:(id)arg1 ;
-(id)initWithLocationType:(NSInteger)arg0 remotePath:(id)arg1 releaseNotesRemotePath:(id)arg2 ;
-(id)initWithLocationType:(NSInteger)arg0 remoteURL:(id)arg1 ;
-(id)initWithLocationType:(NSInteger)arg0 remoteURL:(id)arg1 releaseNotesRemoteURL:(id)arg2 ;
-(id)rawDescription;
-(id)remoteBuildManifestPlistPath;
-(void)dumpWithTabDepth:(NSUInteger)arg0 dumpString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)processUARPDeploymentRules:(id)arg0 ;
-(void)setDeploymentDay:(id)arg0 ;
-(void)setDeploymentPercent:(id)arg0 ;
-(void)setRemoteBuildManifestPlistPath:(id)arg0 ;
-(void)setReportProgressToDelegates:(BOOL)arg0 ;
-(void)setSignatureValidationNeeded:(BOOL)arg0 ;
-(void)setValidationStatus:(NSInteger)arg0 ;
-(void)stagingCompleteOnAccessoryID:(id)arg0 ;
-(void)stagingStartedOnAccessoryID:(id)arg0 ;


@end


#endif