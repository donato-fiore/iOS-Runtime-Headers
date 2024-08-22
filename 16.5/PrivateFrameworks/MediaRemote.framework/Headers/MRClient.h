// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCLIENT_H
#define MRCLIENT_H

@class NSURL, NSString, NSArray, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_MRNowPlayingClientProtobuf.h"
#import "MRClient.h"
#import "MRColorComponents.h"

@interface MRClient : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *appIcon; // ivar: _appIcon
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSArray *bundleIdentifierHierarchy;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *extendedBundleIdentifierHierarchy; // ivar: _extendedBundleIdentifierHierarchy
@property (readonly, nonatomic) BOOL hasAuxiliaryProperties;
@property (readonly, nonatomic) BOOL hasPlaceholder;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (copy, nonatomic) NSString *parentApplicationBundleIdentifier; // ivar: _parentApplicationBundleIdentifier
@property (nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (nonatomic) unsigned int processUserIdentifier; // ivar: _processUserIdentifier
@property (readonly, nonatomic) _MRNowPlayingClientProtobuf *protobuf;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (readonly, nonatomic) MRClient *skeleton;
@property (readonly, nonatomic, getter=isSystemBooksApplication) BOOL systemBooksApplication;
@property (readonly, nonatomic, getter=isSystemMediaApplication) BOOL systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication;
@property (copy, nonatomic) MRColorComponents *tintColor; // ivar: _tintColor
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) NSInteger visibility; // ivar: _visibility


+(BOOL)supportsSecureCoding;
+(id)anyClient;
+(id)localClient;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithProcessIdentifier:(int)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)resolvePlaceholdersForDeviceInfo:(id)arg0 ;


@end


#endif