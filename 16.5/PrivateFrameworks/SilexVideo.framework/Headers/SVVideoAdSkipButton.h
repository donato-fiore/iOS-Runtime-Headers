// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVVIDEOADSKIPBUTTON_H
#define SVVIDEOADSKIPBUTTON_H



#import "SVButton.h"

@interface SVVideoAdSkipButton : SVButton

@property (nonatomic) NSUInteger skipDuration; // ivar: _skipDuration


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleForDuration:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif