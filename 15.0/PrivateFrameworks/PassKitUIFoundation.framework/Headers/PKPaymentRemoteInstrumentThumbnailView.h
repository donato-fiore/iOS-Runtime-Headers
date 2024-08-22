// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREMOTEINSTRUMENTTHUMBNAILVIEW_H
#define PKPAYMENTREMOTEINSTRUMENTTHUMBNAILVIEW_H

@class UIView, UIImageView;



@interface PKPaymentRemoteInstrumentThumbnailView : UIView

@property (retain, nonatomic) UIImageView *cardImageView; // ivar: _cardImageView
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView


-(id)initWithRemotePaymentInstrument:(id)arg0 ;
-(void)_prepareConstraints;
-(void)_updateCardImage:(struct CGImage *)arg0 ;


@end


#endif