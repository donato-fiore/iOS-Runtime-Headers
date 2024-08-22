// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLINKPREVIEWHEADERCONTENTVIEW_H
#define SFLINKPREVIEWHEADERCONTENTVIEW_H

@class UIButton, UILabel, UIImageView, NSArray, NSString;
@protocol SFLinkPreviewHeaderContentViewDelegate;



@interface SFLinkPreviewHeaderContentView : UIButton {
    UILabel *_domainLabel;
    UIButton *_togglePreviewButton;
    UIImageView *_safariIcon;
    NSArray *_domainWithHidePreviewActionConstraints;
    NSArray *_safariIconWithShowPreviewActionConstraints;
}


@property (weak, nonatomic) NSObject<SFLinkPreviewHeaderContentViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic, getter=isPreviewEnabled) BOOL previewEnabled; // ivar: _previewEnabled


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_togglePreviewButtonPressed;
-(void)_updateDomainWithHidePreviewActionConstraints;
-(void)_updateSafariIconWithShowPreviewActionConstraints;
-(void)updateConstraints;


@end


#endif