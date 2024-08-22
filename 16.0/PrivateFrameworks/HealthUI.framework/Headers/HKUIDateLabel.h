// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKUIDATELABEL_H
#define HKUIDATELABEL_H

@class UILabel;


#import "HKValueRange.h"

@interface HKUIDateLabel : UILabel

@property (readonly, nonatomic) HKValueRange *dateRange; // ivar: _dateRange
@property (nonatomic) BOOL useUppercase; // ivar: _useUppercase


+(id)_formattedTextFromDate:(id)arg0 formatTemplate:(NSInteger)arg1 useUppercase:(BOOL)arg2 ;
+(id)dateStringForDateRange:(id)arg0 formatTemplate:(NSInteger)arg1 useUppercase:(BOOL)arg2 ;
-(id)init;
-(void)setDate:(id)arg0 formatTemplate:(NSInteger)arg1 ;


@end


#endif