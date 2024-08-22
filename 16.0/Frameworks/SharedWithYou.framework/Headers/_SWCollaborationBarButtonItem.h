// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWCOLLABORATIONBARBUTTONITEM_H
#define _SWCOLLABORATIONBARBUTTONITEM_H

@class UIBarButtonItem, NSItemProvider;
@protocol UICloudSharingControllerDelegate;


#import "_SWCollaborationButtonView.h"
#import "SWHighlight.h"

@interface _SWCollaborationBarButtonItem : UIBarButtonItem

@property (nonatomic) NSUInteger activeParticipantCount;
@property (retain, nonatomic) NSObject<UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButtonView; // ivar: _collaborationButtonView
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic) BOOL isContentShared;
@property (retain, nonatomic) NSItemProvider *itemProvider;


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