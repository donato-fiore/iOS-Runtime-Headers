// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIFEATUREVECTORCOLLATOR_H
#define SGMIFEATUREVECTORCOLLATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGMIFeatureVectorCollator : NSObject {
    NSUInteger _startInDaysAgo;
    NSUInteger _endInDaysAgo;
    NSUInteger _limit;
    BOOL _withBiomeData;
    NSArray *_featureNames;
    SGSqlEntityStore *_store;
    BOOL _useSpotlightDataForMissingBiomeData;
    NSArray *_simulatedCSSIs;
}




-(id)initWithMessagesFromDaysAgo:(NSUInteger)arg0 throughDaysAgo:(NSUInteger)arg1 limit:(NSUInteger)arg2 withBiomeData:(BOOL)arg3 store:(id)arg4 useSpotlightDataForMissingBiomeData:(BOOL)arg5 preLoadedFeatureNames:(id)arg6 ;
-(id)initWithMessagesFromDaysAgo:(NSUInteger)arg0 throughDaysAgo:(NSUInteger)arg1 limit:(NSUInteger)arg2 withBiomeData:(BOOL)arg3 store:(id)arg4 useSpotlightDataForMissingBiomeData:(BOOL)arg5 preLoadedFeatureNames:(id)arg6 simulatedCSSIs:(id)arg7 ;
-(void)forEach:(id)arg0 ;


@end


#endif