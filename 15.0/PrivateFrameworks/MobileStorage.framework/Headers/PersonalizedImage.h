// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PERSONALIZEDIMAGE_H
#define PERSONALIZEDIMAGE_H

@class NSData, NSNumber, NSURL, NSString, NSDictionary, OS_remote_device;

#import <Foundation/Foundation.h>


@interface PersonalizedImage : NSObject

@property (retain, nonatomic) NSData *apNonce; // ivar: _apNonce
@property (retain, nonatomic) NSNumber *boardID; // ivar: _boardID
@property (retain, nonatomic) NSURL *bundlePathURL; // ivar: _bundlePathURL
@property (retain, nonatomic) NSNumber *certificateProductionStatus; // ivar: _certificateProductionStatus
@property (retain, nonatomic) NSNumber *certificateSecurityMode; // ivar: _certificateSecurityMode
@property (retain, nonatomic) NSNumber *chipID; // ivar: _chipID
@property (copy, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (nonatomic) unsigned int digestLength; // ivar: _digestLength
@property (retain, nonatomic) NSNumber *ecid; // ivar: _ecid
@property (retain, nonatomic) NSNumber *effectiveProductionStatus; // ivar: _effectiveProductionStatus
@property (retain, nonatomic) NSNumber *effectiveSecurityMode; // ivar: _effectiveSecurityMode
@property (copy, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (retain, nonatomic) NSNumber *image4Supported; // ivar: _image4Supported
@property (retain, nonatomic) NSURL *imagePathURL; // ivar: _imagePathURL
@property (copy, nonatomic) NSString *imageType; // ivar: _imageType
@property (retain, nonatomic) NSString *imageVariant; // ivar: _imageVariant
@property (retain, nonatomic) NSDictionary *mountedVolumeEntry; // ivar: _mountedVolumeEntry
@property (retain, nonatomic) OS_remote_device *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) NSNumber *securityDomain; // ivar: _securityDomain
@property (retain, nonatomic) NSData *sepNonce; // ivar: _sepNonce
@property (retain, nonatomic) NSURL *signingServerURL; // ivar: _signingServerURL
@property (nonatomic) BOOL skipLoadingLaunchDaemons; // ivar: _skipLoadingLaunchDaemons
@property (retain, nonatomic) NSURL *trustCacheURL; // ivar: _trustCacheURL
@property (nonatomic) BOOL useCredentials; // ivar: _useCredentials
@property (retain, nonatomic) NSURL *userProvidedBundleMountPathURL; // ivar: _userProvidedBundleMountPathURL
@property (retain, nonatomic) NSURL *userProvidedImagePathURL; // ivar: _userProvidedImagePathURL


-(BOOL)initializeDeviceAttributes:(*id)arg0 ;
-(BOOL)initializeImageProperties:(*id)arg0 ;
-(BOOL)mountImage:(*id)arg0 ;
-(BOOL)mountImage:(id)arg0 serverTicket:(id)arg1 imageDigest:(id)arg2 trustCacheURL:(id)arg3 error:(*id)arg4 ;
-(id)digestFile:(id)arg0 digestLength:(unsigned int)arg1 error:(*id)arg2 ;
-(id)digestFileSha1:(id)arg0 error:(*id)arg1 ;
-(id)digestFileSha384:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundleURL:(id)arg0 imageVariant:(id)arg1 remoteDevice:(id)arg2 options:(id)arg3 ;
-(void)dealloc;


@end


#endif