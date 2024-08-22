// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXCHARTSHEET_H
#define EXCHARTSHEET_H


#import <Foundation/Foundation.h>


@interface EXChartsheet : NSObject



+(BOOL)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg0 state:(id)arg1 ;
+(id)edSheetWithState:(id)arg0 ;
+(void)readOtherSheetComponentsWithState:(id)arg0 ;
+(void)readTables:(id)arg0 ;
+(void)setupProcessors:(id)arg0 ;


@end


#endif