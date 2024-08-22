// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVTHUMBNAILVIEW_H
#define ASVTHUMBNAILVIEW_H

@class UIView, QLItemThumbnailGenerator, NSOperationQueue, NSLayoutConstraint, NSString, QLItem;
@protocol QLPreviewControllerDelegate, ASVThumbnailViewDelegate;


#import "ASVThumbnailButton.h"

@interface ASVThumbnailView : UIView <QLPreviewControllerDelegate>

 {
    ASVThumbnailButton *_button;
    QLItemThumbnailGenerator *_thumbnailGenerator;
    NSOperationQueue *_operationQueue;
    CGSize _lastRequestedThumbnailSize;
    CGFloat _lastRequestedThumbnailScale;
    NSLayoutConstraint *_widthButtonConstraint;
    NSLayoutConstraint *_heightButtonConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASVThumbnailViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize maxThumbnailSize; // ivar: _maxThumbnailSize
@property (readonly) Class superclass;
@property (retain, nonatomic) QLItem *thumbnailItem; // ivar: _thumbnailItem


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(void)_commonInit;
-(void)previewCurrentItem;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateThumbnailIfNeeded;


@end


#endif