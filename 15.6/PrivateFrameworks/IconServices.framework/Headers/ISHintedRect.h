// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISHINTEDRECT_H
#define ISHINTEDRECT_H



#import "ISHintedValue.h"

@interface ISHintedRect : ISHintedValue



-(struct CGRect )hintedRectForSize:(struct CGSize )arg0 ;
-(struct CGRect )hintedRectForSize:(struct CGSize )arg0 options:(NSUInteger)arg1 ;
-(void)addHintedRect:(struct CGRect )arg0 forSize:(struct CGSize )arg1 ;


@end


#endif