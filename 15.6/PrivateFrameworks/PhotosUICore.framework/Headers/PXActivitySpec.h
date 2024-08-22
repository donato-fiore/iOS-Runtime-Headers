// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXACTIVITYSPEC_H
#define PXACTIVITYSPEC_H


#import <Foundation/Foundation.h>


@interface PXActivitySpec : NSObject



+(CGFloat)activityCaptionCellTopToLikeButtonTopDynamicDistance;
+(CGFloat)activityCaptionCellTopToTitleBaselineDynamicDistance;
+(CGFloat)activityCaptionSubtitleBaselineToCellBottomDynamicDistance;
+(CGFloat)activityCaptionSubtitleBaselineToCellBottomDynamicDistance2;
+(CGFloat)activityCaptionTitleBaselineToSubtitleBaselineDynamicDistance;
+(CGFloat)captionDynamicDistance;
+(CGFloat)headerDynamicBottomSubtitleToBottomDistance;
+(CGFloat)headerDynamicBottomTitleToBottomSubtitleDistance;
+(CGFloat)headerDynamicTopToBottomTitleDistance;
+(CGFloat)invitationAlbumTitleBottomDynamicDistance;
+(CGFloat)invitationAvatarToTextBaselineDynamicDistance;
+(CGFloat)invitationButtonToJunkBaselineDynamicDistance;
+(CGFloat)invitationJunkBottomDynamicDistance;
+(CGFloat)invitationSubscriberInfoToButtonsDynamicDistance;
+(CGFloat)invitationTextToAlbumTitleBaselineDynamicDistance;
+(id)_activityAlbumTitleTextAttributes;
+(id)_activityAlbumTitleWhiteTextAttributes;
+(id)_activityHeaderTextAttributes;
+(id)_activityHeaderWhiteTextAttributes;
+(id)_activityPosterTextAttributes;
+(id)_activityPosterWhiteTextAttributes;
+(id)activityAlbumTitleTextAttributesForTextColorStyle:(NSUInteger)arg0 ;
+(id)activityCaptionTextAttributes;
+(id)activityCaptionTextEmphasizedAttributes;
+(id)activityChevronImage;
+(id)activityDateSubtitleTextAttributes;
+(id)activityHeaderTextAttributesForTextColorStyle:(NSUInteger)arg0 ;
+(id)activityPosterTextAttributesForTextColorStyle:(NSUInteger)arg0 ;
+(id)invitationAlbumTitleTextAttributes;
+(id)invitationHeaderImage;
+(id)invitationInfoTextAttributes;
+(id)invitationParentViewBackgroundColor:(BOOL)arg0 ;
+(id)invitationReportJunkLinkAttributes;
+(id)invitationReportJunkTextAttributes;
+(id)invitationSubscriberInfoTextAttributes;
+(id)invitationSubtitleTextAttributes;
+(id)invitationTextAttributes;
+(id)sharedAlbumActivityGadgetCaptionTextAttributes;


@end


#endif