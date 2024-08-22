// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIOFFERVIEW_H
#define SKUIOFFERVIEW_H

@class NSMapTable, NSString, NSNumber, UIButton, NSMutableArray;
@protocol SKUIItemOfferButtonDelegate, SKUIViewElementView, SKUIOfferViewDelegate;


#import "SKUIViewReuseView.h"

@interface SKUIOfferView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIViewElementView>



@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (retain, nonatomic) NSMapTable *buttonElements; // ivar: _buttonElements
@property (retain, nonatomic) NSMapTable *buyButtonDescriptorToButton; // ivar: _buyButtonDescriptorToButton
@property (nonatomic, getter=isCompactModeEnabled) BOOL compactModeEnabled; // ivar: _compactModeEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIOfferViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *hlsID; // ivar: _hlsID
@property (retain, nonatomic) UIButton *hlsPlayButton; // ivar: _hlsPlayButton
@property (nonatomic) NSInteger metadataPosition; // ivar: _metadataPosition
@property (retain, nonatomic) NSMutableArray *metadataViews; // ivar: _metadataViews
@property (retain, nonatomic) NSMapTable *notices; // ivar: _notices
@property (retain, nonatomic) NSMutableArray *offerButtonViews; // ivar: _offerButtonViews
@property (readonly, nonatomic) NSString *offerViewStateDescription;
@property (nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation; // ivar: _showingConfirmation
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForButton:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg0 context:(id)arg1 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_sendWillAnimate;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg0 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif