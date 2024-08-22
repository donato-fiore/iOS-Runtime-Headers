// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIINFOVALUECOLLECTIONVIEWCONTROLLER_H
#define SEARCHUIINFOVALUECOLLECTIONVIEWCONTROLLER_H

@class UICollectionView, UICollectionViewDiffableDataSource, NSString, SFInfoTuple;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>

#import "SearchUIRowModel.h"

@interface SearchUIInfoValueCollectionViewController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>



@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (weak, nonatomic) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (readonly) Class superclass;
@property (retain, nonatomic) SFInfoTuple *tuple; // ivar: _tuple


-(BOOL)isShowMoreItemAtIndexPath:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_collectionView:(id)arg0 styleForContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;


@end


#endif