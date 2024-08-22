// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLIENTINFO_H
#define ICCLIENTINFO_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bagProfile; // ivar: _bagProfile
@property (readonly, copy, nonatomic) NSString *bagProfileVersion; // ivar: _bagProfileVersion
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // ivar: _requestingBundleIdentifier
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion; // ivar: _requestingBundleVersion


+(BOOL)supportsSecureCoding;
+(id)_clientInfoForCloudDaemonOriginatedMusicKitRequestWithRequestingBundleIdentifier:(id)arg0 ;
+(id)clientInfoForMusicKitRequestWithClientIdentifier:(id)arg0 clientVersion:(id)arg1 ;
+(id)clientInfoForMusicKitRequestWithClientIdentifier:(id)arg0 clientVersion:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)defaultInfo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_clientInfoCopyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystemApplicationType:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setDefaultBagProfileForClientIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif