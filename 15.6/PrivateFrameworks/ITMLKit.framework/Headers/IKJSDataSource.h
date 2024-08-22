// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSDATASOURCE_H
#define IKJSDATASOURCE_H

@class NSMutableArray, NSDictionary, NSMutableDictionary, NSMutableIndexSet;
@protocol IKJSDataSource, _IKJSDataSourceProxy, _IKJSDataSource;


#import "IKJSDataObservable.h"

@interface IKJSDataSource : IKJSDataObservable <IKJSDataSource, _IKJSDataSourceProxy, _IKJSDataSource>

 {
    BOOL _dataSourceViewsDirty;
}


@property (readonly, nonatomic) NSMutableArray *dataSourceViewPointers; // ivar: _dataSourceViewPointers
@property (readonly, copy, nonatomic) NSDictionary *indexTitles; // ivar: _indexTitles
@property (readonly, nonatomic) NSInteger length;
@property (readonly, nonatomic) NSMutableDictionary *loadIndexesRequestsBySegmentIndex; // ivar: _loadIndexesRequestsBySegmentIndex
@property (readonly, nonatomic) NSMutableIndexSet *loadedSegmentIndexes; // ivar: _loadedSegmentIndexes
@property (readonly, nonatomic) NSInteger segmentSize; // ivar: _segmentSize


+(id)_titlesByIndexFromValue:(id)arg0 ;
+(id)jsExportedProperties;
+(id)makeDataSource:(id)arg0 ;
-(NSInteger)_segmentIndexForItemIndex:(NSInteger)arg0 ;
-(id)_dataSourceViews;
-(id)_spliceAtIndex:(NSInteger)arg0 deleteCount:(NSInteger)arg1 insertions:(id)arg2 ;
-(id)asPrivateIKJSDataSource;
-(id)boxedItem:(NSInteger)arg0 ;
-(id)delete:(NSInteger)arg0 ;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg0 extraInfo:(id)arg1 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 indexTitles:(id)arg1 ;
-(id)initWithItems:(id)arg0 indexTitles:(id)arg1 segmentSize:(NSInteger)arg2 ;
-(id)item:(NSInteger)arg0 ;
-(id)replace:(NSInteger)arg0 ;
-(id)valuesForSubscripts:(struct _NSRange )arg0 boxed:(BOOL)arg1 ;
-(void)_didAdjustSegmentIndexesFromIndex:(NSInteger)arg0 ;
-(void)_loadUsedIndexes;
-(void)_resetLoadedSegments;
-(void)_resetUsedIndexesAndMigrateItems:(id)arg0 ;
-(void)_updateTitlesFromIndex:(NSInteger)arg0 deleteCount:(NSInteger)arg1 insertionCount:(NSInteger)arg2 title:(id)arg3 ;
-(void)addDataSourceView:(id)arg0 ;
-(void)insert:(NSInteger)arg0 ;
-(void)markDataSourceViewsUpdated;
-(void)move:(NSInteger)arg0 ;
-(void)removeDataSourceView:(id)arg0 ;
-(void)update:(id)arg0 ;


@end


#endif