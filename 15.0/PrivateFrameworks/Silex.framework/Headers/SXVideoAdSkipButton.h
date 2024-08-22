// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXVIDEOADSKIPBUTTON_H
#define SXVIDEOADSKIPBUTTON_H



#import "SXMaterialButton.h"

@interface SXVideoAdSkipButton : SXMaterialButton

@property (nonatomic) NSUInteger skipDuration; // ivar: _skipDuration


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleForDuration:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif