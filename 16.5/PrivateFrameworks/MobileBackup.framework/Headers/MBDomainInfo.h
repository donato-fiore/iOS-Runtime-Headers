// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBDOMAININFO_H
#define MBDOMAININFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBDomainInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isAppDomain) BOOL appDomain;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;
@property (retain, nonatomic) NSString *domainName; // ivar: _domainName
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSUInteger localSize; // ivar: _localSize
@property (nonatomic) NSUInteger remoteSize; // ivar: _remoteSize
@property (nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (readonly, nonatomic) NSUInteger size;
@property (nonatomic, getter=isSystemApp) BOOL systemApp; // ivar: _systemApp


+(BOOL)supportsSecureCoding;
+(id)domainInfoWithName:(id)arg0 systemApp:(BOOL)arg1 remoteSize:(NSUInteger)arg2 localSize:(NSUInteger)arg3 enabled:(BOOL)arg4 restricted:(BOOL)arg5 ;
+(id)domainNameForBundleID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomainName:(id)arg0 systemApp:(BOOL)arg1 remoteSize:(NSUInteger)arg2 localSize:(NSUInteger)arg3 enabled:(BOOL)arg4 restricted:(BOOL)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif