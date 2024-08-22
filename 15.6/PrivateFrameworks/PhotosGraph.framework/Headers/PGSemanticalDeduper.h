// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSEMANTICALDEDUPER_H
#define PGSEMANTICALDEDUPER_H

@class VNSequenceRequestHandler, VNCreateSceneprintRequest;


#import "PGDeduper.h"

@interface PGSemanticalDeduper : PGDeduper {
    VNSequenceRequestHandler *_sequenceRequestHandler;
    VNCreateSceneprintRequest *_sceneprintRequest;
}


@property (nonatomic) BOOL usesAdaptiveSimilarStacking; // ivar: _usesAdaptiveSimilarStacking


-(id)deduplicatedItemsWithItems:(id)arg0 debugInfo:(id)arg1 progressBlock:(id)arg2 ;
-(id)itemsNeedingSceneprintInTimeClusters:(id)arg0 ;
-(id)sceneprintByItemIdentifierWithItems:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;


@end


#endif