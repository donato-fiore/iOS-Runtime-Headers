// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISHINTEDSIZE_H
#define ISHINTEDSIZE_H



#import "ISHintedValue.h"

@interface ISHintedSize : ISHintedValue



-(struct CGSize )hintedSizeForSize:(struct CGSize )arg0 ;
-(struct CGSize )hintedSizeForSize:(struct CGSize )arg0 options:(NSUInteger)arg1 ;
-(void)addHintedSize:(struct CGSize )arg0 forSize:(struct CGSize )arg1 ;


@end


#endif