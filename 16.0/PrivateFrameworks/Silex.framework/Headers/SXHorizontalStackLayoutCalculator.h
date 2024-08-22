// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXHORIZONTALSTACKLAYOUTCALCULATOR_H
#define SXHORIZONTALSTACKLAYOUTCALCULATOR_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol SXHorizontalStackLayoutCalculator;

#import <Foundation/Foundation.h>


@interface SXHorizontalStackLayoutCalculator : NSObject <SXHorizontalStackLayoutCalculator>



@property (nonatomic) CGFloat combinedMaximumWidth; // ivar: _combinedMaximumWidth
@property (nonatomic) CGFloat combinedMinimumWidth; // ivar: _combinedMinimumWidth
@property (readonly, nonatomic) NSMutableDictionary *componentsGroupedByMaximumWidth; // ivar: _componentsGroupedByMaximumWidth
@property (readonly, nonatomic) NSMutableDictionary *componentsGroupedByMinimumWidth; // ivar: _componentsGroupedByMinimumWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *flexibleItems; // ivar: _flexibleItems
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *items; // ivar: _items
@property (readonly, nonatomic) NSMutableDictionary *maximumWidths; // ivar: _maximumWidths
@property (readonly, nonatomic) NSMutableDictionary *minimumWidths; // ivar: _minimumWidths
@property (readonly, nonatomic) NSMutableArray *sortedItems; // ivar: _sortedItems
@property (readonly) Class superclass;


-(id)init;
-(id)layoutForComponentWidth:(CGFloat)arg0 ;
-(void)addFlexibleItemWithIdentifier:(id)arg0 ;
-(void)addItemWithMinimumWidth:(CGFloat)arg0 maximumWidth:(CGFloat)arg1 identifier:(id)arg2 ;


@end


#endif