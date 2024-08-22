// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNONVIEWRESPONDER_H
#define WFNONVIEWRESPONDER_H

@class UIResponder, NSString, UIView;
@protocol WFInputViewMutable, WFNonViewResponderDelegate;



@interface WFNonViewResponder : UIResponder <WFInputViewMutable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFNonViewResponderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (retain, nonatomic) UIView *inputView; // ivar: _inputView
@property (weak, nonatomic) UIResponder *nextResponder; // ivar: _nextResponder
@property (readonly) Class superclass;


-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;


@end


#endif