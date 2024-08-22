// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTMESSAGESBUTTON_H
#define PKPEERPAYMENTMESSAGESBUTTON_H

@class UIButton, UIColor, UIActivityIndicatorView;



@interface PKPeerPaymentMessagesButton : UIButton {
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIActivityIndicatorView *_spinner;
}


@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL showsActivityIndicator; // ivar: _showsActivityIndicator


+(struct CGSize )referenceSize;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 usePlatterColor:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif