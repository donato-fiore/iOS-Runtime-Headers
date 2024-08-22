// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLASRSCHEMADODMLASRALIGNMENTINFO_H
#define DODMLASRSCHEMADODMLASRALIGNMENTINFO_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRAlignmentInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int editDistance; // ivar: _editDistance
@property (nonatomic) BOOL hasEditDistance;
@property (nonatomic) BOOL hasNumDeletions;
@property (nonatomic) BOOL hasNumInsertions;
@property (nonatomic) BOOL hasNumSubstitutions;
@property (nonatomic) BOOL hasReferenceName; // ivar: _hasReferenceName
@property (nonatomic) BOOL hasReferenceSize;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numDeletions; // ivar: _numDeletions
@property (nonatomic) unsigned int numInsertions; // ivar: _numInsertions
@property (nonatomic) unsigned int numSubstitutions; // ivar: _numSubstitutions
@property (copy, nonatomic) NSString *referenceName; // ivar: _referenceName
@property (nonatomic) unsigned int referenceSize; // ivar: _referenceSize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEditDistance;
-(void)deleteNumDeletions;
-(void)deleteNumInsertions;
-(void)deleteNumSubstitutions;
-(void)deleteReferenceName;
-(void)deleteReferenceSize;
-(void)writeTo:(id)arg0 ;


@end


#endif