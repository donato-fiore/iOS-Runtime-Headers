// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LCSERVICEAPPLICATIONCONFIGURATION_H
#define LCSERVICEAPPLICATIONCONFIGURATION_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "LCServiceLoggingParameters.h"

@interface LCServiceApplicationConfiguration : SISchemaInstrumentationMessage

@property (retain, nonatomic) LCServiceLoggingParameters *applicationParameters; // ivar: _applicationParameters
@property (copy, nonatomic) NSArray *blacklistedCategories; // ivar: _blacklistedCategories
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (nonatomic) BOOL hasApplicationParameters; // ivar: _hasApplicationParameters
@property (nonatomic) BOOL hasBundleIdentifier; // ivar: _hasBundleIdentifier
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoriesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(int)blacklistedCategoriesAtIndex:(NSUInteger)arg0 ;
-(void)addBlacklistedCategories:(int)arg0 ;
-(void)addCategories:(id)arg0 ;
-(void)clearBlacklistedCategories;
-(void)clearCategories;
-(void)writeTo:(id)arg0 ;


@end


#endif