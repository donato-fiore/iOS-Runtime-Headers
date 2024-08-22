// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFGALLERYEDITINGSCENEVIEWCONTROLLER_H
#define PBFGALLERYEDITINGSCENEVIEWCONTROLLER_H

@class PREditingSceneViewController, PRPosterDescriptorGalleryOptions, UIView, UIImage, NSString;


#import "PBFGalleryOptions.h"

@interface PBFGalleryEditingSceneViewController : PREditingSceneViewController

@property (retain, nonatomic) PRPosterDescriptorGalleryOptions *descriptorGalleryOptions; // ivar: _descriptorGalleryOptions
@property (nonatomic) NSInteger galleryDismissalAction; // ivar: _galleryDismissalAction
@property (retain, nonatomic) PBFGalleryOptions *galleryOptions; // ivar: _galleryOptions
@property (nonatomic) NSUInteger galleryPresentationStyle; // ivar: _galleryPresentationStyle
@property (retain, nonatomic) UIView *galleryPreviewComplicationsView; // ivar: _galleryPreviewComplicationsView
@property (nonatomic) CGFloat galleryPreviewCornerRadius; // ivar: _galleryPreviewCornerRadius
@property (nonatomic) CGRect galleryPreviewFrame; // ivar: _galleryPreviewFrame
@property (retain, nonatomic) UIImage *galleryPreviewImage; // ivar: _galleryPreviewImage
@property (copy, nonatomic) NSString *galleryPreviewType; // ivar: _galleryPreviewType
@property (copy, nonatomic) NSString *galleryPreviewUniqueIdentifier; // ivar: _galleryPreviewUniqueIdentifier




@end


#endif