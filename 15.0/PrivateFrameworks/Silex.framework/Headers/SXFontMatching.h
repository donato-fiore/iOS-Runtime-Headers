// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFONTMATCHING_H
#define SXFONTMATCHING_H


#import <Foundation/Foundation.h>


@interface SXFontMatching : NSObject



+(NSInteger)bestStyleForIntendedStyle:(NSInteger)arg0 forFonts:(id)arg1 ;
+(NSInteger)bestWeightForIntendedWeight:(NSInteger)arg0 forFonts:(id)arg1 ;
+(NSInteger)bestWidthForIntendedWidth:(NSInteger)arg0 forFonts:(id)arg1 ;
+(NSInteger)bolderWeightForWeight:(NSInteger)arg0 ;
+(NSInteger)lighterWeightForWeight:(NSInteger)arg0 ;
+(id)fontFaceWithAttributes:(id)arg0 fromFamily:(id)arg1 ;
+(id)matchFontFaceForAttributes:(id)arg0 fromFamily:(id)arg1 ;


@end


#endif