// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFILTEREDDATASOURCE_H
#define _UIFILTEREDDATASOURCE_H

@class NSString;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface _UIFilteredDataSource : NSObject <UITableViewDataSource>

 {
    BOOL _limitingWithSections;
    NSInteger _maxVisibleSection;
    NSInteger _numberOfVisibleItemsInLastSection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger filterType; // ivar: _filterType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSObject<UITableViewDataSource> *tableDataSource; // ivar: _tableDataSource


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)_filteredNumberOfItemsGivenSection:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;


@end


#endif