// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTONEUPSCRUBBERCELL_H
#define PUIMPORTONEUPSCRUBBERCELL_H

@class NSString, PXImportItemViewModel, UIActivityIndicatorView;
@protocol PXChangeObserver, PUImportOneUpScrubberCellDisplayDelegate;


#import "PUReviewScrubberCell.h"

@interface PUImportOneUpScrubberCell : PUReviewScrubberCell <PXChangeObserver>



@property (nonatomic) NSInteger badgeType; // ivar: _badgeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PUImportOneUpScrubberCellDisplayDelegate> *displayDelegate; // ivar: _displayDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImportItemViewModel *importItem; // ivar: _importItem
@property (nonatomic) BOOL needsBadgeUpdate; // ivar: _needsBadgeUpdate
@property (nonatomic) BOOL selectable; // ivar: _selectable
@property (readonly, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (nonatomic) NSInteger thumbnailRequestID; // ivar: _thumbnailRequestID


+(id)emptyThumbnailBackgroundColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPUImportOneUpScrubberCellInitialization;
-(void)_createSpinnerIfNecessary;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)refreshThumbnail;
-(void)updateBadgeUIIfNeeded;
-(void)updateToThumbnail:(id)arg0 ;


@end


#endif