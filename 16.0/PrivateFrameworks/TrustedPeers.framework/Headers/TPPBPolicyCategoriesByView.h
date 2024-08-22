// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPBPOLICYCATEGORIESBYVIEW_H
#define TPPBPOLICYCATEGORIESBYVIEW_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *categories; // ivar: _categories
@property (readonly, nonatomic) BOOL hasView;
@property (retain, nonatomic) NSString *view; // ivar: _view


+(id)TPPBPolicyCategoriesByViewWithView:(id)arg0 categories:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoriesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCategories:(id)arg0 ;
-(void)clearCategories;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif