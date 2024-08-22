// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPEDGESELECTION_H
#define NPEDGESELECTION_H

@class NSString, NSDate;


#import "EdgeSelection.h"
#import "NPWaldo.h"

@interface NPEdgeSelection : EdgeSelection

@property (retain) NSString *bestEdge; // ivar: _bestEdge
@property NSUInteger bestEdgeProbedRTT; // ivar: _bestEdgeProbedRTT
@property NSUInteger bestEdgeRTT; // ivar: _bestEdgeRTT
@property (retain) NSString *nextBestEdge; // ivar: _nextBestEdge
@property NSUInteger nextBestEdgeRTT; // ivar: _nextBestEdgeRTT
@property (retain) NSDate *probeDate; // ivar: _probeDate
@property (weak, nonatomic) NPWaldo *waldoInfo; // ivar: _waldoInfo


+(BOOL)supportsSecureCoding;
-(BOOL)shouldProbeForEdgeSelection:(id)arg0 edgeRank:(*NSInteger)arg1 edgeIndex:(*NSInteger)arg2 bestEdgeLabel:(*id)arg3 ;
-(id)copyEdgeSelectionTelemetry;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWaldo:(id)arg0 signature:(id)arg1 interfaceType:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getBestEdgeFromEdgeSelection;
-(void)trainEdgeSelection:(id)arg0 edgeRank:(NSUInteger)arg1 rtt:(NSUInteger)arg2 ;
-(void)updateEdgeSelection:(NSUInteger)arg0 ;


@end


#endif