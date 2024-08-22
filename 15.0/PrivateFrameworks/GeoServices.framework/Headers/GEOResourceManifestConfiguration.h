// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEMANIFESTCONFIGURATION_H
#define GEORESOURCEMANIFESTCONFIGURATION_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding>

 {
    NSArray *_tileSetOverrides;
}


@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSString *applicationVersion; // ivar: _applicationVersion
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *dataDirectory; // ivar: _dataDirectory
@property (readonly, nonatomic) int defaultScale; // ivar: _defaultScale
@property (readonly, nonatomic) NSString *directorySuffix;
@property (copy, nonatomic) NSString *environment; // ivar: _environment
@property (copy, nonatomic) NSString *hardwareIdentifier; // ivar: _hardwareIdentifier
@property (copy, nonatomic) NSString *os; // ivar: _os
@property (copy, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) BOOL requiresLegacyFormat; // ivar: _requiresLegacyFormat
@property (nonatomic) unsigned int tileGroupIdentifier; // ivar: _tileGroupIdentifier
@property (copy, nonatomic) NSArray *tileSetOverrides;
@property (copy, nonatomic) NSString *urlTemplate; // ivar: _urlTemplate


+(BOOL)supportsSecureCoding;
+(id)configurationWithPairedDevice:(id)arg0 ;
+(id)defaultConfiguration;
-(BOOL)isDefaultConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)manifestDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif