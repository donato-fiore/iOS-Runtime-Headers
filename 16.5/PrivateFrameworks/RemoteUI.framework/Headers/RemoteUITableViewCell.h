// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMOTEUITABLEVIEWCELL_H
#define REMOTEUITABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UIButton, UIColor, UIImage, UIView;


#import "RUIWebContainerView.h"

@interface RemoteUITableViewCell : UITableViewCell {
    UIImageView *_invalidRowView;
    BOOL _didSetupEditableTextFieldLargeText;
    UIButton *_detailLinkButton;
    id *_detailLinkHandler;
    UIColor *_accessoryColor;
    UIImage *_image;
    UIEdgeInsets _imagePadding;
    UIColor *_imageTintColor;
}


@property (nonatomic) BOOL activityIndicatorVisible; // ivar: _activityIndicatorVisible
@property (nonatomic) BOOL forceFullSizeDetailLabel; // ivar: _forceFullSizeDetailLabel
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL leftAlignDetailLabel; // ivar: _leftAlignDetailLabel
@property (nonatomic) NSInteger remoteUIAccessoryType; // ivar: _remoteUIAccessoryType
@property (retain, nonatomic) UIView *remoteUIAccessoryView; // ivar: _remoteUIAccessoryView
@property (retain, nonatomic) RUIWebContainerView *webContainerView; // ivar: _webContainerView


-(CGFloat)webViewWidth;
-(id)_checkmarkImage:(BOOL)arg0 ;
-(id)_disclosureChevronImage:(BOOL)arg0 ;
-(id)_paddedImageWithImage:(id)arg0 size:(struct CGSize )arg1 insets:(struct UIEdgeInsets )arg2 ;
-(id)detailLinkButton;
-(id)editableTextField;
-(struct CGRect )expand:(struct CGRect )arg0 by:(struct CGSize )arg1 anchor:(struct CGPoint )arg2 ;
-(void)_accessoriesChanged;
-(void)_detailLinkPressed;
-(void)_showActivityIndicatorAccessory;
-(void)addDetailLinkButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDetailLinkText:(id)arg0 handler:(id)arg1 ;
-(void)setHTMLData:(id)arg0 sourceURL:(id)arg1 delegate:(id)arg2 ;
-(void)setImage:(id)arg0 padding:(struct UIEdgeInsets )arg1 tintColor:(id)arg2 ;
-(void)setRowInvalid:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif