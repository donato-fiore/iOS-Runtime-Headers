// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKREMOTEASSETMANIFESTITEM_H
#define PKREMOTEASSETMANIFESTITEM_H

@class NSURL, NSString, NSDictionary, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSURL *encryptedContentsLocalURL; // ivar: _encryptedContentsLocalURL
@property (copy, nonatomic) NSString *encryptionScheme; // ivar: _encryptionScheme
@property (nonatomic) NSInteger encryptionSource; // ivar: _encryptionSource
@property (copy, nonatomic) NSString *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (readonly, nonatomic) NSUInteger itemType;
@property (copy, nonatomic) NSURL *localURL; // ivar: _localURL
@property (copy, nonatomic) NSDictionary *manifest; // ivar: _manifest
@property (copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (copy, nonatomic) NSString *publicKeyHash; // ivar: _publicKeyHash
@property (readonly, weak, nonatomic) NSString *relativeEncryptedContentsLocalPath;
@property (readonly, weak, nonatomic) NSString *relativeLocalPath;
@property (copy, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (nonatomic, getter=isRequired) BOOL required; // ivar: _required
@property (copy, nonatomic) NSString *seid; // ivar: _seid
@property (copy, nonatomic) NSString *sha1Hex; // ivar: _sha1Hex
@property (copy, nonatomic) NSNumber *size; // ivar: _size


+(BOOL)supportsSecureCoding;
+(id)itemWithLocalURL:(id)arg0 passURL:(id)arg1 dictionary:(id)arg2 error:(*id)arg3 ;
+(id)sharedURLSession;
-(BOOL)isZipFile;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalURL:(id)arg0 passURL:(id)arg1 dictionary:(id)arg2 error:(*id)arg3 ;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg0 completion:(id)arg1 ;
-(void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg0 tryCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)downloadAssetWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif