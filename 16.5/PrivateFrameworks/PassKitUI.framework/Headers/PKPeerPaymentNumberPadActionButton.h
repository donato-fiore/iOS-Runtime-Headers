// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTNUMBERPADACTIONBUTTON_H
#define PKPEERPAYMENTNUMBERPADACTIONBUTTON_H



#import "PKPeerPaymentMessagesButton.h"
#import "PKShapeView.h"

@interface PKPeerPaymentNumberPadActionButton : PKPeerPaymentMessagesButton {
    PKShapeView *_maskView;
}


@property (nonatomic) NSUInteger action; // ivar: _action


+(struct CGSize )referenceSize;
-(id)_titleForAction:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateMask;
-(void)layoutSubviews;


@end


#endif