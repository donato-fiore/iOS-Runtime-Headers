// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCURATIONDEBUGINFO_H
#define CLSCURATIONDEBUGINFO_H

@class NSMapTable, NSString;

#import <Foundation/Foundation.h>

#import "CLSCurationDebugCluster.h"

@interface CLSCurationDebugInfo : NSObject {
    CLSCurationDebugCluster *_rootCluster;
    NSMapTable *_debugItemByItem;
    NSMapTable *_debugClusterByCluster;
}


@property (copy, nonatomic) NSString *agent; // ivar: _agent
@property (copy, nonatomic) NSString *stage; // ivar: _stage


-(id)debugClusterForCluster:(id)arg0 ;
-(id)debugInfoForCluster:(id)arg0 ;
-(id)debugItemForItem:(id)arg0 ;
-(id)debugItemsForItems:(id)arg0 ;
-(id)dictionaryRepresentationWithAppendExtraItemInfoBlock:(id)arg0 ;
-(id)initWithDebugCluster:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)_dedupItems:(id)arg0 toItems:(id)arg1 chosenState:(NSUInteger)arg2 withDedupingType:(NSUInteger)arg3 ;
-(void)addClusters:(id)arg0 withReason:(id)arg1 ;
-(void)beginTentativeSection;
-(void)chooseItem:(id)arg0 inCluster:(id)arg1 withReason:(id)arg2 ;
-(void)chooseItem:(id)arg0 inItems:(id)arg1 withReason:(id)arg2 ;
-(void)chooseItems:(id)arg0 inCluster:(id)arg1 withReason:(id)arg2 ;
-(void)chooseItems:(id)arg0 inItems:(id)arg1 withReason:(id)arg2 ;
-(void)dedupItems:(id)arg0 toItem:(id)arg1 withDedupingType:(NSUInteger)arg2 ;
-(void)dedupItems:(id)arg0 toItems:(id)arg1 withDedupingType:(NSUInteger)arg2 ;
-(void)dedupItems:(id)arg0 toRequiredItems:(id)arg1 withDedupingType:(NSUInteger)arg2 ;
-(void)endTentativeSectionWithSuccess:(BOOL)arg0 ;
-(void)forceState:(NSUInteger)arg0 ofItem:(id)arg1 withReason:(id)arg2 ;
-(void)requireItems:(id)arg0 inCluster:(id)arg1 ;
-(void)requireItems:(id)arg0 inItems:(id)arg1 ;
-(void)resetWithReason:(id)arg0 ;
-(void)setClusters:(id)arg0 withReason:(id)arg1 ;
-(void)setState:(NSUInteger)arg0 ofCluster:(id)arg1 withReason:(id)arg2 ;
-(void)setState:(NSUInteger)arg0 ofItem:(id)arg1 withReason:(id)arg2 ;
-(void)setState:(NSUInteger)arg0 ofItems:(id)arg1 withReason:(id)arg2 ;
-(void)setUnclusteredItemsState:(NSUInteger)arg0 withReason:(id)arg1 ;


@end


#endif