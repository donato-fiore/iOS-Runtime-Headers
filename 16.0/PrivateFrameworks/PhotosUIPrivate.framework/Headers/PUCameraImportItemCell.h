// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCAMERAIMPORTITEMCELL_H
#define PUCAMERAIMPORTITEMCELL_H

@class UICollectionViewCell, UIView, NSString, UITextField, PXImportItemViewModel, UIActivityIndicatorView;
@protocol PXChangeObserver, PUCameraImportItemCellDelegate;


#import "PUPhotoView.h"

@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver>

 {
    CGRect _badgeTapZone;
}


@property (retain, nonatomic) UIView *badgeContainerView; // ivar: _badgeContainerView
@property (nonatomic) NSInteger badgeType; // ivar: _badgeType
@property (retain, nonatomic) UIView *badgeView; // ivar: _badgeView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITextField *debugTextField; // ivar: _debugTextField
@property (weak, nonatomic) NSObject<PUCameraImportItemCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsBadgeUpdate; // ivar: _needsBadgeUpdate
@property (readonly, nonatomic) BOOL needsThumbnailRefresh; // ivar: _needsThumbnailRefresh
@property (retain, nonatomic) PUPhotoView *photoView; // ivar: _photoView
@property (retain, nonatomic) PXImportItemViewModel *representedImportItem; // ivar: _representedImportItem
@property (nonatomic) CGRect scaledDisplayRect; // ivar: _scaledDisplayRect
@property (nonatomic) BOOL selectable; // ivar: _selectable
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (nonatomic) NSInteger thumbnailRequestID; // ivar: _thumbnailRequestID


+(CGFloat)alphaForSelectedCells;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldBeginGestureForPoint:(struct CGPoint )arg0 ;
-(NSInteger)dragState;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityCustomActions;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_filledPhotosRectForImage:(id)arg0 ;
-(void)_enterOneUpAction;
-(void)_fetchThumbnailReady;
-(void)_selectAction;
-(void)accessibilityElementDidBecomeFocused;
-(void)cancelThumbnailLoadIfActive;
-(void)clearImage;
-(void)dealloc;
-(void)handleTapGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)refreshThumbnail;
-(void)setCachedImage:(id)arg0 isPlaceholder:(BOOL)arg1 ;
-(void)setPhotoImage:(id)arg0 withSize:(struct CGSize )arg1 fillMode:(NSInteger)arg2 videoDuration:(CGFloat)arg3 isPlaceholder:(BOOL)arg4 ;
-(void)showActivityBadge:(BOOL)arg0 ;
-(void)updateBadgeUIIfNeeded;
-(void)updateDebugLabel:(id)arg0 ;


@end


#endif