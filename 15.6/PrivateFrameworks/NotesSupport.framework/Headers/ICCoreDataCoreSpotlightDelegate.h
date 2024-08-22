// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCOREDATACORESPOTLIGHTDELEGATE_H
#define ICCOREDATACORESPOTLIGHTDELEGATE_H

@class NSCoreDataCoreSpotlightDelegate;



@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate

@property (nonatomic) NSUInteger indexingPriority; // ivar: _indexingPriority
@property (nonatomic) BOOL isCheckingObjectConsistency; // ivar: _isCheckingObjectConsistency
@property (readonly, nonatomic) BOOL shouldPerformConsistencyCheck; // ivar: _shouldPerformConsistencyCheck


-(BOOL)shouldIndexableObjectExistInIndexing:(id)arg0 ;
-(id)attributeSetForObject:(id)arg0 ;
-(id)bundleIdentifier;
-(id)indexName;
-(id)initForStoreWithDescription:(id)arg0 coordinator:(id)arg1 indexingPriority:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)startSpotlightIndexing;
-(void)stopSpotlightIndexing;


@end


#endif