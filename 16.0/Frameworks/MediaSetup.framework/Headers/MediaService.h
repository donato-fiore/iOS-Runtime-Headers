// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIASERVICE_H
#define MEDIASERVICE_H

@class NSString, NSArray, NSData, NSURL, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CMSAuthenticationConfiguration.h"
#import "CMSAuthenticationCredential.h"

@interface MediaService : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (retain, nonatomic) NSArray *alternateBundleIdentifiers; // ivar: _alternateBundleIdentifiers
@property (retain, nonatomic) CMSAuthenticationConfiguration *authConfiguration; // ivar: _authConfiguration
@property (retain, nonatomic) CMSAuthenticationCredential *authCredential; // ivar: _authCredential
@property (nonatomic) BOOL authFatalError; // ivar: _authFatalError
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSData *configAsset; // ivar: _configAsset
@property (copy, nonatomic) NSString *configETag; // ivar: _configETag
@property (copy, nonatomic) NSString *configPublicKey; // ivar: _configPublicKey
@property (retain, nonatomic) NSURL *configURL; // ivar: _configURL
@property (retain, nonatomic) NSURL *iconImageURL; // ivar: _iconImageURL
@property (retain, nonatomic) NSURL *remoteIconURL; // ivar: _remoteIconURL
@property (copy, nonatomic) NSUUID *serviceID; // ivar: _serviceID
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic, getter=isServiceRemovable) BOOL serviceRemovable; // ivar: _serviceRemovable
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (nonatomic) BOOL updateListeningHistoryEnabled; // ivar: _updateListeningHistoryEnabled


+(BOOL)supportsSecureCoding;
-(id)_failWithError:(NSUInteger)arg0 errorString:(id)arg1 ;
-(id)basicPropertiesDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaServiceIdentifier:(id)arg0 ;
-(id)initWithServiceAccount:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif