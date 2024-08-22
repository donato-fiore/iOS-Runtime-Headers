// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPHOENIXCONFIGURATION_H
#define AXPHOENIXCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXPhoenixClassifierConfiguration.h"
#import "AXPhoenixMitigatorConfiguration.h"

@interface AXPhoenixConfiguration : NSObject

@property (nonatomic) NSUInteger assetVersion; // ivar: _assetVersion
@property (retain, nonatomic) AXPhoenixClassifierConfiguration *classifierConfiguration; // ivar: _classifierConfiguration
@property (retain, nonatomic) NSString *classifierConfigurationKey; // ivar: _classifierConfigurationKey
@property (retain, nonatomic) NSString *majorVersion; // ivar: _majorVersion
@property (retain, nonatomic) NSString *majorVersionKey; // ivar: _majorVersionKey
@property (retain, nonatomic) NSString *minorVersion; // ivar: _minorVersion
@property (retain, nonatomic) NSString *minorVersionKey; // ivar: _minorVersionKey
@property (retain, nonatomic) AXPhoenixMitigatorConfiguration *mitigatorConfiguration; // ivar: _mitigatorConfiguration
@property (retain, nonatomic) NSString *mitigatorConfigurationKey; // ivar: _mitigatorConfigurationKey


-(id)_updateConfigWithContentsOfDictionary:(id)arg0 ;
-(id)init;
-(id)initWithContentsOfFileAtPath:(id)arg0 ;
-(id)toStringifiedJSON;
-(void)_initializeKeys;
-(void)_setDefaultConfiguration;
-(void)setConfigurationAssetVersion:(NSUInteger)arg0 ;


@end


#endif