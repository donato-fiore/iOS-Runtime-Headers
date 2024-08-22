// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCHARTCACHEPENDINGFETCHOPERATIONMANAGER_H
#define _HKCHARTCACHEPENDINGFETCHOPERATIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _HKChartCachePendingFetchOperationManager : NSObject {
    NSMutableDictionary *_fetchOperationsByIdentifier;
    NSMutableDictionary *_fetchOperationsByUUID;
    NSMutableDictionary *_retryCountByIdentifier;
}




-(NSInteger)retryCountForIdentifier:(id)arg0 ;
-(id)allPendingIdentifiers;
-(id)fetchOperationForIdentifier:(id)arg0 ;
-(id)init;
-(void)addFetchOperation:(id)arg0 ;
-(void)incrementRetryCountForIdentifier:(id)arg0 ;
-(void)removeFetchOperation:(id)arg0 ;
-(void)resetRetryCountForIdentifier:(id)arg0 ;


@end


#endif