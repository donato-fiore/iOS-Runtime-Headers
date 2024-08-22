// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLCANEDOMTREE_H
#define _MLCANEDOMTREE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _MLCANEDomTree : NSObject

@property (readonly, retain, nonatomic) NSDictionary *dominationTree; // ivar: _dominationTree


+(id)computeDominationForGraph:(id)arg0 ;
+(id)computeDominationForGraphImpl:(id)arg0 ;
+(void)computeDominationForLayer:(id)arg0 dominationTree:(id)arg1 ;
-(BOOL)doesLayer:(id)arg0 dominates:(id)arg1 ;
-(BOOL)doesLayer:(id)arg0 dominatesSubgraph:(id)arg1 ;
-(BOOL)doesSubgraph:(id)arg0 dominatesLayer:(id)arg1 ;
-(BOOL)doesSubgraph:(id)arg0 dominatesSubgraph:(id)arg1 ;
-(id)getDominanceFrontierForSubgraph:(id)arg0 ;
-(id)getPostDominanceFrontierForSubgraph:(id)arg0 ;
-(id)initDomTree:(id)arg0 ;


@end


#endif