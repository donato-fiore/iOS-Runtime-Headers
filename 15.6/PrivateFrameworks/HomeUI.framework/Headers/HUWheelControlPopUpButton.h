// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUWHEELCONTROLPOPUPBUTTON_H
#define HUWHEELCONTROLPOPUPBUTTON_H

@class UIButton, NSString, NSFormatter, NSArray;
@protocol HUControlView, HUControlViewDelegate;



@interface HUWheelControlPopUpButton : UIButton <HUControlView>



@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value; // ivar: _value
@property (retain, nonatomic) NSFormatter *valueFormatter; // ivar: _valueFormatter
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(id)_createMenu;


@end


#endif