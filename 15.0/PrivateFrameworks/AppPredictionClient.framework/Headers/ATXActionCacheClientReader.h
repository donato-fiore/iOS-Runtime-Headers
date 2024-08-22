// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONCACHECLIENTREADER_H
#define ATXACTIONCACHECLIENTREADER_H

@class NSData, NSIndexSet;

#import <Foundation/Foundation.h>


@interface ATXActionCacheClientReader : NSObject {
    NSData *_scoredActionsChunk;
}


@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices; // ivar: _lockscreenPredictionIndices


-(NSUInteger)chunkCount;
-(id)_getLockScreenPredictionIndices:(id)arg0 ;
-(id)_predicateForInstalledAndNonEngagedPredictions:(id)arg0 ;
-(id)actionsWithConsumerSubType:(unsigned char)arg0 limit:(NSInteger)arg1 ;
-(id)actionsWithLimit:(NSInteger)arg0 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)arg1 ;
-(id)init;
-(id)initWithChunks:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)lockscreenPredictionIndicesUpToLimit:(NSInteger)arg0 ;


@end


#endif