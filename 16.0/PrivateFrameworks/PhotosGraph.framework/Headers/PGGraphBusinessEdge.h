// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHBUSINESSEDGE_H
#define PGGRAPHBUSINESSEDGE_H

@class NSDate;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphBusinessEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL hasRoutineInfo; // ivar: _hasRoutineInfo
@property (readonly, nonatomic) NSDate *universalEndDate; // ivar: _universalEndDate
@property (readonly, nonatomic) NSDate *universalStartDate; // ivar: _universalStartDate


-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromSourceNode:(id)arg0 toBusinessNode:(id)arg1 confidence:(CGFloat)arg2 hasRoutineInfo:(BOOL)arg3 universalStartDate:(id)arg4 universalEndDate:(id)arg5 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)propertyDictionary;
-(void)checkConsistencyOfProperties:(id)arg0 withExtraPropertyKeys:(id)arg1 ;


@end


#endif