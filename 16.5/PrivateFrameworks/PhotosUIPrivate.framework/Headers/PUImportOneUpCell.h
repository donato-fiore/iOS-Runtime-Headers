// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTONEUPCELL_H
#define PUIMPORTONEUPCELL_H

@class NSString, UITextField, PXImportItemViewModel;
@protocol PXChangeObserver, PUImportOneUpCellDisplayDelegate;


#import "PUPhotosSharingGridCell.h"

@interface PUImportOneUpCell : PUPhotosSharingGridCell <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITextField *debugTextField; // ivar: _debugTextField
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PUImportOneUpCellDisplayDelegate> *displayDelegate; // ivar: _displayDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImportItemViewModel *importItem; // ivar: _importItem
@property (readonly) Class superclass;
@property (nonatomic) NSInteger thumbnailRequestID; // ivar: _thumbnailRequestID


+(CGFloat)alphaForSelectedCells;
-(*void)contextForObservingViewModelChanges;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPUImportOneUpCellInitialization;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)refreshThumbnail;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 isPlaceholder:(BOOL)arg1 ;
-(void)updateBadge;
-(void)updateDebugLabel:(id)arg0 ;
-(void)updatePhotoViewForImportItem:(id)arg0 ;
-(void)updateSelectedVisualAppearance;


@end


#endif