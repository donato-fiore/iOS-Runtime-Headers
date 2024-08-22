// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTEUITABLEVIEWCELL_H
#define REMOTEUITABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UIButton, UIColor, UIView;


#import "RUIWebContainerView.h"

@interface RemoteUITableViewCell : UITableViewCell {
    UIImageView *_invalidRowView;
    BOOL _didSetupEditableTextFieldLargeText;
    UIButton *_detailLinkButton;
    id *_detailLinkHandler;
    UIColor *_accessoryColor;
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
-(id)detailLinkButton;
-(id)editableTextField;
-(void)_accessoriesChanged;
-(void)_detailLinkPressed;
-(void)_showActivityIndicatorAccessory;
-(void)addDetailLinkButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDetailLinkText:(id)arg0 handler:(id)arg1 ;
-(void)setHTMLData:(id)arg0 sourceURL:(id)arg1 delegate:(id)arg2 ;
-(void)setRowInvalid:(BOOL)arg0 ;


@end


#endif