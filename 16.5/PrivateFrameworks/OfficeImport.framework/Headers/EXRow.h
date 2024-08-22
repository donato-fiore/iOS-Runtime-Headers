// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXROW_H
#define EXROW_H


#import <Foundation/Foundation.h>


@interface EXRow : NSObject



+(id)createFormulaReferenceRangeForRowBlocks:(id)arg0 ;
+(void)edRowFrom:(struct _xmlTextReader *)arg0 edRowInfo:(struct EDRowInfo *)arg1 edRowBlock:(id)arg2 edRowBlocks:(id)arg3 state:(id)arg4 ;
+(void)readRowsFrom:(struct _xmlTextReader *)arg0 state:(id)arg1 ;


@end


#endif