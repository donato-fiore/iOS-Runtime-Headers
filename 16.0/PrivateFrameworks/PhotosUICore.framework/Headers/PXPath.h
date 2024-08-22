// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPATH_H
#define PXPATH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXPath : NSObject

@property (retain) *CGPath CGPath; // ivar: _CGPath
@property (retain, nonatomic) NSMutableArray *points; // ivar: _points


+(id)pathWithEllipseInRect:(struct CGRect )arg0 ;
+(id)pathWithRect:(struct CGRect )arg0 ;
+(id)pathWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
-(id)initWithPoints:(struct CGPoint *)arg0 count:(NSInteger)arg1 ;
-(id)initWithRect:(struct CGRect )arg0 withRoundedCorners:(int)arg1 cornerRadii:(id)arg2 smoothPillShapes:(BOOL)arg3 ;
-(struct CGRect )boundingRect;
-(void)addContinuousCornerToPath:(struct CGPath *)arg0 trueCorner:(struct CGPoint )arg1 cornerRadius:(struct CGSize )arg2 corners:(NSUInteger)arg3 portion:(NSUInteger)arg4 clockwise:(BOOL)arg5 fullRadius:(BOOL)arg6 ;
-(void)addLineToPointX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)closeSubpath;


@end


#endif