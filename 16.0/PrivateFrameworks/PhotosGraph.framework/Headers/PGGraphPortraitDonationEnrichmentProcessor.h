// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPORTRAITDONATIONENRICHMENTPROCESSOR_H
#define PGGRAPHPORTRAITDONATIONENRICHMENTPROCESSOR_H

@class NSCountedSet, NSMutableDictionary, NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

#import <Foundation/Foundation.h>


@interface PGGraphPortraitDonationEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>



@property (readonly, nonatomic) NSCountedSet *addressNodes; // ivar: _addressNodes
@property (readonly, nonatomic) NSCountedSet *businessNodes; // ivar: _businessNodes
@property (readonly, nonatomic) NSMutableDictionary *datesByAddressNode; // ivar: _datesByAddressNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSCountedSet *meaningNodes; // ivar: _meaningNodes
@property (readonly, nonatomic) NSCountedSet *performerNodes; // ivar: _performerNodes
@property (readonly, nonatomic) NSCountedSet *poiNodes; // ivar: _poiNodes
@property (readonly, nonatomic) NSCountedSet *publicEventNodes; // ivar: _publicEventNodes
@property (readonly, nonatomic) NSCountedSet *roiNodes; // ivar: _roiNodes
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)backgroundJobName;
+(id)graphDonationBundleId;
-(BOOL)_shouldProcessGraphUpdate:(id)arg0 ;
-(id)_knowledgeToDonateFromAccumulatedNodesWithProgressBlock:(id)arg0 ;
-(id)_locationNamedEntitiesFromAddressNodes:(id)arg0 dates:(id)arg1 currentProgress:(*CGFloat)arg2 progressFraction:(CGFloat)arg3 progressBlock:(id)arg4 ;
-(id)_namedEntitiesFromNamedEntityNodes:(id)arg0 currentProgress:(*CGFloat)arg1 progressFraction:(CGFloat)arg2 progressBlock:(id)arg3 ;
-(id)_topicsFromTopicNodes:(id)arg0 currentProgress:(*CGFloat)arg1 progressFraction:(CGFloat)arg2 progressBlock:(id)arg3 ;
-(void)_accumulateKnowledgeNodesFromMomentNodes:(id)arg0 progressBlock:(id)arg1 ;
-(void)_donateKnowledge:(id)arg0 donationDate:(id)arg1 loggingConnection:(id)arg2 ;
-(void)_donateKnowledgeWithManager:(id)arg0 progressBlock:(id)arg1 ;
-(void)_prepareForKnowledgeDonation;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif