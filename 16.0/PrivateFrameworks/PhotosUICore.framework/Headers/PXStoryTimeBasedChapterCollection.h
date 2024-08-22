// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTIMEBASEDCHAPTERCOLLECTION_H
#define PXSTORYTIMEBASEDCHAPTERCOLLECTION_H

@class NSSet, NSDictionary, NSArray;
@protocol PXStoryEditableChapterCollection;

#import <Foundation/Foundation.h>


@interface PXStoryTimeBasedChapterCollection : NSObject <PXStoryEditableChapterCollection>



@property (readonly, nonatomic) NSSet *chapterBeginningAssetLocalIdentifiers; // ivar: _chapterBeginningAssetLocalIdentifiers
@property (readonly, nonatomic) NSDictionary *chapterIndexesByIdentifier; // ivar: _chapterIndexesByIdentifier
@property (readonly, nonatomic) NSArray *chapters; // ivar: _chapters
@property (readonly, nonatomic) NSInteger numberOfChapters;
@property (readonly, nonatomic) BOOL usesAssetLocalCreationDates; // ivar: _usesAssetLocalCreationDates


-(BOOL)canApplyEdits:(id)arg0 error:(*id)arg1 ;
-(BOOL)containsChapterBeginningWithAsset:(id)arg0 ;
-(NSInteger)indexOfChapterWithIdentifier:(id)arg0 ;
-(id)_dateForAsset:(id)arg0 ;
-(id)_initWithChapters:(id)arg0 usesAssetLocalCreationDates:(BOOL)arg1 ;
-(id)chapterAtIndex:(NSInteger)arg0 ;
-(id)chapterContainingAsset:(id)arg0 ;
-(id)copyByApplyingEdits:(id)arg0 ;
-(id)init;
-(id)initWithAssets:(id)arg0 keyAsset:(id)arg1 configuration:(id)arg2 ;
-(void)enumerateChaptersUsingBlock:(id)arg0 ;


@end


#endif