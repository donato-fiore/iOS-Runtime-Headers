// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11PHOTOSGRAPH24PGUPNEXTDEBUGINFOBUILDER_H
#define _TTC11PHOTOSGRAPH24PGUPNEXTDEBUGINFOBUILDER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _TtC11PhotosGraph24PGUpNextDebugInfoBuilder : NSObject {
    ? inputDebugInfo;
    ? rootMemoryNodeUniqueIdentifier;
    ? momentUUIDs;
    ? featureWeightVectors;
    ? suggestionFilteringLogs;
}


@property (nonatomic, readonly) NSString *debugInfo;
@property (nonatomic, copy) NSArray *featureWeightVectors;
@property (nonatomic, copy) NSString *inputDebugInfo;
@property (nonatomic, copy) NSArray *momentUUIDs;
@property (nonatomic) BOOL rootMemoryIsAggregation; // ivar: rootMemoryIsAggregation
@property (nonatomic, copy) NSString *rootMemoryNodeUniqueIdentifier;
@property (nonatomic) BOOL wantsVerboseDebugInfo; // ivar: wantsVerboseDebugInfo


-(id)init;
-(void)addSuggestionFilteringLog:(id)arg0 ;


@end


#endif