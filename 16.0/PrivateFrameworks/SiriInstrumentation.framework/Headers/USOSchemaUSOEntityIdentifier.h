// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USOSCHEMAUSOENTITYIDENTIFIER_H
#define USOSCHEMAUSOENTITYIDENTIFIER_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface USOSchemaUSOEntityIdentifier : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int backingAppBundleType; // ivar: _backingAppBundleType
@property (nonatomic) unsigned int groupIndex; // ivar: _groupIndex
@property (nonatomic) BOOL hasBackingAppBundleType;
@property (nonatomic) BOOL hasGroupIndex;
@property (nonatomic) BOOL hasIdentifierNamespace; // ivar: _hasIdentifierNamespace
@property (nonatomic) BOOL hasInterpretationGroup;
@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) BOOL hasSourceNluComponent;
@property (copy, nonatomic) NSString *identifierNamespace; // ivar: _identifierNamespace
@property (nonatomic) unsigned int interpretationGroup; // ivar: _interpretationGroup
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int nodeIndex; // ivar: _nodeIndex
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (nonatomic) int sourceNluComponent; // ivar: _sourceNluComponent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBackingAppBundleType;
-(void)deleteGroupIndex;
-(void)deleteIdentifierNamespace;
-(void)deleteInterpretationGroup;
-(void)deleteNodeIndex;
-(void)deleteProbability;
-(void)deleteSourceNluComponent;
-(void)writeTo:(id)arg0 ;


@end


#endif