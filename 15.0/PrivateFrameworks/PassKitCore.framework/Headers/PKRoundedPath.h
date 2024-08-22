// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKROUNDEDPATH_H
#define PKROUNDEDPATH_H


#import <Foundation/Foundation.h>


@interface PKRoundedPath : NSObject

@property (readonly) *CGPath CGPath; // ivar: _CGPath


+(id)pathWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
-(id)init;
-(id)initWithRect:(struct CGRect )arg0 withRoundedCorners:(int)arg1 cornerRadii:(id)arg2 smoothPillShapes:(BOOL)arg3 ;
-(void)addContinuousCornerToPath:(struct CGPath *)arg0 trueCorner:(struct CGPoint )arg1 cornerRadius:(struct CGSize )arg2 corners:(NSUInteger)arg3 portion:(NSUInteger)arg4 clockwise:(BOOL)arg5 fullRadius:(BOOL)arg6 ;
-(void)dealloc;


@end


#endif