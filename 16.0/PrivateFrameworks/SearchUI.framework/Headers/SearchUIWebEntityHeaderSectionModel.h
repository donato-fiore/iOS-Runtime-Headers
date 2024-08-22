// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIWEBENTITYHEADERSECTIONMODEL_H
#define SEARCHUIWEBENTITYHEADERSECTIONMODEL_H



#import "SearchUISectionModel.h"

@interface SearchUIWebEntityHeaderSectionModel : SearchUISectionModel



-(CGFloat)outerGroupInterItemSpacing;
-(NSInteger)sectionBackgroundStyleWithAttributes:(id)arg0 ;
-(id)layoutSectionForEnvironment:(id)arg0 attributes:(id)arg1 collectionModel:(id)arg2 ;
-(id)overriddenAccessibilityIdentifier;
-(struct CGSize )heroCardAbsoluteSize;
-(struct NSDirectionalEdgeInsets )heroItemInsets;
-(struct NSDirectionalEdgeInsets )sectionInsets;


@end


#endif