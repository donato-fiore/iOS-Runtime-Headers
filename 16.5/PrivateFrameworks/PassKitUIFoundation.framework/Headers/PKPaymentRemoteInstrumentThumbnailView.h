// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREMOTEINSTRUMENTTHUMBNAILVIEW_H
#define PKPAYMENTREMOTEINSTRUMENTTHUMBNAILVIEW_H

@class UIView, UIImageView;



@interface PKPaymentRemoteInstrumentThumbnailView : UIView

@property (retain, nonatomic) UIImageView *cardImageView; // ivar: _cardImageView
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView


-(id)initWithRemotePaymentInstrument:(id)arg0 ;
-(id)initWithRemotePaymentInstrument:(id)arg0 thumbnailSize:(struct CGSize )arg1 ;
-(void)_prepareConstraints;
-(void)_updateCardImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 ;


@end


#endif