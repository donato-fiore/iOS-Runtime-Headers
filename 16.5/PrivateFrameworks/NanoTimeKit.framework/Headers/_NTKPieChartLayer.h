// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKPIECHARTLAYER_H
#define _NTKPIECHARTLAYER_H

@class CALayer;



@interface _NTKPieChartLayer : CALayer

@property (nonatomic) CGFloat progress;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif