// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHISTOGRAMANNOTATIONVIEWDATASOURCE_H
#define HKHISTOGRAMANNOTATIONVIEWDATASOURCE_H

@class NSString, NSMutableArray;
@protocol HKInteractiveChartAnnotationViewDataSource;

#import <Foundation/Foundation.h>

#import "HKInteractiveChartDataFormatter.h"

@interface HKHistogramAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *keyValuePairs; // ivar: _keyValuePairs
@property (readonly) Class superclass;


-(BOOL)showSeparators;
-(NSInteger)numberOfValuesForAnnotationView:(id)arg0 ;
-(id)dateViewWithOrientation:(NSInteger)arg0 ;
-(id)initWithFormatter:(id)arg0 ;
-(id)leftMarginViewWithOrientation:(NSInteger)arg0 ;
-(id)valueViewForColumnAtIndex:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
-(void)updateWithPointSelectionContexts:(id)arg0 ;


@end


#endif