// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCOLLABORATIONBARBUTTONITEM_H
#define _SWCOLLABORATIONBARBUTTONITEM_H

@class UIBarButtonItem, NSString, NSItemProvider;
@protocol UIPopoverPresentationControllerDelegate, UICloudSharingControllerDelegate;


#import "_SWCollaborationButtonView.h"
#import "SWHighlight.h"

@interface _SWCollaborationBarButtonItem : UIBarButtonItem <UIPopoverPresentationControllerDelegate>



@property (nonatomic) NSUInteger activeParticipantCount;
@property (retain, nonatomic) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButtonView; // ivar: _collaborationButtonView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic) BOOL isContentShared;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (readonly) Class superclass;


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationButtonView:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 detailViewListContent:(id)arg1 ;
-(id)initWithItemProvider:(id)arg0 ;
-(void)dismissPopoverAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)setDetailViewListContent:(id)arg0 ;
-(void)setManageButtonTitle:(id)arg0 ;
-(void)setShowManageButton:(BOOL)arg0 ;


@end


#endif