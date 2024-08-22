// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTCORRECTIONMARKERRENDERING_H
#define NSTEXTCORRECTIONMARKERRENDERING_H


#import <Foundation/Foundation.h>


@interface NSTextCorrectionMarkerRendering : NSObject



+(NSInteger)textCorrectionMarkerTypeWithAttributes:(id)arg0 ;
+(id)_patternColorForSpellType_iOS:(NSInteger)arg0 size:(struct CGSize )arg1 gap:(struct CGSize )arg2 imageSize:(struct CGSize *)arg3 ;
+(id)colorForSpellType_iOS:(NSInteger)arg0 ;
+(id)colorForType:(NSInteger)arg0 font:(id)arg1 imageSize:(struct CGSize *)arg2 ;
+(void)drawCorrectionMarkerOfType:(NSInteger)arg0 font:(id)arg1 origin:(struct CGPoint )arg2 width:(CGFloat)arg3 graphicsContext:(id)arg4 ;


@end


#endif