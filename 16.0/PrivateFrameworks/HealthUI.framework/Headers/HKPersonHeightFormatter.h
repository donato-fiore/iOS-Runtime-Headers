// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPERSONHEIGHTFORMATTER_H
#define HKPERSONHEIGHTFORMATTER_H

@class NSLengthFormatter, NSNumber;

#import <Foundation/Foundation.h>


@interface HKPersonHeightFormatter : NSObject {
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}


@property (readonly, nonatomic) BOOL usesImperialUnits;


+(id)sharedFormatter;
-(CGFloat)centimetersFromFeet:(CGFloat)arg0 inches:(CGFloat)arg1 ;
-(id)formattedValueForCentimeters:(CGFloat)arg0 ;
-(id)formattedValueForFeet:(CGFloat)arg0 ;
-(id)formattedValueForInches:(CGFloat)arg0 ;
-(id)init;
-(id)localizedStringFromHeightInCentimeters:(id)arg0 ;
-(void)_localeChanged:(id)arg0 ;
-(void)dealloc;
-(void)getFeet:(*NSInteger)arg0 inches:(*NSInteger)arg1 fromCentimeters:(CGFloat)arg2 ;


@end


#endif