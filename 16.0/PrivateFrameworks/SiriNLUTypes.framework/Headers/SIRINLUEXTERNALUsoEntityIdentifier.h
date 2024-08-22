// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALUSOENTITYIDENTIFIER_H
#define SIRINLUEXTERNALUSOENTITYIDENTIFIER_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRICOMMONStringValue.h"
#import "SIRICOMMONDoubleValue.h"

@interface SIRINLUEXTERNALUsoEntityIdentifier : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *backingAppBundleId; // ivar: _backingAppBundleId
@property (nonatomic) unsigned int groupIndex; // ivar: _groupIndex
@property (readonly, nonatomic) BOOL hasBackingAppBundleId;
@property (nonatomic) BOOL hasGroupIndex;
@property (nonatomic) BOOL hasInterpretationGroup;
@property (readonly, nonatomic) BOOL hasNamespaceA;
@property (nonatomic) BOOL hasNodeIndex;
@property (readonly, nonatomic) BOOL hasProbability;
@property (nonatomic) BOOL hasSourceComponent;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int interpretationGroup; // ivar: _interpretationGroup
@property (retain, nonatomic) SIRICOMMONStringValue *namespaceA; // ivar: _namespaceA
@property (nonatomic) unsigned int nodeIndex; // ivar: _nodeIndex
@property (retain, nonatomic) SIRICOMMONDoubleValue *probability; // ivar: _probability
@property (nonatomic) int sourceComponent; // ivar: _sourceComponent
@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sourceComponentAsString:(int)arg0 ;
-(int)StringAsSourceComponent:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif