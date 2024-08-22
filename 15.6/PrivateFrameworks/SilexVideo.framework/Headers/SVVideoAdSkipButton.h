// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVVIDEOADSKIPBUTTON_H
#define SVVIDEOADSKIPBUTTON_H



#import "SVMaterialButton.h"

@interface SVVideoAdSkipButton : SVMaterialButton

@property (nonatomic) NSUInteger skipDuration; // ivar: _skipDuration


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleForDuration:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif