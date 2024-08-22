// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCHAPTERCOLLECTIONACTION_H
#define PXSTORYCHAPTERCOLLECTIONACTION_H

@class NSArray;


#import "PXAction.h"
#import "PXStoryChapterCollectionManager.h"

@interface PXStoryChapterCollectionAction : PXAction

@property (readonly, nonatomic) PXStoryChapterCollectionManager *chapterCollectionManager; // ivar: _chapterCollectionManager
@property (readonly, nonatomic) NSArray *edits; // ivar: _edits
@property (readonly, nonatomic) NSArray *originalChapters; // ivar: _originalChapters


-(id)init;
-(id)initWithChapterCollectionManager:(id)arg0 deleteChapterWithIdentifier:(id)arg1 ;
-(id)initWithChapterCollectionManager:(id)arg0 editChapterWithIdentifier:(id)arg1 changeRequest:(id)arg2 ;
-(id)initWithChapterCollectionManager:(id)arg0 edits:(id)arg1 ;
-(id)initWithChapterCollectionManager:(id)arg0 insertChapterWithFirstAsset:(id)arg1 configuration:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif