// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHEVRONBUTTON_H
#define CNCHEVRONBUTTON_H

@class UIButton, CNAtomView<CNChevronButtonMenuDelegate>;



@interface CNChevronButton : UIButton

@property (weak, nonatomic) CNAtomView<CNChevronButtonMenuDelegate> *delegateView; // ivar: _delegateView


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif