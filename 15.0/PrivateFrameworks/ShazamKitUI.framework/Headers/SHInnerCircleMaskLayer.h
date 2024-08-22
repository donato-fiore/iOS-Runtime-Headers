// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHINNERCIRCLEMASKLAYER_H
#define SHINNERCIRCLEMASKLAYER_H

@class CALayer;



@interface SHInnerCircleMaskLayer : CALayer

@property (nonatomic) CGFloat innerCircleRelativeSize;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setup;


@end


#endif