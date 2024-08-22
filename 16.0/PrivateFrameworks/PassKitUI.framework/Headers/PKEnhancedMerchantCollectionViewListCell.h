// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKENHANCEDMERCHANTCOLLECTIONVIEWLISTCELL_H
#define PKENHANCEDMERCHANTCOLLECTIONVIEWLISTCELL_H

@class UICollectionViewListCell, UIButton, NSString, UILabel, PKAccountEnhancedMerchant, UIImageView, UIListContentView;
@protocol PKLinkedApplicationObserver, PKEnhancedMerchantCellDelegate;


#import "PKLinkedApplication.h"

@interface PKEnhancedMerchantCollectionViewListCell : UICollectionViewListCell <PKLinkedApplicationObserver>

 {
    id<PKEnhancedMerchantCellDelegate> *_delegate;
    PKLinkedApplication *_linkedApplication;
}


@property (retain, nonatomic) UIButton *appStoreButton; // ivar: _appStoreButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailedDescriptionLabel; // ivar: _detailedDescriptionLabel
@property (readonly, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant; // ivar: _enhancedMerchant
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) PKLinkedApplication *linkedApplication;
@property (retain, nonatomic) UIListContentView *listContentView; // ivar: _listContentView
@property (retain, nonatomic) UIButton *mapsButton; // ivar: _mapsButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *websiteButton; // ivar: _websiteButton


-(id)_buttonAttributedStringForString:(id)arg0 ;
-(id)_buttonFont;
-(id)_visibleButtons;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_dispatchActionToDelegate:(NSInteger)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_initializeViewsIfNecessary;
-(void)_updateAppStoreButtonBasedOnLinkedApplicationState;
-(void)_updateImageViewDynamicColors;
-(void)dealloc;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)updateWithAccountEnhancedMerchant:(id)arg0 ;


@end


#endif