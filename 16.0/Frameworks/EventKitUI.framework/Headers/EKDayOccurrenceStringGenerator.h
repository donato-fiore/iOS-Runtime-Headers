// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKDAYOCCURRENCESTRINGGENERATOR_H
#define EKDAYOCCURRENCESTRINGGENERATOR_H


#import <Foundation/Foundation.h>


@interface EKDayOccurrenceStringGenerator : NSObject



+(CGFloat)_defaultMinimumLineHeightForState:(id)arg0 ;
+(CGFloat)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)arg0 sizeClass:(NSInteger)arg1 ;
+(CGFloat)attributedStringMinimumLineHeightUsingSmallText:(BOOL)arg0 sizeClass:(NSInteger)arg1 ;
+(CGFloat)minNaturalTextHeightForEvent:(id)arg0 usingSmallText:(BOOL)arg1 sizeClass:(NSInteger)arg2 ;
+(CGFloat)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)arg0 sizeClass:(NSInteger)arg1 ;
+(id)_attributedLocationWithState:(id)arg0 ;
+(id)_attributedStatusWithState:(id)arg0 ;
+(id)_attributedTimeWithState:(id)arg0 ;
+(id)_attributedTitleWithState:(id)arg0 ;
+(id)_defaultAttributesForState:(id)arg0 ;
-(id)generateContentStringWithState:(id)arg0 ;
-(id)generateTravelTimeStringWithState:(id)arg0 ;


@end


#endif