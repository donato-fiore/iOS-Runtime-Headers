// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSSECTIONEDDATASOURCE_H
#define CPSSECTIONEDDATASOURCE_H

@class NSIndexPath, NSString, NSArray, NSMutableArray, CPSessionConfiguration;
@protocol CPSessionConfigurationDelegate;


#import "CPSDataSource.h"
#import "CPSTemplateEnvironment.h"

@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate>

 {
    BOOL _limitingWithSections;
    NSInteger _maxVisibleSection;
    NSInteger _numberOfVisibleItemsInLastSection;
}


@property (readonly, nonatomic) NSIndexPath *assistantCellIndexPath; // ivar: _assistantCellIndexPath
@property (nonatomic) NSInteger assistantCellPosition; // ivar: _assistantCellPosition
@property (retain, nonatomic) NSString *assistantCellTitle; // ivar: _assistantCellTitle
@property (nonatomic) NSInteger assistantCellVisibility; // ivar: _assistantCellVisibility
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *sectionHeightCache; // ivar: _sectionHeightCache
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (retain, nonatomic) CPSessionConfiguration *sessionConfiguration; // ivar: _sessionConfiguration
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPSTemplateEnvironment *templateEnvironment; // ivar: _templateEnvironment


-(BOOL)isLimitingLists;
-(BOOL)showingAssistantInLastPosition;
-(CGFloat)heightForItemAtIndexPath:(id)arg0 inEnvironment:(id)arg1 ;
-(NSInteger)_filteredNumberOfItemsGivenSection:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(NSInteger)numberOfItems;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)_sanitizedSectionIndexTitleForTitle:(id)arg0 ;
-(id)firstItemIndexPath;
-(id)indexPathForItemWithIdentifier:(id)arg0 ;
-(id)initWithSections:(id)arg0 templateEnvironment:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSInteger)arg0 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)sectionWithIdentifier:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)invalidateHeightCache;
-(void)rebuildHeightCacheWithEnvironment:(id)arg0 ;
-(void)reloadItems:(id)arg0 ;
-(void)sessionConfiguration:(id)arg0 limitedUserInterfacesChanged:(NSUInteger)arg1 ;
-(void)updateIndexPathForAssistantItem;
-(void)updateSections:(id)arg0 ;


@end


#endif