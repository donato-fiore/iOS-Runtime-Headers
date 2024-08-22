// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTEXTMEASURER_H
#define TSWPTEXTMEASURER_H


#import <Foundation/Foundation.h>


@interface TSWPTextMeasurer : NSObject



+(BOOL)canQuicklyMeasureParagraphStyle:(id)arg0 ;
+(BOOL)canQuicklyMeasureString:(id)arg0 textMeasurerBundle:(id)arg1 ;
+(CGFloat)heightForString:(id)arg0 textMeasurerBundle:(id)arg1 width:(CGFloat)arg2 outFitWidth:(*CGFloat)arg3 ;
+(CGFloat)widthForString:(id)arg0 textMeasurerBundle:(id)arg1 ;
+(id)textMeasurerBundleForParagraphStyle:(id)arg0 ;


@end


#endif