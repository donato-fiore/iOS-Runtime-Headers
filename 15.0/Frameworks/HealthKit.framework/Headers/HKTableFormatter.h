// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKTABLEFORMATTER_H
#define HKTABLEFORMATTER_H

@class NSArray, NSDateFormatter, NSString;

#import <Foundation/Foundation.h>


@interface HKTableFormatter : NSObject {
    NSArray *_titles;
    NSArray *_columns;
    NSDateFormatter *_dateFormatter;
}


@property (readonly, nonatomic) NSInteger rowCount;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)formatterForCodableCondensedWorkouts;
-(id)_columnWidths;
-(id)_formattedTableHeaderForColumnWidths:(id)arg0 ;
-(id)formattedTable;
-(id)formattedTableHeader;
-(id)init;
-(id)initWithColumnTitles:(id)arg0 ;
-(id)stringFromDate:(id)arg0 ;
-(id)stringFromDate:(id)arg0 fallback:(id)arg1 ;
-(id)stringFromTimeInterval:(CGFloat)arg0 ;
-(void)_appendColumn:(id)arg0 width:(NSInteger)arg1 padding:(id)arg2 row:(id)arg3 ;
-(void)_enumerateFormattedRowsWithColumnWidths:(id)arg0 handler:(id)arg1 ;
-(void)appendHeterogenousRow:(id)arg0 ;
-(void)appendRow:(id)arg0 ;
-(void)appendWorkout:(id)arg0 ;
-(void)enumerateFormattedRows:(id)arg0 ;


@end


#endif