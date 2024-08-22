// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUICHARTDASHEDBACKGROUNDVIEW_H
#define FIUICHARTDASHEDBACKGROUNDVIEW_H

@class NSArray, UIColor;


#import "FIUIChartBackgroundView.h"

@interface FIUIChartDashedBackgroundView : FIUIChartBackgroundView {
    NSArray *_linePositions;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) NSInteger lineType; // ivar: _lineType
@property (nonatomic) NSUInteger numLines; // ivar: _numLines
@property (nonatomic) BOOL shouldCenterLines; // ivar: _shouldCenterLines


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLinePositions;
-(void)drawLine:(id)arg0 rect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif