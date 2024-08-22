// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FACHILDTRANSFERINVITEVIEW_H
#define FACHILDTRANSFERINVITEVIEW_H

@class UIView, UILabel, NSString;
@protocol FAInviteViewProtocol;



@interface FAChildTransferInviteView : UIView <FAInviteViewProtocol>

 {
    UILabel *_titleLabel;
    UILabel *_primaryLabel;
    UILabel *_detailsLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_heightForText:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)_heightForTitle:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(id)_labelWithCenteredText:(id)arg0 ;
-(id)initWithInvite:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif