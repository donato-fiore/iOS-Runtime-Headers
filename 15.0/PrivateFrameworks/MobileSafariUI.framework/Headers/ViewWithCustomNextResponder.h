// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIEWWITHCUSTOMNEXTRESPONDER_H
#define VIEWWITHCUSTOMNEXTRESPONDER_H

@class UIView, UIResponder;



@interface ViewWithCustomNextResponder : UIView

@property (weak, nonatomic) UIResponder *customNextResponder; // ivar: _customNextResponder


-(id)nextResponder;


@end


#endif