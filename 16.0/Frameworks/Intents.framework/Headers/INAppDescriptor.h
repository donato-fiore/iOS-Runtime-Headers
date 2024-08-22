// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INAPPDESCRIPTOR_H
#define INAPPDESCRIPTOR_H

@class LSApplicationRecord, NSString, NSURL, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INAppDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) LSApplicationRecord *applicationRecord;
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSSet *counterpartIdentifiers; // ivar: _counterpartIdentifiers
@property (readonly, nonatomic) NSSet *documentTypes; // ivar: _documentTypes
@property (readonly, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) BOOL requiresUserConfirmation; // ivar: _requiresUserConfirmation
@property (readonly, nonatomic) NSSet *supportedIntents; // ivar: _supportedIntents
@property (readonly, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptorWithExtensionBundleIdentifier:(id)arg0 ;
-(id)descriptorWithRecord:(id)arg0 ;
-(id)initWithApplicationRecord:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedName:(id)arg0 bundleIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 counterpartIdentifiers:(id)arg3 teamIdentifier:(id)arg4 supportedIntents:(id)arg5 bundleURL:(id)arg6 documentTypes:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif