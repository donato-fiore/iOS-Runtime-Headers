// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATSSTORES_H
#define CADSTATSSTORES_H

@class NSMutableArray;


#import "CADStatCollector.h"
#import "CADStatCollectionContext.h"

@interface CADStatsStores : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_storeInfos;
}




+(id)eventName;
-(BOOL)wantsStores;
-(id)eventDictionaries;
-(void)prepareWithContext:(id)arg0 ;
-(void)processStores:(id)arg0 ;


@end


#endif