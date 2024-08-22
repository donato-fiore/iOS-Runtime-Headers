// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSWIDGETEXTENSIONINFO_H
#define CHSWIDGETEXTENSIONINFO_H

@class NSArray, NSString, NSURL, NSDictionary, NSDate;
@protocol BSXPCSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CHSWidgetExtensionInfo : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) BOOL allowsMixedLocalizations; // ivar: _allowsMixedLocalizations
@property (readonly, copy, nonatomic) NSArray *availableLocalizations; // ivar: _availableLocalizations
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, copy, nonatomic) NSArray *configurations; // ivar: _configurations
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, copy, nonatomic) NSString *dataProtectionLevel; // ivar: _dataProtectionLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly, copy, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDevelopmentExtension; // ivar: _isDevelopmentExtension
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, copy, nonatomic) NSArray *nominatedContainerBundleIdentifiers; // ivar: _nominatedContainerBundleIdentifiers
@property (readonly, copy, nonatomic) NSArray *placeholderURLs; // ivar: _placeholderURLs
@property (readonly, copy, nonatomic) NSArray *snapshotURLs; // ivar: _snapshotURLs
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *systemDataContainerURL; // ivar: _systemDataContainerURL
@property (readonly, copy, nonatomic) NSArray *timelineURLs; // ivar: _timelineURLs
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version
@property (readonly, nonatomic) BOOL wantsLocation; // ivar: _wantsLocation


+(BOOL)supportsBSXPCSecureCoding;
-(id)_init;
-(id)_initWithInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif