// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSERIESDIMENSION_H
#define TSCHSERIESDIMENSION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHSeriesDimension : NSObject <NSCopying>



@property (readonly, nonatomic) int axisType; // ivar: _axisType
@property (readonly, nonatomic) NSUInteger seriesIndex; // ivar: _seriesIndex


+(id)seriesDimensionWithSeriesIndex:(NSUInteger)arg0 axisType:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSeriesIndex:(NSUInteger)arg0 axisType:(int)arg1 ;


@end


#endif