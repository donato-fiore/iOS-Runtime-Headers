// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIONCACHEREADER_H
#define ATXACTIONCACHEREADER_H

@class ATXActionCacheClientReader, NSString;



@interface ATXActionCacheReader : ATXActionCacheClientReader {
    unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::allocator<std::pair<ATXAction *const, int>>> _actionToIndexMap;
    ? _predictionItems;
    ? _extraPredictionItems;
}


@property (readonly, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (readonly, nonatomic) NSInteger assetVersion; // ivar: _assetVersion


+(struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> )getActionKeyToPredictionItemMapFromChunk:(id)arg0 ;
+(void)_getActionKeyToPredictionItemMapFromChunk:(id)arg0 map:(*void)arg1 abGroup:(*id)arg2 assetVersion:(*NSInteger)arg3 ;
+(void)_getExtraPredictionsFromChunk:(id)arg0 map:(*void)arg1 abGroup:(*id)arg2 assetVersion:(*NSInteger)arg3 ;
+(void)_getIndexToPredictionItemMapWithChunk:(id)arg0 withPredictionCount:(NSInteger)arg1 map:(*void)arg2 abGroup:(*id)arg3 assetVersion:(*NSInteger)arg4 ;
-(id)init;
-(id)initWithChunks:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(struct ATXPredictionItem )predictionItemForAction:(id)arg0 ;
-(struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::allocator<std::pair<ATXAction *const, int>>> )_getActionToIndexMap;
-(void)enumerateActionsAndPredictionItemsForConsumerSubtype:(unsigned char)arg0 limit:(NSUInteger)arg1 block:(id)arg2 ;
-(void)enumerateExtraPredictionItemsWithBlock:(id)arg0 ;
-(void)failAndLog:(id)arg0 ;


@end


#endif