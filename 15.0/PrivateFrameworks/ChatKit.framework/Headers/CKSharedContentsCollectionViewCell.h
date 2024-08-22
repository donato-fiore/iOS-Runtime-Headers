// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSHAREDCONTENTSCOLLECTIONVIEWCELL_H
#define CKSHAREDCONTENTSCOLLECTIONVIEWCELL_H

@class UIImageView, NSString, UIImage, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, CKSharedContentsCollectionViewCellDelegate;


#import "CKSharedAssetCollectionViewCell.h"

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate>



@property (retain, nonatomic) UIImageView *checkmarkView; // ivar: _checkmarkView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKSharedContentsCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *previewImage; // ivar: _previewImage
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(id)reuseIdentifier;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)copy:(id)arg0 ;
-(void)delete:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)more:(id)arg0 ;
-(void)saveAttachment:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupTapGestureRecognizer;
-(void)toggleCheckmarkViewWithEnabled:(BOOL)arg0 ;


@end


#endif