// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SUIKSEARCHRESULTSUPDATEOPERATION_H
#define _SUIKSEARCHRESULTSUPDATEOPERATION_H

@class NSOperation, UICollectionViewDiffableDataSource, NSArray;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;



@interface _SUIKSearchResultsUpdateOperation : NSOperation

@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (weak, nonatomic) NSArray *results; // ivar: _results


-(id)initWithResults:(id)arg0 diffableDataSource:(id)arg1 delegate:(id)arg2 ;
-(void)main;


@end


#endif