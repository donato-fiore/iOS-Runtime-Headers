// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNHINTCACHE_H
#define TNHINTCACHE_H

@class TSDDrawableInfo;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TNPageCoordinateDictionary.h"
#import "TNPageController.h"

@interface TNHintCache : NSObject {
    ? mPageRange;
    BOOL mIsMaxColumnValid;
    BOOL mIsMaxRowValid;
    TNPageCoordinateDictionary *mHintCacheEntryDictionary;
    set<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> _pageCoordinatesWithAnnotations;
}


@property (retain) TSDDrawableInfo *info; // ivar: mInfo
@property (readonly) TNPageController *pageController; // ivar: mPageController
@property (nonatomic) BOOL pageCoordinatesWithAnnotationsIsValid; // ivar: _pageCoordinatesWithAnnotationsIsValid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pageCoordinatesWriterQueue; // ivar: _pageCoordinatesWriterQueue


-(id)initWithInfo:(id)arg0 pageController:(id)arg1 ;
-(id)layoutAtCoordinate:(struct TSUCellCoord )arg0 parentLayout:(id)arg1 ;
-(id)p_hintCacheEntryAtCoordinate:(struct TSUCellCoord )arg0 ;
-(struct ? )pageRangeWithUpperBound:(struct TSUCellCoord )arg0 ;
-(struct set<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> )pageCoordinatesWithAnnotations;
-(void)dealloc;
-(void)invalidate;


@end


#endif