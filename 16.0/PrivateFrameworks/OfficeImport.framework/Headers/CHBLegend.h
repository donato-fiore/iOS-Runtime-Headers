// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHBLEGEND_H
#define CHBLEGEND_H


#import <Foundation/Foundation.h>


@interface CHBLegend : NSObject



+(id)readCHDLegendEntryFrom:(*void)arg0 state:(id)arg1 ;
+(id)readFrom:(*void)arg0 state:(id)arg1 ;
+(int)chdLegendPositionEnumFromXlLegendPosition:(int)arg0 ;
+(int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg0 ;


@end


#endif