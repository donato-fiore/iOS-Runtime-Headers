// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSDOWNLOADATTACHMENTSHEADERFOOTERVIEW_H
#define CKDETAILSDOWNLOADATTACHMENTSHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSString, UITextView, UIColor, UIImageView, NSLayoutConstraint;
@protocol CKDetailsHeaderFooterView, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate;



@interface CKDetailsDownloadAttachmentsHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>



@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (retain, nonatomic) UITextView *buttonTextView; // ivar: _buttonTextView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKDetailsDownloadAttachmentsHeaderFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIColor *downloadButtonTextColor; // ivar: _downloadButtonTextColor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iCloudImageView; // ivar: _iCloudImageView
@property (nonatomic) BOOL logoHidden; // ivar: _logoHidden
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (retain, nonatomic) NSLayoutConstraint *titleTextTopToLogoConstraint; // ivar: _titleTextTopToLogoConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleTextTopToViewConstraint; // ivar: _titleTextTopToViewConstraint
@property (retain, nonatomic) UITextView *titleTextView; // ivar: _titleTextView


+(id)reuseIdentifier;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)handleUserTap:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif