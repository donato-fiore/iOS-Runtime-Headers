// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUFORWARDINGTOUCHNAVIGATIONBAR_H
#define TUFORWARDINGTOUCHNAVIGATIONBAR_H

@class UINavigationBar, NSArray;



@interface TUForwardingTouchNavigationBar : UINavigationBar

@property (nonatomic, copy) NSArray *accessibilityElements;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif