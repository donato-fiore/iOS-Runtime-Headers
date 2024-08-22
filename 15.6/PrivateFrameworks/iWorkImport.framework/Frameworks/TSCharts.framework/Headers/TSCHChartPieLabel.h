// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTPIELABEL_H
#define TSCHCHARTPIELABEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCHChartPieLabel : NSObject

@property (readonly, nonatomic) CGRect erasableFrame; // ivar: _erasableFrame
@property (readonly, nonatomic) CGRect erasableFrameInCombinedLabelSpace;
@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly, nonatomic) CGRect rectInCombinedLabelSpace;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform


-(id)initWithRect:(struct CGRect )arg0 erasableFrame:(struct CGRect )arg1 size:(struct CGSize )arg2 transform:(struct CGAffineTransform )arg3 title:(id)arg4 ;
-(void)concatenateTransformWithCGAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif