// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUILEADINGCONTACTVIEWCONTROLLER_H
#define SEARCHUILEADINGCONTACTVIEWCONTROLLER_H

@class NSString, NUIContainerBoxView;
@protocol CNAvatarViewDelegate;


#import "SearchUILeadingViewController.h"
#import "SearchUIImageView.h"
#import "SearchUIContactsThumbnailView.h"

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>



@property (retain, nonatomic) SearchUIImageView *appIconBadgeView; // ivar: _appIconBadgeView
@property (retain, nonatomic) SearchUIContactsThumbnailView *avatarView; // ivar: _avatarView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NUIContainerBoxView *view;


+(BOOL)supportsRowModel:(id)arg0 ;
-(BOOL)shouldVerticallyCenter;
-(NSUInteger)type;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg0 suggestedKeysToFetch:(id)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)setupView;
-(void)hide;
-(void)setUsesCompactWidth:(BOOL)arg0 ;
-(void)updateWithContacts:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg0 ;


@end


#endif