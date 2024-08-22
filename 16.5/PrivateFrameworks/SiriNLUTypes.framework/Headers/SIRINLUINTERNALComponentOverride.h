// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALCOMPONENTOVERRIDE_H
#define SIRINLUINTERNALCOMPONENTOVERRIDE_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "SIRINLUINTERNALOverrideValue.h"

@interface SIRINLUINTERNALComponentOverride : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger creationTimestampMsSinceUnixEpoch; // ivar: _creationTimestampMsSinceUnixEpoch
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasIdA;
@property (nonatomic) BOOL hasOverrideNamespace;
@property (readonly, nonatomic) BOOL hasSerializedValue;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *idA; // ivar: _idA
@property (retain, nonatomic) NSMutableArray *nluRequestRules; // ivar: _nluRequestRules
@property (nonatomic) int overrideNamespace; // ivar: _overrideNamespace
@property (retain, nonatomic) NSData *serializedValue; // ivar: _serializedValue
@property (retain, nonatomic) SIRINLUINTERNALOverrideValue *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nluRequestRulesAtIndex:(NSUInteger)arg0 ;
-(id)overrideNamespaceAsString:(int)arg0 ;
-(int)StringAsOverrideNamespace:(id)arg0 ;
-(void)addNluRequestRules:(id)arg0 ;
-(void)clearNluRequestRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif