// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LCSERVICELOGGINGCONFIGURATION_H
#define LCSERVICELOGGINGCONFIGURATION_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "LCServiceLoggingParameters.h"

@interface LCServiceLoggingConfiguration : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *applications; // ivar: _applications
@property (copy, nonatomic) NSArray *blacklistedBundleIdentifiers; // ivar: _blacklistedBundleIdentifiers
@property (nonatomic) int configurationVersion; // ivar: _configurationVersion
@property (retain, nonatomic) LCServiceLoggingParameters *defaultParameters; // ivar: _defaultParameters
@property (copy, nonatomic) NSArray *denyListedCategories; // ivar: _denyListedCategories
@property (nonatomic) BOOL hasConfigurationVersion;
@property (nonatomic) BOOL hasDefaultParameters; // ivar: _hasDefaultParameters
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applicationsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)blacklistedBundleIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)denyListedCategoriesAtIndex:(NSUInteger)arg0 ;
-(void)addApplications:(id)arg0 ;
-(void)addBlacklistedBundleIdentifiers:(id)arg0 ;
-(void)addDenyListedCategories:(int)arg0 ;
-(void)clearApplications;
-(void)clearBlacklistedBundleIdentifiers;
-(void)clearDenyListedCategories;
-(void)deleteApplications;
-(void)deleteBlacklistedBundleIdentifiers;
-(void)deleteConfigurationVersion;
-(void)deleteDefaultParameters;
-(void)deleteDenyListedCategories;
-(void)writeTo:(id)arg0 ;


@end


#endif