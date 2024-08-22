// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECOLUMNWIDTHMANAGER_H
#define ICTABLECOLUMNWIDTHMANAGER_H

@class NSMutableDictionary, ICTable;
@protocol ICAvailableTableWidthProviding;

#import <Foundation/Foundation.h>

#import "ICTextController.h"

@interface ICTableColumnWidthManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cachedActualColumnWidths; // ivar: _cachedActualColumnWidths
@property (readonly, nonatomic) NSMutableDictionary *cachedIdealColumnWidths; // ivar: _cachedIdealColumnWidths
@property (readonly, nonatomic) NSMutableDictionary *cachedMinimumColumnWidths; // ivar: _cachedMinimumColumnWidths
@property (readonly, weak, nonatomic) NSObject<ICAvailableTableWidthProviding> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat singleColumnTableWidth;
@property (readonly, nonatomic) ICTextController *styler; // ivar: _styler
@property (readonly, weak, nonatomic) ICTable *table; // ivar: _table


-(CGFloat)calculateIdealWidthOfColumn:(id)arg0 ;
-(CGFloat)widthOfColumn:(id)arg0 ;
-(id)initWithTable:(id)arg0 delegate:(id)arg1 ;
-(id)invalidateAvailableWidth;
-(id)invalidateWidthForColumns:(id)arg0 ;
-(id)recalculateActualWidths;


@end


#endif