// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EBGRAPHIC_H
#define EBGRAPHIC_H


#import <Foundation/Foundation.h>


@interface EBGraphic : NSObject



+(id)readGraphicWithDictionary:(id)arg0 state:(id)arg1 ;
+(id)readMainChartWithState:(id)arg0 ;
+(int)objectTypeForShape:(id)arg0 ;
+(void)readChart:(id)arg0 chartIndex:(short)arg1 state:(id)arg2 ;
+(void)readGraphicsInChart:(id)arg0 state:(id)arg1 ;
+(void)readGraphicsWithState:(id)arg0 ;
+(void)readImage:(id)arg0 xlGraphicsInfo:(*void)arg1 state:(id)arg2 ;
+(void)readNotesWithDictionary:(id)arg0 state:(id)arg1 ;
+(void)readOle:(id)arg0 xlGraphicsInfo:(*void)arg1 state:(id)arg2 ;


@end


#endif