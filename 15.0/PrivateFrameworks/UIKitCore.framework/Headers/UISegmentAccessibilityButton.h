// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISEGMENTACCESSIBILITYBUTTON_H
#define UISEGMENTACCESSIBILITYBUTTON_H



#import "UIButton.h"
#import "UISegment.h"

@interface UISegmentAccessibilityButton : UIButton

@property (retain, nonatomic) UISegment *segment; // ivar: _segment


+(id)buttonWithSegment:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif