// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGSECTIONMODEL_H
#define SEARCHUIHORIZONTALLYSCROLLINGSECTIONMODEL_H



#import "SearchUISectionModel.h"

@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property NSInteger numberOfRows; // ivar: _numberOfRows


-(BOOL)drawsBackground;
-(BOOL)shouldHeightMatchSection;
-(NSInteger)sectionBackgroundStyleWithAttributes:(id)arg0 ;
-(id)initWithRowModels:(id)arg0 section:(id)arg1 numberOfRows:(NSInteger)arg2 ;
-(id)layoutSectionForEnvironment:(id)arg0 attributes:(id)arg1 collectionModel:(id)arg2 ;
-(id)overriddenAccessibilityIdentifier;


@end


#endif