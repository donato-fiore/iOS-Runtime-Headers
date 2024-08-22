// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTMESSAGESROUNDEDBUTTON_H
#define PKPEERPAYMENTMESSAGESROUNDEDBUTTON_H



#import "PKPeerPaymentMessagesButton.h"
#import "PKShapeView.h"

@interface PKPeerPaymentMessagesRoundedButton : PKPeerPaymentMessagesButton {
    PKShapeView *_maskView;
}




+(struct CGSize )referenceSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateMask;
-(void)layoutSubviews;


@end


#endif