// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBSUGGESTIONLAYOUTLIST_H
#define ATXPBSUGGESTIONLAYOUTLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ATXPBSuggestionLayoutList : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *layouts; // ivar: _layouts


+(Class)layoutType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)layoutAtIndex:(NSUInteger)arg0 ;
-(void)addLayout:(id)arg0 ;
-(void)clearLayouts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif