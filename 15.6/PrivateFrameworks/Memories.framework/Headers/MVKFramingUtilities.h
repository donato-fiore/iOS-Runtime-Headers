// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MVKFRAMINGUTILITIES_H
#define MVKFRAMINGUTILITIES_H

@protocol _TtP8Memories22FramingUtilityTestable_;

#import <Foundation/Foundation.h>


@interface MVKFramingUtilities : NSObject <_TtP8Memories22FramingUtilityTestable_>





+(BOOL)rect1:(struct CGRect )arg0 rect2:(struct CGRect )arg1 equalWithMarginForDimensionalError:(CGFloat)arg2 ;
+(struct CGRect )extend:(struct CGRect )arg0 inImageWithSize:(struct CGSize )arg1 targetAspect:(CGFloat)arg2 projectAspect:(CGFloat)arg3 ;
+(void)load;


@end


#endif