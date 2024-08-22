// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMUSICSESSIONNODE_H
#define PGGRAPHMUSICSESSIONNODE_H

@class NSDate, NSSet;


#import "PGGraphOptimizedNode.h"

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (readonly, nonatomic) NSSet *trackNodes;


+(id)momentOfMusicSession;
+(id)musicSessionDateSortDescriptors;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLocalStartDate:(id)arg0 localEndDate:(id)arg1 ;
-(id)label;
-(id)momentNodes;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateMusicTrackNodesUsingBlock:(id)arg0 ;


@end


#endif