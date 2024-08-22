// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHMULTIDATACHARTREPELEMENTINDEX_H
#define TSCHMULTIDATACHARTREPELEMENTINDEX_H

@class NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger seriesIndex; // ivar: _seriesIndex
@property (readonly, nonatomic) NSIndexSet *seriesIndexSet;
@property (readonly, nonatomic) NSUInteger valueIndex; // ivar: _valueIndex
@property (readonly, nonatomic) NSIndexSet *valueIndexSet;


+(id)repElementIndexWithSeriesIndex:(NSUInteger)arg0 valueIndex:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSeriesIndex:(NSUInteger)arg0 valueIndex:(NSUInteger)arg1 ;


@end


#endif