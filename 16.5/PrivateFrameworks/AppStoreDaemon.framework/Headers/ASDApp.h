// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAPP_H
#define ASDAPP_H

@class NSString, NSProgress, NSError, NSUUID, NSNumber, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASDUnfairLock.h"
#import "ASDProgress.h"

@interface ASDApp : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _hasFetchedUpdateMetadata;
    ASDUnfairLock *_propertyLock;
    unsigned char _openableStatus;
}


@property (readonly, getter=isAppClip) BOOL appClip;
@property (readonly, getter=isArcadeOpenable) BOOL arcadeOpenable;
@property (retain) NSString *artistName; // ivar: _artistName
@property (readonly, getter=isBetaApp) BOOL betaApp;
@property (readonly) NSString *bundleID; // ivar: _bundleID
@property (retain) NSString *bundlePath; // ivar: _bundlePath
@property (retain) NSString *bundleShortVersion; // ivar: _bundleShortVersion
@property (retain) NSString *bundleVersion; // ivar: _bundleVersion
@property (retain) NSProgress *downloadProgress; // ivar: _downloadProgress
@property NSInteger downloaderDSID; // ivar: _downloaderDSID
@property NSInteger essentialBackgroundAssetDownloadEstimate; // ivar: _essentialBackgroundAssetDownloadEstimate
@property (retain) NSString *executablePath; // ivar: _executablePath
@property NSInteger extensions; // ivar: _extensions
@property NSInteger familyID; // ivar: _familyID
@property (readonly, getter=isFamilyShared) BOOL familyShared;
@property BOOL hasPostProcessing;
@property (retain) NSError *installError; // ivar: _installError
@property (readonly) NSUUID *installID; // ivar: _installID
@property (retain) NSProgress *installProgress; // ivar: _installProgress
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, getter=isLaunchProhibited) BOOL launchProhibited;
@property (retain) NSString *localizedName; // ivar: _localizedName
@property (readonly, getter=hasMessagesExtension) BOOL messasgesExtension;
@property (readonly, getter=isOcelot) BOOL ocelot;
@property (readonly, getter=isOpenable) BOOL openable;
@property (readonly, getter=isPlaceholder) BOOL placeholder;
@property (retain) NSProgress *postProcessProgress; // ivar: _postProcessProgress
@property (retain) NSProgress *progress; // ivar: _progress
@property NSInteger progressPhase; // ivar: _progressPhase
@property NSInteger purchaserDSID; // ivar: _purchaserDSID
@property (retain) ASDProgress *remoteProgress; // ivar: _remoteProgress
@property NSInteger softwarePlatform; // ivar: _softwarePlatform
@property NSInteger status; // ivar: _status
@property (readonly, getter=isStoreApp) BOOL storeApp;
@property (retain) NSString *storeCohort; // ivar: _storeCohort
@property NSInteger storeExternalVersionID; // ivar: _storeExternalVersionID
@property (retain) NSNumber *storeFront; // ivar: _storeFront
@property NSInteger storeItemID; // ivar: _storeItemID
@property (readonly, getter=isSystemApp) BOOL systemApp;
@property (readonly, getter=isUpdateAvailable) BOOL updateAvailable;
@property (retain) NSString *updateBuyParams; // ivar: _updateBuyParams
@property (retain) NSDictionary *updateMetadata; // ivar: _updateMetadata
@property NSInteger watchApplicationMode; // ivar: _watchApplicationMode
@property (readonly, getter=isWrapped) BOOL wrapped;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToApp:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadUpdateMetadataIfNecessary;


@end


#endif