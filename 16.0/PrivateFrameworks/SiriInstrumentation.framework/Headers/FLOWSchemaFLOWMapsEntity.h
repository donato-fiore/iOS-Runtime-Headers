// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWMAPSENTITY_H
#define FLOWSCHEMAFLOWMAPSENTITY_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWMapsEntity : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *addressId; // ivar: _addressId
@property (nonatomic) BOOL hasAddressId; // ivar: _hasAddressId
@property (nonatomic) BOOL hasMapsFeatureId; // ivar: _hasMapsFeatureId
@property (nonatomic) BOOL hasMuid; // ivar: _hasMuid
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger mapsFeatureId; // ivar: _mapsFeatureId
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSUInteger whichEntityid; // ivar: _whichEntityid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAddressId;
-(void)deleteMapsFeatureId;
-(void)deleteMuid;
-(void)writeTo:(id)arg0 ;


@end


#endif