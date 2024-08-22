// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPBPOLICYDOCUMENT_H
#define TPPBPOLICYDOCUMENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface TPPBPolicyDocument : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *categoriesByViews; // ivar: _categoriesByViews
@property (nonatomic) BOOL hasPolicyVersion;
@property (retain, nonatomic) NSMutableArray *inheritedExcludedViews; // ivar: _inheritedExcludedViews
@property (retain, nonatomic) NSMutableArray *introducersByCategorys; // ivar: _introducersByCategorys
@property (retain, nonatomic) NSMutableArray *keyViewMappings; // ivar: _keyViewMappings
@property (retain, nonatomic) NSMutableArray *modelToCategorys; // ivar: _modelToCategorys
@property (retain, nonatomic) NSMutableArray *piggybackViews; // ivar: _piggybackViews
@property (nonatomic) NSUInteger policyVersion; // ivar: _policyVersion
@property (retain, nonatomic) NSMutableArray *priorityViews; // ivar: _priorityViews
@property (retain, nonatomic) NSMutableArray *redactions; // ivar: _redactions
@property (retain, nonatomic) NSMutableArray *userControllableViews; // ivar: _userControllableViews


+(Class)categoriesByViewType;
+(Class)introducersByCategoryType;
+(Class)keyViewMappingType;
+(Class)modelToCategoryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoriesByViewAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inheritedExcludedViewsAtIndex:(NSUInteger)arg0 ;
-(id)introducersByCategoryAtIndex:(NSUInteger)arg0 ;
-(id)keyViewMappingAtIndex:(NSUInteger)arg0 ;
-(id)modelToCategoryAtIndex:(NSUInteger)arg0 ;
-(id)piggybackViewsAtIndex:(NSUInteger)arg0 ;
-(id)priorityViewsAtIndex:(NSUInteger)arg0 ;
-(id)redactionsAtIndex:(NSUInteger)arg0 ;
-(id)userControllableViewsAtIndex:(NSUInteger)arg0 ;
-(void)addCategoriesByView:(id)arg0 ;
-(void)addInheritedExcludedViews:(id)arg0 ;
-(void)addIntroducersByCategory:(id)arg0 ;
-(void)addKeyViewMapping:(id)arg0 ;
-(void)addModelToCategory:(id)arg0 ;
-(void)addPiggybackViews:(id)arg0 ;
-(void)addPriorityViews:(id)arg0 ;
-(void)addRedactions:(id)arg0 ;
-(void)addUserControllableViews:(id)arg0 ;
-(void)clearCategoriesByViews;
-(void)clearInheritedExcludedViews;
-(void)clearIntroducersByCategorys;
-(void)clearKeyViewMappings;
-(void)clearModelToCategorys;
-(void)clearPiggybackViews;
-(void)clearPriorityViews;
-(void)clearRedactions;
-(void)clearUserControllableViews;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif