// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYEXPLICITCHAPTERCOLLECTION_H
#define PXSTORYEXPLICITCHAPTERCOLLECTION_H

@class NSMutableArray, NSSet, NSDictionary, NSArray;
@protocol PXStoryMutableExplicitChapterCollection, PXStoryChapterCollection, PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryExplicitChapterCollection : NSObject <PXStoryMutableExplicitChapterCollection, PXStoryChapterCollection>

 {
    NSMutableArray *_initializedChapters;
    id<PXDisplayAssetFetchResult> *_initializedAssets;
}


@property (readonly, nonatomic) NSSet *chapterBeginningAssetlocalIdentifiers; // ivar: _chapterBeginningAssetlocalIdentifiers
@property (readonly, nonatomic) NSDictionary *chapterIndexesByIdentifier; // ivar: _chapterIndexesByIdentifier
@property (readonly, nonatomic) NSArray *chapters; // ivar: _chapters
@property (readonly, nonatomic) NSInteger numberOfChapters;


-(BOOL)containsChapterBeginningWithAsset:(id)arg0 ;
-(NSInteger)indexOfChapterWithIdentifier:(id)arg0 ;
-(id)chapterAtIndex:(NSInteger)arg0 ;
-(id)chapterContainingAsset:(id)arg0 ;
-(id)initWithAssets:(id)arg0 configuration:(id)arg1 ;
-(void)addChapterWithAssetRange:(struct _NSRange )arg0 configuration:(id)arg1 ;


@end


#endif