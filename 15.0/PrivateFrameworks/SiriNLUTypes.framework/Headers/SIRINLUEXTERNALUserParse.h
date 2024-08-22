// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALUSERPARSE_H
#define SIRINLUEXTERNALUSERPARSE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUEXTERNALParser.h"
#import "SIRINLUEXTERNALRepetitionResult.h"

@interface SIRINLUEXTERNALUserParse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdA;
@property (readonly, nonatomic) BOOL hasParser;
@property (readonly, nonatomic) BOOL hasParserId;
@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) BOOL hasRepetitionResult;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA; // ivar: _idA
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser; // ivar: _parser
@property (retain, nonatomic) NSString *parserId; // ivar: _parserId
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) SIRINLUEXTERNALRepetitionResult *repetitionResult; // ivar: _repetitionResult
@property (retain, nonatomic) NSMutableArray *userDialogActs; // ivar: _userDialogActs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)userDialogActsAtIndex:(NSUInteger)arg0 ;
-(void)addUserDialogActs:(id)arg0 ;
-(void)clearUserDialogActs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif