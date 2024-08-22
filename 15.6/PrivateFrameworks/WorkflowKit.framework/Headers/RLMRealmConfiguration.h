// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMREALMCONFIGURATION_H
#define RLMREALMCONFIGURATION_H

@class NSData, NSURL, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RLMSchema.h"

@interface RLMRealmConfiguration : NSObject <NSCopying>

 {
    Config _config;
}


@property (nonatomic) BOOL cache; // ivar: _cache
@property (copy, nonatomic) RLMSchema *customSchema; // ivar: _customSchema
@property (nonatomic) BOOL deleteRealmIfMigrationNeeded;
@property (nonatomic) BOOL disableFormatUpgrade;
@property (nonatomic) BOOL dynamic; // ivar: _dynamic
@property (copy, nonatomic) NSData *encryptionKey;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *inMemoryIdentifier;
@property (copy, nonatomic) id *migrationBlock; // ivar: _migrationBlock
@property (copy, nonatomic) NSArray *objectClasses;
@property (copy, nonatomic) NSString *pathOnDisk; // ivar: _pathOnDisk
@property (nonatomic) BOOL readOnly;
@property (nonatomic) NSUInteger schemaVersion;
@property (copy, nonatomic) id *shouldCompactOnLaunch; // ivar: _shouldCompactOnLaunch


+(id)defaultConfiguration;
+(id)rawDefaultConfiguration;
+(id)wf_configurationWithRealmURL:(id)arg0 ;
+(void)resetRealmConfigurationState;
+(void)setDefaultConfiguration:(id)arg0 ;
-(*void)config;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)syncConfiguration;
-(unsigned char)schemaMode;
-(void)setSchemaMode:(unsigned char)arg0 ;


@end


#endif