// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDISPLAYTYPEVALUEFORMATTER_H
#define HKDISPLAYTYPEVALUEFORMATTER_H

@protocol HKNumberFormatter;

#import <Foundation/Foundation.h>


@interface HKDisplayTypeValueFormatter : NSObject {
    id<HKNumberFormatter> *_numberFormatter;
}




-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 unitFormatString:(id)arg6 ;
-(id)initWithNumberFormatter:(id)arg0 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif