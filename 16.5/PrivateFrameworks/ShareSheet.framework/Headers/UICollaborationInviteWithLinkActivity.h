// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLABORATIONINVITEWITHLINKACTIVITY_H
#define UICOLLABORATIONINVITEWITHLINKACTIVITY_H

@class NSString;
@protocol UICollaborationActivity, SFCollaborationItem, SFCollaborationService;


#import "UIActivity.h"

@interface UICollaborationInviteWithLinkActivity : UIActivity <UICollaborationActivity>



@property (retain, nonatomic) NSObject<SFCollaborationItem> *collaborationItem; // ivar: _collaborationItem
@property (weak, nonatomic) NSObject<SFCollaborationService> *collaborationService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCollaborative;
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
-(BOOL)_allowsAutoCancelOnDismiss;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)canPerformWithCollaborationItem:(id)arg0 activityItems:(id)arg1 ;
-(NSInteger)_defaultSortGroup;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif