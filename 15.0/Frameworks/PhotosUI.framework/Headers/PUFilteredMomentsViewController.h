// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFILTEREDMOMENTSVIEWCONTROLLER_H
#define PUFILTEREDMOMENTSVIEWCONTROLLER_H

@class NSString;
@protocol PUPhotosSectionHeaderViewDelegate, PUFilteredMomentsDataSourceDelegate;


#import "PUPhotosGridViewController.h"
#import "PUFilteredMomentsDataSource.h"

@interface PUFilteredMomentsViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUFilteredMomentsDataSourceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *emptyPlaceholderText; // ivar: _emptyPlaceholderText
@property (retain, nonatomic) PUFilteredMomentsDataSource *filteredMomentsDataSource; // ivar: _filteredMomentsDataSource
@property (nonatomic) NSInteger gridPresentationContext; // ivar: _gridPresentationContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowSlideshowButton;
-(CGFloat)sectionedGridLayout:(id)arg0 accessibilitySectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(CGFloat)sectionedGridLayout:(id)arg0 sectionHeaderHeightForVisualSection:(NSInteger)arg1 ;
-(NSInteger)oneUpPresentationOrigin;
-(id)newEmptyPlaceholderView;
-(id)newGridLayout;
-(void)_configureSectionHeaderView:(id)arg0 section:(NSUInteger)arg1 ;
-(void)_getDataForVisualSection:(NSInteger)arg0 hasActionButton:(*BOOL)arg1 actionButtonTitle:(*id)arg2 hasDisclosure:(*BOOL)arg3 locations:(*id)arg4 title:(*id)arg5 startDate:(*id)arg6 endDate:(*id)arg7 ;
-(void)_reloadVisibleMomentHeaders;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)didTapHeaderView:(id)arg0 ;
-(void)filteredMomentsDataSourceHasPendingChanges:(id)arg0 ;
-(void)headerView:(id)arg0 actionButtonPressed:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 itemsAtIndexes:(id)arg1 inSection:(NSInteger)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif