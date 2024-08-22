// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHADDRESSEDGE_H
#define PGGRAPHADDRESSEDGE_H

@class CLLocation, MAEdgeFilter, NSDate;
@protocol MAUniquelyIdentifiableEdge;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphAddressEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge>



@property (readonly, nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly, nonatomic) CLLocationCoordinate2D photoCoordinate; // ivar: _photoCoordinate
@property (readonly, nonatomic) CLLocation *photoLocation;
@property (readonly, nonatomic) CGFloat relevance; // ivar: _relevance
@property (readonly, nonatomic) CGFloat timestampUTCEnd;
@property (readonly, nonatomic) CGFloat timestampUTCStart;
@property (readonly, nonatomic) MAEdgeFilter *uniquelyIdentifyingFilter;
@property (readonly, nonatomic) NSDate *universalEndDate; // ivar: _universalEndDate
@property (readonly, nonatomic) NSDate *universalStartDate; // ivar: _universalStartDate


+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)edgeDescription;
-(id)initFromMomentNode:(id)arg0 toAddressNode:(id)arg1 relevance:(CGFloat)arg2 universalStartDate:(id)arg3 universalEndDate:(id)arg4 photoCoordinate:(struct CLLocationCoordinate2D )arg5 numberOfAssets:(NSUInteger)arg6 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif