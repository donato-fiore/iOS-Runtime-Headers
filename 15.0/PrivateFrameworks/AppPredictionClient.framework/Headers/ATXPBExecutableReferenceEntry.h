// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBEXECUTABLEREFERENCEENTRY_H
#define ATXPBEXECUTABLEREFERENCEENTRY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBExecutableReferenceEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (nonatomic) CGFloat date; // ivar: _date
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasShouldClearOnEngagement;
@property (nonatomic) BOOL hasShouldPurge;
@property (nonatomic) BOOL hasSuggestionIsHidden;
@property (nonatomic) BOOL shouldClearOnEngagement; // ivar: _shouldClearOnEngagement
@property (nonatomic) BOOL shouldPurge; // ivar: _shouldPurge
@property (nonatomic) BOOL suggestionIsHidden; // ivar: _suggestionIsHidden


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif