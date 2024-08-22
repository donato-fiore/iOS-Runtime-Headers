// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPAPPMETADATA_H
#define FPAPPMETADATA_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FPAppMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSURL *documentsURL; // ivar: _documentsURL
@property (readonly, nonatomic) BOOL isManaged; // ivar: _isManaged
@property (retain, nonatomic) NSString *providerDomainID; // ivar: _providerDomainID
@property (readonly, nonatomic) BOOL useDefaultProviderDomainID; // ivar: _useDefaultProviderDomainID


+(BOOL)_isContainerIDPermitted:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_entitledCloudDocsContainerIDForAppProxy:(id)arg0 ;
+(id)_entitledUbiquityContainerIDForAppProxy:(id)arg0 ;
+(id)_localizedCustomDisplayNameForAppProxy:(id)arg0 ;
+(id)findBundleIDForCurrentPlatformInSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppProxy:(id)arg0 providerDomainID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif