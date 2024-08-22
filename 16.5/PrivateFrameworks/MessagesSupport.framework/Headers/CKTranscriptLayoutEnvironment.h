// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTLAYOUTENVIRONMENT_H
#define CKTRANSCRIPTLAYOUTENVIRONMENT_H

@class UICollectionView;
@protocol NSCollectionLayoutEnvironment;

#import <Foundation/Foundation.h>

#import "CKTranscriptLayoutMessageEditingContext.h"

@interface CKTranscriptLayoutEnvironment : NSObject

@property (retain, nonatomic) NSObject<NSCollectionLayoutEnvironment> *collectionLayoutEnvironment; // ivar: _collectionLayoutEnvironment
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) id *datasource; // ivar: _datasource
@property (nonatomic) NSInteger layoutContext; // ivar: _layoutContext
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (retain, nonatomic) CKTranscriptLayoutMessageEditingContext *messageEditingContext; // ivar: _messageEditingContext


-(id)initWithDatasource:(id)arg0 collectionLayoutEnvironment:(id)arg1 collectionView:(id)arg2 marginInsets:(struct UIEdgeInsets )arg3 layoutContext:(NSInteger)arg4 messageEditingContext:(id)arg5 ;


@end


#endif