// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGAMEDESCRIPTOR_H
#define GKGAMEDESCRIPTOR_H

@class NSNumber, NSString;


#import "GKInternalRepresentation.h"

@interface GKGameDescriptor : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (retain, nonatomic) NSNumber *externalVersion; // ivar: _externalVersion
@property (nonatomic) NSInteger platform; // ivar: _platform
@property (copy, nonatomic) NSString *shortBundleVersion; // ivar: _shortBundleVersion


+(BOOL)supportsSecureCoding;
+(NSInteger)currentPlatform;
+(NSInteger)gamePlatformFromServerGameDescriptorString:(id)arg0 ;
+(NSInteger)gamePlatformFromServerPushString:(id)arg0 ;
+(id)currentPlatformServerString;
+(id)gameDescriptorWithBundleID:(id)arg0 bundleVersion:(id)arg1 shortBundleVersion:(id)arg2 adamID:(id)arg3 ;
+(id)platformStringForServerRequest:(NSInteger)arg0 ;
+(id)secureCodedPropertyKeys;
-(id)description;
-(id)dictionaryForRequest;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPushDictionary:(id)arg0 ;


@end


#endif