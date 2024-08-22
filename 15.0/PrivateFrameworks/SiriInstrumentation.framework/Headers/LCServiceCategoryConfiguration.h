// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LCSERVICECATEGORYCONFIGURATION_H
#define LCSERVICECATEGORYCONFIGURATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "LCServiceBlacklistedFields.h"
#import "LCServiceLoggingParameters.h"

@interface LCServiceCategoryConfiguration : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) LCServiceBlacklistedFields *blacklist; // ivar: _blacklist
@property (retain, nonatomic) LCServiceLoggingParameters *categoryParameters; // ivar: _categoryParameters
@property (nonatomic) int eventType; // ivar: _eventType
@property (nonatomic) BOOL hasBlacklist; // ivar: _hasBlacklist
@property (nonatomic) BOOL hasCategoryParameters; // ivar: _hasCategoryParameters
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif