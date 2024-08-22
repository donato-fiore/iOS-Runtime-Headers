// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFEEDINVITATIONCELL_H
#define PUFEEDINVITATIONCELL_H

@class UILabel, NSString, PXSharedAlbumHeaderView, PXFeedInvitationSectionInfo, PXSharedAlbumInvitationView;
@protocol PXSharedAlbumInvitationViewDelegate;


#import "PUFeedCell.h"

@interface PUFeedInvitationCell : PUFeedCell <PXSharedAlbumInvitationViewDelegate>



@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // ivar: _invitationSectionInfo
@property (retain, nonatomic) PXSharedAlbumInvitationView *invitationView; // ivar: _invitationView
@property (nonatomic) BOOL showFooter; // ivar: _showFooter
@property (nonatomic) BOOL showHeader; // ivar: _showHeader
@property (readonly) Class superclass;
@property (nonatomic) BOOL useInPopover; // ivar: _useInPopover


-(id)_delegate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateColors;
-(void)_updateDate;
-(void)_updateFooter;
-(void)_updateHeaderView;
-(void)_updateInvitationView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)sharedAlbumInvitationView:(id)arg0 didAccept:(BOOL)arg1 ;
-(void)sharedAlbumInvitationView:(id)arg0 presentViewController:(id)arg1 ;
-(void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif