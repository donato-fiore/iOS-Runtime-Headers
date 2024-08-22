// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAXPBSUGGESTION_H
#define CAXPBSUGGESTION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CAXPBSuggestion : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSMutableArray *suggestedActions; // ivar: _suggestedActions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestedActionsAtIndex:(NSUInteger)arg0 ;
-(void)addSuggestedActions:(id)arg0 ;
-(void)clearSuggestedActions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif