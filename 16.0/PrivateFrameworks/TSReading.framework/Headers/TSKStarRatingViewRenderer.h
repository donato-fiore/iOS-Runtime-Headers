// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKSTARRATINGVIEWRENDERER_H
#define TSKSTARRATINGVIEWRENDERER_H


#import <Foundation/Foundation.h>


@interface TSKStarRatingViewRenderer : NSObject



+(struct CGPath *)newStarPath:(CGFloat)arg0 ;
+(void)renderRating:(NSInteger)arg0 intoContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 style:(int)arg3 showDots:(BOOL)arg4 color:(id)arg5 ;
-(id)init;


@end


#endif