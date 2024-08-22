// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT19UISTEPPERLENGTHCELL_H
#define _TTC16MAGNIFIERSUPPORT19UISTEPPERLENGTHCELL_H

@class UITableViewCell;



@interface _TtC16MagnifierSupport19UIStepperLengthCell : UITableViewCell {
    ? _distanceStepper;
    ? _lengthMeasure;
    ? _valueChangedHandler;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)distanceStepperValueChanged:(id)arg0 ;


@end


#endif