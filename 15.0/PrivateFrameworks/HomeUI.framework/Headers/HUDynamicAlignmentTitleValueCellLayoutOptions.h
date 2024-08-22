// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDYNAMICALIGNMENTTITLEVALUECELLLAYOUTOPTIONS_H
#define HUDYNAMICALIGNMENTTITLEVALUECELLLAYOUTOPTIONS_H

@class NSString;


#import "HUGridCellLayoutOptions.h"

@interface HUDynamicAlignmentTitleValueCellLayoutOptions : HUGridCellLayoutOptions

@property (retain, nonatomic) NSString *longestPossibleTitleText; // ivar: _longestPossibleTitleText
@property (retain, nonatomic) NSString *longestPossibleValueText; // ivar: _longestPossibleValueText


-(id)initWithCellSizeSubclass:(NSInteger)arg0 longestPossibleValueText:(id)arg1 longestPossibleTitleText:(id)arg2 ;


@end


#endif