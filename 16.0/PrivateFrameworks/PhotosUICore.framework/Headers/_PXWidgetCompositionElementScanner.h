// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXWIDGETCOMPOSITIONELEMENTSCANNER_H
#define _PXWIDGETCOMPOSITIONELEMENTSCANNER_H

@class NSArray;
@protocol _PXWidgetCompositionRow;

#import <Foundation/Foundation.h>


@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow>

 {
    NSInteger _scanLocation;
    _NSRange _scannedRowRange;
}


@property (readonly, nonatomic, getter=isAtEnd) BOOL atEnd;
@property (copy, nonatomic) NSArray *elements; // ivar: _elements
@property (nonatomic) CGFloat interColumnSpacing; // ivar: _interColumnSpacing
@property (nonatomic) NSInteger maximumNumberOfColumns; // ivar: _maximumNumberOfColumns
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (nonatomic) CGFloat referenceWidth; // ivar: _referenceWidth
@property (copy, nonatomic) id *wantsEdgeToEdgeLayoutBlock; // ivar: _wantsEdgeToEdgeLayoutBlock


-(BOOL)_wantsEdgeToEdgeLayoutForElement:(id)arg0 ;
-(BOOL)scanRow:(*id)arg0 ;
-(void)enumerateElementsUsingBlock:(id)arg0 ;


@end


#endif