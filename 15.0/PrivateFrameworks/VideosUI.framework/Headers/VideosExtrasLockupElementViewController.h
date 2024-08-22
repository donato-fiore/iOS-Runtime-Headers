// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASLOCKUPELEMENTVIEWCONTROLLER_H
#define VIDEOSEXTRASLOCKUPELEMENTVIEWCONTROLLER_H

@class UIView, UILabel, NSLayoutConstraint, MPUContentSizeLayoutConstraint, NSString, IKLockupElement;


#import "VideosExtrasViewElementViewController.h"
#import "VideosExtrasConstrainedArtworkContainerView.h"

@interface VideosExtrasLockupElementViewController : VideosExtrasViewElementViewController {
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_artworkContainerTopConstraint;
    NSLayoutConstraint *_artworkContainerXConstraint;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    CGSize _artworkSize;
    NSLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textHeightConstraint;
    NSLayoutConstraint *_textCenterYConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_titleVerticalConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    MPUContentSizeLayoutConstraint *_descriptionBaselineConstraint;
}


@property (readonly) NSString *descriptionTextStyle;
@property (readonly) IKLockupElement *viewElement;


-(id)initWithViewElement:(id)arg0 ;
-(void)_configureArtworkViewForImageElement:(id)arg0 overlays:(id)arg1 ;
-(void)_configureDescriptionLabelForTextElement:(id)arg0 ;
-(void)_configureSubtitleLabelForTextElement:(id)arg0 ;
-(void)_configureTitleLabelForTextElement:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_prepareLayout;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif