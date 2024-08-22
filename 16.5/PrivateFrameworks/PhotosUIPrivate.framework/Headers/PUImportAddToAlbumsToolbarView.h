// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTADDTOALBUMSTOOLBARVIEW_H
#define PUIMPORTADDTOALBUMSTOOLBARVIEW_H

@class UIView, UIButton, NSString, UILabel;
@protocol PUImportAddToAlbumsToolbarViewDelegate;



@interface PUImportAddToAlbumsToolbarView : UIView

@property (weak, nonatomic) NSObject<PUImportAddToAlbumsToolbarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIButton *destinationButton; // ivar: _destinationButton
@property (retain, nonatomic) NSString *destinationDescriptionTitle; // ivar: _destinationDescriptionTitle
@property (retain, nonatomic) UILabel *destinationLabel; // ivar: _destinationLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_destinationDescription;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )accessibilityFrame;
-(struct CGSize )intrinsicContentSize;
-(void)_animateButtonAlpha:(CGFloat)arg0 ;
-(void)_setupButton;
-(void)_setupSubviews;
-(void)_updateButtonText;
-(void)buttonPressed:(id)arg0 ;
-(void)buttonTouchDown:(id)arg0 ;
-(void)buttonTouchDragInside:(id)arg0 ;
-(void)buttonTouchDragOutside:(id)arg0 ;


@end


#endif