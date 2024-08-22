// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDTABLE_H
#define EDTABLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDReference.h"
#import "EDCollection.h"

@interface EDTable : NSObject {
    EDResources *mResources;
    NSUInteger mStyleIndex;
    NSUInteger mHeaderRowDxfIndex;
    NSUInteger mTotalsRowDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    NSUInteger mHeaderRowBorderDxfIndex;
    NSUInteger mTotalsRowBorderDxfIndex;
    NSUInteger mDataAreaBorderDxfIndex;
    NSUInteger mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    NSUInteger mHeaderRowCount;
    NSUInteger mTotalsRowCount;
    BOOL mShowFirstColumn;
    BOOL mShowLastColumn;
    BOOL mShowRowStripes;
    BOOL mShowColumnStripes;
    EDCollection *mTableColumns;
    EDCollection *mColumnFilters;
}




+(id)tableWithResources:(id)arg0 ;
-(BOOL)showColumnStripes;
-(BOOL)showFirstColumn;
-(BOOL)showLastColumn;
-(BOOL)showRowStripes;
-(NSUInteger)dataAreaBorderDxfIndex;
-(NSUInteger)dataAreaDxfIndex;
-(NSUInteger)headerRowBorderDxfIndex;
-(NSUInteger)headerRowCount;
-(NSUInteger)headerRowDxfIndex;
-(NSUInteger)styleIndex;
-(NSUInteger)tableBorderDxfIndex;
-(NSUInteger)totalsRowBorderDxfIndex;
-(NSUInteger)totalsRowCount;
-(NSUInteger)totalsRowDxfIndex;
-(id)columnFilters;
-(id)dataAreaBorderDxf;
-(id)dataAreaDxf;
-(id)description;
-(id)displayName;
-(id)headerRowBorderDxf;
-(id)headerRowDxf;
-(id)initWithResources:(id)arg0 ;
-(id)name;
-(id)style;
-(id)styleName;
-(id)tableBorderDxf;
-(id)tableColumns;
-(id)tableRange;
-(id)totalsRowBorderDxf;
-(id)totalsRowDxf;
-(void)setDataAreaBorderDxf:(id)arg0 ;
-(void)setDataAreaBorderDxfIndex:(NSUInteger)arg0 ;
-(void)setDataAreaDxf:(id)arg0 ;
-(void)setDataAreaDxfIndex:(NSUInteger)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setHeaderRowBorderDxf:(id)arg0 ;
-(void)setHeaderRowBorderDxfIndex:(NSUInteger)arg0 ;
-(void)setHeaderRowCount:(NSUInteger)arg0 ;
-(void)setHeaderRowDxf:(id)arg0 ;
-(void)setHeaderRowDxfIndex:(NSUInteger)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setShowColumnStripes:(BOOL)arg0 ;
-(void)setShowFirstColumn:(BOOL)arg0 ;
-(void)setShowLastColumn:(BOOL)arg0 ;
-(void)setShowRowStripes:(BOOL)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;
-(void)setStyleName:(id)arg0 ;
-(void)setTableBorderDxf:(id)arg0 ;
-(void)setTableBorderDxfIndex:(NSUInteger)arg0 ;
-(void)setTableRange:(id)arg0 ;
-(void)setTotalsRowBorderDxf:(id)arg0 ;
-(void)setTotalsRowBorderDxfIndex:(NSUInteger)arg0 ;
-(void)setTotalsRowCount:(NSUInteger)arg0 ;
-(void)setTotalsRowDxf:(id)arg0 ;
-(void)setTotalsRowDxfIndex:(NSUInteger)arg0 ;


@end


#endif