// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKROUNDBUTTON_H
#define GKROUNDBUTTON_H

@class UIImage;


#import "GKButton.h"

@interface GKRoundButton : GKButton

@property (retain, nonatomic) UIImage *backgroundImage;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_highlightBounds;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)tintColorDidChange;


@end


#endif