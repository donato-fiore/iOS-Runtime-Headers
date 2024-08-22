// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DGENERICAXISLABELPOSITIONER_H
#define TSCH3DGENERICAXISLABELPOSITIONER_H

@protocol TSCH3DAxisLabelPositioner;

#import <Foundation/Foundation.h>


@interface TSCH3DGenericAxisLabelPositioner : NSObject <TSCH3DAxisLabelPositioner>

 {
    tvec2<float> _range;
    NSUInteger _axis;
    float _offset;
    unsigned int _alignment;
}




+(id)horizontal;
+(id)horizontalWithRange:(*void)arg0 ;
+(id)horizontalWithRange:(*void)arg0 offset:(float)arg1 ;
+(id)vertical;
+(id)verticalWithRange:(*void)arg0 ;
+(id)verticalWithRange:(*void)arg0 offset:(float)arg1 ;
-(BOOL)hasOffset;
-(BOOL)isHorizontal;
-(float)labelGapForCount:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithAxis:(NSInteger)arg0 alignment:(unsigned int)arg1 offset:(float)arg2 range:(*void)arg3 ;
-(struct tvec3<float> )positionForValue:(CGFloat)arg0 count:(NSUInteger)arg1 chartDirection:(*void)arg2 ;
-(unsigned int)alignmentForChartDirection:(*void)arg0 ;


@end


#endif