// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHUNKMAP_H
#define TSCHCHUNKMAP_H


#import <Foundation/Foundation.h>


@interface TSCHChunkMap : NSObject {
    NSUInteger _chunkStyle;
    *NSUInteger _seriesMap;
    *NSUInteger _groupsMap;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _chunkMapCount


-(BOOL)p_canAddChunkForSeries:(id)arg0 groupIndex:(NSInteger)arg1 ;
-(NSUInteger)groupIndexAtMapIndex:(NSUInteger)arg0 ;
-(NSUInteger)seriesIndexAtIndex:(NSUInteger)arg0 ;
-(id)initWithChart:(id)arg0 chunkStyle:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)p_setupCacheForElementsInSeriesWithModel:(id)arg0 ;
-(void)p_setupCacheForElementsInSetsWithModel:(id)arg0 ;
-(void)p_setupCacheForSeriesWithModel:(id)arg0 ;
-(void)p_setupCacheForSetsWithModel:(id)arg0 ;


@end


#endif