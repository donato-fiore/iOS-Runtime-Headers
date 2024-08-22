// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSBUTTON_H
#define CPSBUTTON_H

@class UIButton, NSString, NSUUID, UITapGestureRecognizer;
@protocol CPSControl, CPSButtonDelegate;



@interface CPSButton : UIButton <CPSControl>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) UITapGestureRecognizer *pressTapRecognizer; // ivar: _pressTapRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *touchTapRecognizer; // ivar: _touchTapRecognizer


+(id)buttonWithType:(NSInteger)arg0 ;
-(void)_addGestureRecognizers;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)buttonSelected:(id)arg0 interactionModel:(NSUInteger)arg1 ;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif