// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBBLENDINGSESSIONCLIENTMODELUPDATE_H
#define ATXPBBLENDINGSESSIONCLIENTMODELUPDATE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ATXPBBlendingSessionClientModelUpdate : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSString *clientModelVersion; // ivar: _clientModelVersion
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasClientModelVersion;
@property (retain, nonatomic) NSMutableArray *suggestions; // ivar: _suggestions


+(Class)suggestionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestionAtIndex:(NSUInteger)arg0 ;
-(void)addSuggestion:(id)arg0 ;
-(void)clearSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif