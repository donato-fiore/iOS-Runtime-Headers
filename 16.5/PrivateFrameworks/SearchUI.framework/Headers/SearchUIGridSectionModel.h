// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIGRIDSECTIONMODEL_H
#define SEARCHUIGRIDSECTIONMODEL_H



#import "SearchUISectionModel.h"

@interface SearchUIGridSectionModel : SearchUISectionModel

@property NSUInteger numberOfColumns; // ivar: _numberOfColumns


-(BOOL)needsHorizontalNavigation;
-(NSInteger)sectionBackgroundStyleWithAttributes:(id)arg0 ;
-(id)initWithRowModels:(id)arg0 numberOfColumns:(NSInteger)arg1 section:(id)arg2 ;
-(id)layoutSectionForEnvironment:(id)arg0 attributes:(id)arg1 collectionModel:(id)arg2 ;
-(id)overriddenAccessibilityIdentifier;
-(void)setCornerMaskRulesOnRowModelsForColumnCount:(NSUInteger)arg0 ;


@end


#endif