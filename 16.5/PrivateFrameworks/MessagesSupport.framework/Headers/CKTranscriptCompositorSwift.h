// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTCOMPOSITORSWIFT_H
#define CKTRANSCRIPTCOMPOSITORSWIFT_H

@class NSArray, UICollectionView, UICollectionViewCompositionalLayout;
@protocol CKTranscriptCompositorDatasourceDelegate;

#import <Foundation/Foundation.h>


@interface CKTranscriptCompositorSwift : NSObject {
    ? boundarySupplementaryItems;
}


@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (nonatomic, retain) UICollectionView *collectionView; // ivar: collectionView
@property (nonatomic, retain) UICollectionViewCompositionalLayout *collectionViewLayout; // ivar: collectionViewLayout
@property (nonatomic) NSInteger contentsInsetReference; // ivar: contentsInsetReference
@property (nonatomic, retain) id *datasource; // ivar: datasource
@property (nonatomic, weak) NSObject<CKTranscriptCompositorDatasourceDelegate> *delegate; // ivar: delegate
@property (nonatomic) CGFloat interSectionSpacing; // ivar: interSectionSpacing
@property (nonatomic) NSInteger layoutContext; // ivar: layoutContext
@property (nonatomic) NSInteger scrollDirection; // ivar: scrollDirection


-(id)init;
-(id)initWithLayoutContext:(NSInteger)arg0 datasource:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;


@end


#endif