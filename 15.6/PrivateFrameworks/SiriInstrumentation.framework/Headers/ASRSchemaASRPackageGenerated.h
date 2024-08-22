// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASRSCHEMAASRPACKAGEGENERATED_H
#define ASRSCHEMAASRPACKAGEGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRPackage.h"

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsFinal;
@property (nonatomic) BOOL hasPackage; // ivar: _hasPackage
@property (nonatomic) BOOL isFinal; // ivar: _isFinal
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ASRSchemaASRPackage *package; // ivar: _package


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsFinal;
-(void)deletePackage;
-(void)writeTo:(id)arg0 ;


@end


#endif