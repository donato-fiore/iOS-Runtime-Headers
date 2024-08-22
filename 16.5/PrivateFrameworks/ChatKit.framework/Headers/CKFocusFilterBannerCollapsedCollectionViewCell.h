// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFOCUSFILTERBANNERCOLLAPSEDCOLLECTIONVIEWCELL_H
#define CKFOCUSFILTERBANNERCOLLAPSEDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, UIButton;
@protocol UIPointerInteractionDelegate, CKFocusFilterBannerDelegate;



@interface CKFocusFilterBannerCollapsedCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CKFocusFilterBannerDelegate> *focusFilterBannerDelegate; // ivar: _focusFilterBannerDelegate
@property (retain, nonatomic) UIButton *focusFilterToggleButton; // ivar: _focusFilterToggleButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFocusFilterEnabled; // ivar: _isFocusFilterEnabled
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_focusFilterToggleButtonSelected:(id)arg0 ;
-(void)_updateFocusFilterToggleButton;


@end


#endif