// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USOSCHEMAUSOENTITYIDENTIFIERTIER1_H
#define USOSCHEMAUSOENTITYIDENTIFIERTIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface USOSchemaUSOEntityIdentifierTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *backingAppBundleId; // ivar: _backingAppBundleId
@property (nonatomic) BOOL hasBackingAppBundleId; // ivar: _hasBackingAppBundleId
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasValue; // ivar: _hasValue
@property (nonatomic) unsigned int index; // ivar: _index
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBackingAppBundleId;
-(void)deleteIndex;
-(void)deleteValue;
-(void)writeTo:(id)arg0 ;


@end


#endif