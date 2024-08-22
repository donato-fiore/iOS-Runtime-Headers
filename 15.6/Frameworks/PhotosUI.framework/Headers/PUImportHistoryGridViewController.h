// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTHISTORYGRIDVIEWCONTROLLER_H
#define PUIMPORTHISTORYGRIDVIEWCONTROLLER_H

@class NSNumber, PLDateRangeFormatter, NSString, PHFetchResult, PXImportHistorySectionHeaderView;
@protocol PUSectionedGridLayoutDelegate, PXImportHistorySectionHeaderViewDelegate;


#import "PUPhotosGridViewController.h"

@interface PUImportHistoryGridViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PXImportHistorySectionHeaderViewDelegate>



@property (retain, nonatomic) NSNumber *cachedHeaderHeight; // ivar: _cachedHeaderHeight
@property (readonly, nonatomic) PLDateRangeFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *importSessions; // ivar: _importSessions
@property (retain, nonatomic) PXImportHistorySectionHeaderView *referenceHeaderView; // ivar: _referenceHeaderView
@property (nonatomic) CGFloat referenceWidth; // ivar: _referenceWidth
@property (readonly) Class superclass;


-(BOOL)allowSlideshowButton;
-(BOOL)initiallyScrolledToBottom;
-(BOOL)shouldPerformAutomaticContentOffsetAdjustment;
-(CGFloat)sectionedGridLayout:(id)arg0 accessibilitySectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(CGFloat)sectionedGridLayout:(id)arg0 sectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(NSInteger)oneUpPresentationOrigin;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(id)newGridLayout;
-(void)_configureSectionHeaderView:(id)arg0 section:(NSInteger)arg1 ;
-(void)_importHistoryContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)headerViewDidPressActionButton:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 itemsAtIndexes:(id)arg1 inSection:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif