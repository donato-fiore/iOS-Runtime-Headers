// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCCHARTDATAROWBINDING_H
#define CCCHARTDATAROWBINDING_H

@class NSDictionary;
@protocol CCChartDataRow;



@interface CCChartDataRowBinding : NSDictionary {
    id<CCChartDataRow> *_dataRow;
}


@property (readonly) NSUInteger count;


-(id)chartViewDataRowID;
-(id)initWithChartDataRow:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;


@end


#endif