// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NARAPPLICATION_H
#define NARAPPLICATION_H

@class NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NARApplicationState.h"
#import "NARGlance.h"

@interface NARApplication : NSObject <NSSecureCoding>



@property (retain, nonatomic) NARApplicationState *appState; // ivar: _appState
@property (retain, nonatomic) NSArray *appTags; // ivar: _appTags
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NARGlance *glance;
@property (retain, nonatomic) NSDictionary *iTunesPlistStrings; // ivar: _iTunesPlistStrings
@property (retain, nonatomic) NSDictionary *infoPlist; // ivar: _infoPlist
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *launchServicesBundleType; // ivar: _launchServicesBundleType
@property (readonly, nonatomic) NSArray *localizations;
@property (readonly, nonatomic) NSDictionary *localizedBundleNames;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSDictionary *localizedDisplayNames;
@property (retain, nonatomic) NSDictionary *localizedStrings; // ivar: _localizedStrings
@property (readonly, copy, nonatomic) NSString *parentApplicationBundleIdentifier; // ivar: _parentApplicationBundleIdentifier
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) NSArray *supportedSchemes;
@property (nonatomic) BOOL supportsForegroundApplication; // ivar: _supportsForegroundApplication
@property (readonly, nonatomic) NSString *vendorName;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForInfoDictionaryKey:(id)arg0 ;
-(id)objectForInfoDictionaryKey:(id)arg0 localization:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif