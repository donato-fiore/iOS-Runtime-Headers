// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIENHANCEMENTHISTOGRAM_H
#define CIENHANCEMENTHISTOGRAM_H


#import <Foundation/Foundation.h>


@interface CIEnhancementHistogram : NSObject {
    CGFloat hist;
}




+(id)histogramFromData:(*CGFloat)arg0 ;
+(id)histogramFromDoubleData:(*CGFloat)arg0 ;
+(id)histogramFromFloatData:(*float)arg0 ;
-(*CGFloat)values;


@end


#endif