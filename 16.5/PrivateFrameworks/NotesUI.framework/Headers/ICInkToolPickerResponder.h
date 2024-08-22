// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINKTOOLPICKERRESPONDER_H
#define ICINKTOOLPICKERRESPONDER_H

@class UIView;
@protocol ICInkToolPickerResponderDelegate;



@interface ICInkToolPickerResponder : UIView

@property (weak, nonatomic) NSObject<ICInkToolPickerResponderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL preventFirstResponder; // ivar: _preventFirstResponder


-(BOOL)canBecomeFirstResponder;
-(id)inputAssistantItem;


@end


#endif