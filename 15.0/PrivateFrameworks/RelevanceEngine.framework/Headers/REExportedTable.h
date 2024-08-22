// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REEXPORTEDTABLE_H
#define REEXPORTEDTABLE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface REExportedTable : NSObject {
    NSMutableArray *_data;
}


@property (retain, nonatomic) NSArray *header; // ivar: _header
@property (readonly, nonatomic) NSUInteger rowsCount;
@property (nonatomic) BOOL sortable; // ivar: _sortable


-(id)init;
-(id)rowAtIndex:(NSUInteger)arg0 ;
-(void)addRow:(id)arg0 ;


@end


#endif