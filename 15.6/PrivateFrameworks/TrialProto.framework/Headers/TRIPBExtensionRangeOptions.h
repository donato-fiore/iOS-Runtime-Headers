// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBEXTENSIONRANGEOPTIONS_H
#define TRIPBEXTENSIONRANGEOPTIONS_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBExtensionRangeOptions : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) NSUInteger uninterpretedOptionArray_Count;


+(id)descriptor;


@end


#endif