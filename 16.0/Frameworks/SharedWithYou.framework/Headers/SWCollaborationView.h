// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCOLLABORATIONVIEW_H
#define SWCOLLABORATIONVIEW_H

@class UIView, UIImage, NSString;
@protocol UICloudSharingControllerDelegate, SWCollaborationViewDelegate;


#import "_SWCollaborationButtonViewImpl.h"

@interface SWCollaborationView : UIView

@property (nonatomic) NSUInteger activeParticipantCount; // ivar: _activeParticipantCount
@property (nonatomic, readonly) _SWCollaborationButtonViewImpl *buttonView;
@property (retain, nonatomic) _SWCollaborationButtonViewImpl *buttonView; // ivar: _buttonView
@property (weak, nonatomic) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate; // ivar: _cloudSharingControllerDelegate
@property (weak, nonatomic) NSObject<UICloudSharingControllerDelegate> *cloudSharingDelegate; // ivar: _cloudSharingDelegate
@property (weak, nonatomic) NSObject<SWCollaborationViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *headerImage; // ivar: _headerImage
@property (copy, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (copy, nonatomic) NSString *manageButtonTitle; // ivar: _manageButtonTitle
@property (retain, nonatomic) UIView *typeErasedButtonView; // ivar: _typeErasedButtonView
@property (retain, nonatomic) UIView *typeErasedButtonView;


-(id)initWithButtonView:(id)arg0 ;
-(id)initWithItemProvider:(id)arg0 ;
-(id)initWithTypeErasedButtonView:(id)arg0 ;
-(void)dismissPopover:(id)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)setContentView:(id)arg0 ;
-(void)setShowManageButton:(BOOL)arg0 ;


@end


#endif