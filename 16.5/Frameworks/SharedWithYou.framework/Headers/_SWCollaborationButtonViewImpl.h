// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCOLLABORATIONBUTTONVIEWIMPL_H
#define _SWCOLLABORATIONBUTTONVIEWIMPL_H

@class UIView, UIImage, NSString;
@protocol UICloudSharingControllerDelegate, SWCollaborationViewDelegate;


#import "SWCollaborationView.h"

@interface _SWCollaborationButtonViewImpl : UIView {
    ? sBehaviors;
    ? sharedWithYouCenter;
    ? headerTitle;
    ? headerSubtitle;
    ? _isContentShared;
    ? highlightSubscriptionCancellable;
    ? presentingViewController;
    ? attributionView;
    ? centerXAnchorHiddenLabel;
    ? attributionViewXAnchorVisibleLabel;
    ? labelXAnchorHidden;
    ? containerView;
    ? label;
    ? button;
    ? detailViewController;
    ? isRTL;
    ? numberFormatter;
}


@property (nonatomic) NSUInteger activeParticipantCount; // ivar: activeParticipantCount
@property (nonatomic, weak) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic, weak) NSObject<SWCollaborationViewDelegate> *delegate; // ivar: delegate
@property (nonatomic, retain) UIImage *headerImage; // ivar: headerImage
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, weak) SWCollaborationView *outerButton; // ivar: outerButton


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)tintColorDidChange;
-(void)updatePlaceHolderSymbolScale:(NSInteger)arg0 weight:(NSInteger)arg1 pointSize:(CGFloat)arg2 ;


@end


#endif