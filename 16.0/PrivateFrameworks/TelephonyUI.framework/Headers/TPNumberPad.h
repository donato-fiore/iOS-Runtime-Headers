// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPNUMBERPAD_H
#define TPNUMBERPAD_H

@class UIControl, NSMutableArray, NSArray;



@interface TPNumberPad : UIControl {
    NSMutableArray *_buttons;
}


@property (nonatomic) CGFloat buttonBackgroundAlpha; // ivar: _buttonBackgroundAlpha
@property (retain) NSArray *buttons;
@property (nonatomic) BOOL numberButtonsEnabled; // ivar: _numberButtonsEnabled


-(id)initWithButtons:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_addButton:(id)arg0 ;
-(void)_layoutGrid;
-(void)buttonCancelled:(id)arg0 ;
-(void)buttonDown:(id)arg0 ;
-(void)buttonLongPressed:(id)arg0 ;
-(void)buttonLongPressedViaGesture:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)buttonUp:(id)arg0 ;
-(void)buttonUpOutside:(id)arg0 ;
-(void)dealloc;
-(void)handleCurrentLocaleDidChangeNotification:(id)arg0 ;
-(void)replaceButton:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif