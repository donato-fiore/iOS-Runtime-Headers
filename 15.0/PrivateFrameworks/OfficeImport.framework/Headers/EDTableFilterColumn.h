// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTABLEFILTERCOLUMN_H
#define EDTABLEFILTERCOLUMN_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface EDTableFilterColumn : NSObject {
    NSUInteger mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}




-(NSUInteger)columnIndex;
-(NSUInteger)filterCount;
-(id)description;
-(id)filterAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(int)filtersRelation;
-(void)addFilter:(id)arg0 ;
-(void)setColumnIndex:(NSUInteger)arg0 ;
-(void)setFiltersRelation:(int)arg0 ;


@end


#endif