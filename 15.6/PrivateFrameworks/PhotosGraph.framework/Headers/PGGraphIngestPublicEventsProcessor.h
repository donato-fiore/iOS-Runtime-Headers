// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHINGESTPUBLICEVENTSPROCESSOR_H
#define PGGRAPHINGESTPUBLICEVENTSPROCESSOR_H

@class NSString, NSDictionary;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *publicEventCriteriaByCategory; // ivar: _publicEventCriteriaByCategory
@property (readonly) Class superclass;


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg0 graph:(id)arg1 largeFrequentLocationNodes:(id)arg2 ;
-(id)disambiguateEvents:(id)arg0 forTimeLocationTuple:(id)arg1 momentNode:(id)arg2 graph:(id)arg3 ;
-(id)publicEventCriteriaByCategoryInGraph:(id)arg0 ;
-(void)_collectConsolidatedAddressesForMomentNodes:(id)arg0 inGraph:(id)arg1 largeFrequentLocationNodes:(id)arg2 consolidatedAddresses:(*id)arg3 consolidatedAddressesByMomentIdentifier:(*id)arg4 momentNodesForConsolidatedAddresses:(*id)arg5 ;
// -(void)_enumeratePublicEventsFromMomentNodes:(id)arg0 progressBlock:(id)arg1 usingBlock:(unk)arg2  ;
-(void)_insertPublicEventsFromMomentNodes:(id)arg0 graphUpdate:(id)arg1 progressBlock:(id)arg2 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif