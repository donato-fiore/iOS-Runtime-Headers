// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBCELL_H
#define EBCELL_H


#import <Foundation/Foundation.h>


@interface EBCell : NSObject



+(int)convertEDErrorValueEnumToXl:(int)arg0 ;
+(int)convertXlCellTypeToED:(int)arg0 ;
+(int)convertXlErrorEnumToED:(int)arg0 ;
+(void)readXlCell:(struct XlCell *)arg0 edRowInfo:(struct EDRowInfo **)arg1 edRowBlock:(id)arg2 edRowBlocks:(id)arg3 state:(id)arg4 ;


@end


#endif