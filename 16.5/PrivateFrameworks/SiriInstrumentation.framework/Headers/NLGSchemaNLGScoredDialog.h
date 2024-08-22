// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLGSCHEMANLGSCOREDDIALOG_H
#define NLGSCHEMANLGSCOREDDIALOG_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLGSchemaNLGScoredDialog : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *catFamily; // ivar: _catFamily
@property (copy, nonatomic) NSString *catIdentifier; // ivar: _catIdentifier
@property (nonatomic) BOOL hasCatFamily; // ivar: _hasCatFamily
@property (nonatomic) BOOL hasCatIdentifier; // ivar: _hasCatIdentifier
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasScoredDialogIdentifier; // ivar: _hasScoredDialogIdentifier
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float score; // ivar: _score
@property (copy, nonatomic) NSString *scoredDialogIdentifier; // ivar: _scoredDialogIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCatFamily;
-(void)deleteCatIdentifier;
-(void)deleteScore;
-(void)deleteScoredDialogIdentifier;
-(void)writeTo:(id)arg0 ;


@end


#endif