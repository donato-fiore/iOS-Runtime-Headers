// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLEGACYTRANSCRIPTLAYOUTENVIRONMENT_H
#define CKLEGACYTRANSCRIPTLAYOUTENVIRONMENT_H

@class UICollectionView;
@protocol NSCollectionLayoutEnvironment;

#import <Foundation/Foundation.h>

#import "CKConversation.h"
#import "CKChatItem.h"

@interface CKLegacyTranscriptLayoutEnvironment : NSObject

@property (retain, nonatomic) NSObject<NSCollectionLayoutEnvironment> *collectionLayoutEnvironment; // ivar: _collectionLayoutEnvironment
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (nonatomic) NSInteger layoutContext; // ivar: _layoutContext
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (retain, nonatomic) CKChatItem *previousItem; // ivar: _previousItem


-(id)init;


@end


#endif