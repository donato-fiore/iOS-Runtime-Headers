// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTONEUPTRANSITIONVIEW_H
#define PUIMPORTONEUPTRANSITIONVIEW_H

@class NSArray, PXImportMediaProvider, UIImage;
@protocol PUImportOneUpCellDisplayDelegate;


#import "PUImportOneUpCell.h"
#import "PUImportOneUpCellBadgeView.h"

@interface PUImportOneUpTransitionView : PUImportOneUpCell <PUImportOneUpCellDisplayDelegate>



@property (readonly, nonatomic) PUImportOneUpCellBadgeView *badgeView; // ivar: _badgeView
@property (readonly, nonatomic) NSArray *badgeViewOffsetConstraints; // ivar: _badgeViewOffsetConstraints
@property (nonatomic) CGRect initialFrame; // ivar: _initialFrame
@property (nonatomic) CGFloat initialPhotoViewAlpha; // ivar: _initialPhotoViewAlpha
@property (retain, nonatomic) PXImportMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) UIImage *startingImage; // ivar: _startingImage
@property (nonatomic) CGRect targetFrame; // ivar: _targetFrame
@property (nonatomic) CGFloat targetPhotoViewAlpha; // ivar: _targetPhotoViewAlpha


+(CGFloat)interpolatedValueBetweenInitialValue:(CGFloat)arg0 andFinalValue:(CGFloat)arg1 atProgress:(CGFloat)arg2 ;
-(*void)contextForObservingViewModelChanges;
-(CGFloat)currentProgress;
-(NSInteger)importOneUpCell:(id)arg0 requestedThumbnailForImportItem:(id)arg1 completion:(id)arg2 ;
-(id)initWithImportItem:(id)arg0 startingImage:(id)arg1 mediaProvider:(id)arg2 ;
-(void)importOneUpCell:(id)arg0 didRequestCancellationOfThumbnailRequestWithID:(NSInteger)arg1 ;
-(void)importOneUpCell:(id)arg0 requestedBadgeUpdateForImportItem:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setPhotoViewInitialAlpha:(CGFloat)arg0 targetAlpha:(CGFloat)arg1 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)updateAlphaIfNeeded;
-(void)updateBadgeView;
-(void)updateConstraints;


@end


#endif