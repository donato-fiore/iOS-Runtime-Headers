// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCURATORINVESTIGATIONFEEDER_H
#define PGCURATORINVESTIGATIONFEEDER_H

@class CLSInvestigationFeeder, NSArray;



@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}




-(NSUInteger)numberOfItems;
-(id)allItems;
-(id)approximateLocation;
-(id)initWithItems:(id)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)localEndDateComponents;
-(id)localStartDateComponents;
-(id)privateItems;
-(id)sharedItems;
-(id)universalEndDate;
-(id)universalStartDate;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)enumerateItemsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif