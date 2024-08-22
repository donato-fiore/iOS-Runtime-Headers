// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTMESSAGESROUNDEDRECTANGLEBUTTON_H
#define PKPEERPAYMENTMESSAGESROUNDEDRECTANGLEBUTTON_H



#import "PKPeerPaymentMessagesButton.h"
#import "PKShapeView.h"

@interface PKPeerPaymentMessagesRoundedRectangleButton : PKPeerPaymentMessagesButton {
    PKShapeView *_maskView;
}




+(struct CGSize )referenceSize;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateMask;
-(void)layoutSubviews;


@end


#endif