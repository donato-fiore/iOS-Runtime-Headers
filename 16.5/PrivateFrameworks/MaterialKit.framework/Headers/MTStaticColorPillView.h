// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSTATICCOLORPILLVIEW_H
#define MTSTATICCOLORPILLVIEW_H

@class UIColor;


#import "MTPillView.h"

@interface MTStaticColorPillView : MTPillView

@property (retain, nonatomic) UIColor *pillColor; // ivar: _pillColor


-(id)backgroundColor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 settings:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif