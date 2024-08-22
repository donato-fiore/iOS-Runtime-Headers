// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTCOMPOSITOR_H
#define CKTRANSCRIPTCOMPOSITOR_H

@class NSArray, UICollectionView, UICollectionViewCompositionalLayout;
@protocol CKTranscriptCompositorDatasourceDelegate;

#import <Foundation/Foundation.h>

#import "CKTranscriptCompositorSwift.h"

@interface CKTranscriptCompositor : NSObject

@property (retain, nonatomic) NSArray *boundarySupplementaryItems;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) NSInteger contentsInsetReference;
@property (readonly, nonatomic) id *datasource;
@property (weak, nonatomic) NSObject<CKTranscriptCompositorDatasourceDelegate> *delegate;
@property (nonatomic) CGFloat interSectionSpacing;
@property (readonly, nonatomic) NSInteger layoutContext;
@property (retain, nonatomic) CKTranscriptCompositorSwift *representedObject; // ivar: _representedObject
@property (nonatomic) NSInteger scrollDirection;


-(id)initWithLayoutContext:(NSInteger)arg0 datasource:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;


@end


#endif