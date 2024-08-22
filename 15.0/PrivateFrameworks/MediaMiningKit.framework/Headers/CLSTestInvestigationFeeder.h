// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSTESTINVESTIGATIONFEEDER_H
#define CLSTESTINVESTIGATIONFEEDER_H

@class NSArray;


#import "CLSInvestigationFeeder.h"

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}




+(void)initialize;
-(NSUInteger)numberOfItems;
-(id)allItems;
-(id)approximateLocation;
-(id)initWithItems:(id)arg0 ;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)localEndDate;
-(id)localEndDateComponents;
-(id)localStartDate;
-(id)localStartDateComponents;
-(id)universalEndDate;
-(id)universalStartDate;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)enumerateItemsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif