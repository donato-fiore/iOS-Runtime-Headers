// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPRIVACYREPORTGRIDVIEW_H
#define SFPRIVACYREPORTGRIDVIEW_H

@class UIView, UICollectionView, UICollectionViewFlowLayout, NSMutableArray, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SFPrivacyReportGridItemDelegate, SFPrivacyReportGridViewDelegate;



@interface SFPrivacyReportGridView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SFPrivacyReportGridItemDelegate>

 {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableArray *_cachedRowInfo;
    CGFloat _previousCollectionViewWidth;
    BOOL _isAccessibilitySize;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPrivacyReportGridViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat interItemSpacing;
@property (copy, nonatomic) NSArray *itemViews; // ivar: _itemViews
@property (readonly) Class superclass;


-(BOOL)itemViewCanUseCompactWidth:(id)arg0 ;
-(BOOL)itemViewIsLineBreak:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)_gridPositionForItemAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(void)_rebuildRowLayoutInfoIfNeeded;
-(void)didUpdateInterItemSpacing:(CGFloat)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)itemDidChangeContentSize:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateInterItemSpacing;


@end


#endif