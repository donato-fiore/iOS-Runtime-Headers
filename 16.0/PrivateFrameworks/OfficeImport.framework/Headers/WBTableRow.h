// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBTABLEROW_H
#define WBTABLEROW_H


#import <Foundation/Foundation.h>


@interface WBTableRow : NSObject



+(void)collectCellProperties:(*void)arg0 tracked:(*void)arg1 for:(id)arg2 ;
+(void)readCellsFrom:(id)arg0 textRuns:(id)arg1 level:(int)arg2 to:(id)arg3 properties:(*void)arg4 tracked:(*void)arg5 ;
+(void)readFrom:(id)arg0 textRuns:(id)arg1 to:(id)arg2 index:(NSUInteger)arg3 row:(id)arg4 ;


@end


#endif