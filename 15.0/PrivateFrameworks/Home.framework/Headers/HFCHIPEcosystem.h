// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHIPECOSYSTEM_H
#define HFCHIPECOSYSTEM_H

@class NSString, LSApplicationRecord;

#import <Foundation/Foundation.h>

#import "HFCHIPExtension.h"

@interface HFCHIPEcosystem : NSObject

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) LSApplicationRecord *applicationRecord; // ivar: _applicationRecord
@property (retain, nonatomic) HFCHIPExtension *chipExtension; // ivar: _chipExtension
@property (retain, nonatomic) NSString *chipExtensionBundleIdentifier; // ivar: _chipExtensionBundleIdentifier
@property (readonly, nonatomic) NSString *developerName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isAppleHome;
@property (readonly, nonatomic) BOOL isTestEcosystemApp;
@property (readonly, nonatomic) NSString *teamIdentifier;


+(id)allPartnerEcosystemsOnDevice;
+(id)appleEcosystem;
+(id)ecosystemForBundleID:(id)arg0 ;
-(id)initWithApplicationRecord:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;


@end


#endif