// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIFONTSCALINGUTILITIES_H
#define SIRIUIFONTSCALINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface SiriUIFontScalingUtilities : NSObject



+(CGFloat)labelLeadingForCurrentScale;
+(id)_paragraphStyleWithLeading:(CGFloat)arg0 textAlignemtn:(NSInteger)arg1 ;
+(id)paragraphStyleForCurrentScaleWithTextAlignment:(NSInteger)arg0 ;
+(id)tallParagraphStyleForCurrentScaleWithTextAlignment:(NSInteger)arg0 ;


@end


#endif