// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STROTATINGDISCLOSURECELL_H
#define STROTATINGDISCLOSURECELL_H

@class PSTableCell, NSString, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface STRotatingDisclosureCell : PSTableCell <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_userPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSpecifier:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif