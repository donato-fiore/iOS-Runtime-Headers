// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISECTIONMODEL_H
#define SEARCHUISECTIONMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SearchUISection.h"

@interface SearchUISectionModel : NSObject

@property (nonatomic) BOOL drawPlattersIfNecessary; // ivar: _drawPlattersIfNecessary
@property (readonly, nonatomic) BOOL needsHorizontalNavigation;
@property (retain, nonatomic) NSArray *rowModels; // ivar: _rowModels
@property (readonly, nonatomic) SearchUISection *section; // ivar: _section
@property (readonly, nonatomic) BOOL selfSizingInTwoAxes; // ivar: _selfSizingInTwoAxes
@property (readonly, nonatomic) BOOL shouldHeightMatchSection; // ivar: _shouldHeightMatchSection


+(id)sectionModelWithGridRowModels:(id)arg0 numberOfColumns:(NSInteger)arg1 section:(id)arg2 expandedCollectionSections:(id)arg3 ;
+(id)sectionModelWithRows:(id)arg0 drawPlattersIfNecessary:(BOOL)arg1 section:(id)arg2 expandedCollectionSections:(id)arg3 ;
+(id)sectionModelWithScrollingRowModels:(id)arg0 numberOfRows:(NSInteger)arg1 section:(id)arg2 ;
-(NSInteger)sectionBackgroundStyleWithAttributes:(id)arg0 ;
-(id)initWithRowModels:(id)arg0 section:(id)arg1 ;
-(id)layoutSectionForEnvironment:(id)arg0 attributes:(id)arg1 collectionModel:(id)arg2 ;
-(id)overriddenAccessibilityIdentifier;
-(void)loadIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)removeRowModelAtIndex:(NSInteger)arg0 ;


@end


#endif