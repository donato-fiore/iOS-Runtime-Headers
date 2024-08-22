// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIBUNDLEMETADATA_H
#define MIBUNDLEMETADATA_H

@class NSString, NSDate, NSSet, NSError;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MIBundleMetadata : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *alternateIconName; // ivar: _alternateIconName
@property (nonatomic) NSUInteger autoInstallOverride; // ivar: _autoInstallOverride
@property (copy, nonatomic) NSString *installBuildVersion; // ivar: _installBuildVersion
@property (copy, nonatomic) NSDate *installDate; // ivar: _installDate
@property (nonatomic) NSUInteger installType; // ivar: _installType
@property (copy, nonatomic) NSSet *linkedChildBundleIDs; // ivar: _linkedChildBundleIDs
@property (copy, nonatomic) NSString *linkedParentBundleID; // ivar: _linkedParentBundleID
@property (nonatomic) NSUInteger placeholderFailureReason; // ivar: _placeholderFailureReason
@property (retain, nonatomic) NSError *placeholderFailureUnderlyingError; // ivar: _placeholderFailureUnderlyingError
@property (nonatomic) NSUInteger placeholderFailureUnderlyingErrorSource; // ivar: _placeholderFailureUnderlyingErrorSource
@property (copy, nonatomic) NSString *watchKitAppExecutableHash; // ivar: _watchKitAppExecutableHash


+(BOOL)supportsSecureCoding;
+(id)metadataFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif