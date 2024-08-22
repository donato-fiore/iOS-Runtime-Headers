// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCKPMESSAGECARDSECTIONATTACHMENTVIEW_H
#define SCKPMESSAGECARDSECTIONATTACHMENTVIEW_H

@class UIView, NSString, LPLinkMetadata, UIImageView, LPLinkView, UILabel;
@protocol LPLinkViewDelegate, SCKPMessageCardSectionAttachmentViewDelegate;


#import "SCKPGradientView.h"

@interface SCKPMessageCardSectionAttachmentView : UIView <LPLinkViewDelegate>



@property NSUInteger alignmentStyle; // ivar: _alignmentStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SCKPMessageCardSectionAttachmentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) LPLinkMetadata *fullMetadata; // ivar: _fullMetadata
@property (retain) SCKPGradientView *gradientView; // ivar: _gradientView
@property (readonly) NSUInteger hash;
@property (retain) UIView *imageContainer; // ivar: _imageContainer
@property (retain) UIImageView *imageView; // ivar: _imageView
@property (retain) LPLinkView *linkView; // ivar: _linkView
@property (retain) UIImageView *livePhotoBadge; // ivar: _livePhotoBadge
@property (readonly) Class superclass;
@property (retain) UILabel *videoDurationLabel; // ivar: _videoDurationLabel


-(id)_thumbnailImageForVideoURL:(id)arg0 ;
-(id)_videoDurationStringForVideoURL:(id)arg0 ;
-(id)initWithAttachment:(id)arg0 ;
-(struct CGSize )_translateImageSizeForMaxSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_linkViewMetadataDidBecomeComplete:(id)arg0 ;
-(void)_loadAttachment:(id)arg0 ;
-(void)_loadAttachmentFromFileURL:(id)arg0 type:(int)arg1 ;
-(void)_loadLinkWith:(id)arg0 metadata:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif