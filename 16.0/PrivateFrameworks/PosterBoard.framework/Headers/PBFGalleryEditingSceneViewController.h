// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFGALLERYEDITINGSCENEVIEWCONTROLLER_H
#define PBFGALLERYEDITINGSCENEVIEWCONTROLLER_H

@class PREditingSceneViewController, UIView, UIImage, NSString;


#import "PBFGalleryOptions.h"

@interface PBFGalleryEditingSceneViewController : PREditingSceneViewController

@property (nonatomic) NSInteger galleryDismissalAction; // ivar: _galleryDismissalAction
@property (retain, nonatomic) PBFGalleryOptions *galleryOptions; // ivar: _galleryOptions
@property (retain, nonatomic) UIView *galleryPreviewComplicationsView; // ivar: _galleryPreviewComplicationsView
@property (nonatomic) CGFloat galleryPreviewCornerRadius; // ivar: _galleryPreviewCornerRadius
@property (nonatomic) CGRect galleryPreviewFrame; // ivar: _galleryPreviewFrame
@property (retain, nonatomic) UIImage *galleryPreviewImage; // ivar: _galleryPreviewImage
@property (copy, nonatomic) NSString *galleryPreviewType; // ivar: _galleryPreviewType
@property (copy, nonatomic) NSString *galleryPreviewUniqueIdentifier; // ivar: _galleryPreviewUniqueIdentifier




@end


#endif