// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSMUTABLEWIDGETEXTENSIONINFO_H
#define CHSMUTABLEWIDGETEXTENSIONINFO_H

@class NSArray, NSString, NSURL, NSDictionary, NSDate;


#import "CHSWidgetExtensionInfo.h"

@interface CHSMutableWidgetExtensionInfo : CHSWidgetExtensionInfo

@property (nonatomic) BOOL allowsMixedLocalizations;
@property (copy, nonatomic) NSArray *availableLocalizations;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSArray *configurations;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSURL *containerURL;
@property (copy, nonatomic) NSString *dataProtectionLevel;
@property (copy, nonatomic) NSArray *descriptors;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (nonatomic) BOOL isDevelopmentExtension;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSArray *nominatedContainerBundleIdentifiers;
@property (copy, nonatomic) NSArray *placeholderURLs;
@property (copy, nonatomic) NSArray *snapshotURLs;
@property (copy, nonatomic) NSURL *systemDataContainerURL;
@property (copy, nonatomic) NSArray *timelineURLs;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL wantsLocation;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif