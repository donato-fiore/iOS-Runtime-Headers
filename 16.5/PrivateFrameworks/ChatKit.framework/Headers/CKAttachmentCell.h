// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATTACHMENTCELL_H
#define CKATTACHMENTCELL_H

@class UICollectionViewCell, UIImageView, NSString, NSArray, UIImage, UITapGestureRecognizer;
@protocol CKAnimationTimerObserver, UIGestureRecognizerDelegate, CKAttachmentCellDelegate;


#import "CKAnimatedImage.h"
#import "CKAttachmentItem.h"

@interface CKAttachmentCell : UICollectionViewCell <CKAnimationTimerObserver, UIGestureRecognizerDelegate>



@property (retain, nonatomic) CKAnimatedImage *animatedImage; // ivar: _animatedImage
@property (retain, nonatomic) UIImageView *checkmarkView; // ivar: _checkmarkView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAttachmentCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (copy, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *irisBadgeView; // ivar: _irisBadgeView
@property (nonatomic) BOOL isIrisAsset; // ivar: _isIrisAsset
@property (retain, nonatomic) CKAttachmentItem *representedObject; // ivar: _representedObject
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGImage *)_cgImageForUIImage:(id)arg0 ;
-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)layoutSubviews;
-(void)more:(id)arg0 ;
-(void)prepareForReuse;
-(void)saveAttachment:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)updateAnimationTimerObserving;


@end


#endif