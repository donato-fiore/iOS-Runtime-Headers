// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTIMEFORMATTERINTERNAL_H
#define AVTIMEFORMATTERINTERNAL_H

@class NSLocale, NSString, NSNumberFormatter;

#import <Foundation/Foundation.h>


@interface AVTimeFormatterInternal : NSObject {
    NSInteger style;
    CGFloat formatTemplate;
    BOOL isFullWidth;
    NSLocale *locale;
    BOOL isRightToLeft;
    NSString *cachedDateFormatterFormat;
    NSString *cachedDateFormatterTemplate;
    NSNumberFormatter *numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter *numberFormatterWithTwoMinimumIntegerDigits;
}






@end


#endif