// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUIREPEATBUTTON_H
#define CPUIREPEATBUTTON_H

@class UIImage;


#import "CPUIPlayModeButton.h"

@interface CPUIRepeatButton : CPUIPlayModeButton

@property (retain, nonatomic) UIImage *repeatImage; // ivar: _repeatImage
@property (retain, nonatomic) UIImage *repeatOneImage; // ivar: _repeatOneImage


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setRepeatType:(NSInteger)arg0 ;


@end


#endif