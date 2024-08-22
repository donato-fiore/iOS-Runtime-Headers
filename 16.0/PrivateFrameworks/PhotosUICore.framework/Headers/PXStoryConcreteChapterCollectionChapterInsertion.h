// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCONCRETECHAPTERCOLLECTIONCHAPTERINSERTION_H
#define PXSTORYCONCRETECHAPTERCOLLECTIONCHAPTERINSERTION_H

@protocol PXStoryChapterCollectionChapterInsertion, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteChapterCollectionChapterInsertion : NSObject <PXStoryChapterCollectionChapterInsertion>



@property (readonly, nonatomic) id *chapterConfiguration; // ivar: _chapterConfiguration
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *firstAsset; // ivar: _firstAsset
@property (readonly, nonatomic) NSInteger kind;


-(id)init;
-(id)initWithFirstAsset:(id)arg0 chapterConfiguration:(id)arg1 ;


@end


#endif