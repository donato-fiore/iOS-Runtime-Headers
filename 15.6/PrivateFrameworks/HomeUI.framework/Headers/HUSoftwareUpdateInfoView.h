// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSOFTWAREUPDATEINFOVIEW_H
#define HUSOFTWAREUPDATEINFOVIEW_H

@class UIView, NSString, UIImage, UIImageView, HFItem, UIStackView, UILabel, NSLayoutConstraint;
@protocol UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol, HUSoftwareUpdateInternalResizingDelegate, HUResizableCellDelegate;


#import "HUSoftwareUpdateAnimatedIcon.h"
#import "HUInlineWebContainerView.h"

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol>



@property (retain, nonatomic) HUSoftwareUpdateAnimatedIcon *animatedGearView; // ivar: _animatedGearView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *gearBackgroundImage; // ivar: _gearBackgroundImage
@property (retain, nonatomic) UIImageView *gearBackgroundImageView; // ivar: _gearBackgroundImageView
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUSoftwareUpdateInternalResizingDelegate> *internalViewResizingDelegate; // ivar: _internalViewResizingDelegate
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (retain, nonatomic) UILabel *publisherNameLabel; // ivar: _publisherNameLabel
@property (retain, nonatomic) NSLayoutConstraint *releaseNotesHeightConstraint; // ivar: _releaseNotesHeightConstraint
@property (retain, nonatomic) HUInlineWebContainerView *releaseNotesSummaryView; // ivar: _releaseNotesSummaryView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) UILabel *sizeLabel; // ivar: _sizeLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *updateNameLabel; // ivar: _updateNameLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateReleaseNotesHeightIfNeeded;
-(void)inlineWebContainerViewDidFinishLoadingContent:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif