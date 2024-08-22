// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGRELATED_H
#define PGRELATED_H

@class NSString, NSDictionary, PGGraphNode<PGGraphRelatableEvent>, PHPhotosHighlight, NSDate, PHMemory, NSArray;

#import <Foundation/Foundation.h>


@interface PGRelated : NSObject

@property (readonly, nonatomic) unsigned int aggregatedVersions; // ivar: _aggregatedVersions
@property (nonatomic) NSInteger dateMatchingType; // ivar: _dateMatchingType
@property (retain, nonatomic) NSString *debugDescription; // ivar: _debugDescription
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) PGGraphNode<PGGraphRelatableEvent> *eventNode; // ivar: _eventNode
@property (nonatomic, getter=isGeneratingTitleBasedOnKeyAsset) BOOL generateTitleBasedOnKeyAsset; // ivar: _generateTitleBasedOnKeyAsset
@property (nonatomic) unsigned short graphSchemaVersion;
@property (retain, nonatomic) PHPhotosHighlight *highlight; // ivar: _highlight
@property (readonly, nonatomic) NSDictionary *keywords; // ivar: _keywords
@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (nonatomic) CGFloat matchingScore; // ivar: _matchingScore
@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (nonatomic) NSUInteger memoryTripTitleType; // ivar: _memoryTripTitleType
@property (retain, nonatomic) NSArray *moments; // ivar: _moments
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) BOOL shouldGenerateTitle; // ivar: _shouldGenerateTitle
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger titleCategory; // ivar: _titleCategory


-(id)_initWithGraphMatchingResult:(id)arg0 highlight:(id)arg1 moments:(id)arg2 needsDebugInfo:(BOOL)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg0 assetCollection:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(id)initWithGraphMatchingResult:(id)arg0 highlight:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(id)initWithGraphMatchingResult:(id)arg0 memory:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(id)initWithGraphMatchingResult:(id)arg0 moment:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(id)initWithGraphMatchingResult:(id)arg0 moments:(id)arg1 tripMemoryTitleType:(NSUInteger)arg2 tripMomentNodes:(id)arg3 titleGenerationContext:(id)arg4 needsDebugInfo:(BOOL)arg5 ;
-(id)initWithHighlight:(id)arg0 needsDebugInfo:(BOOL)arg1 ;
-(id)initWithMemory:(id)arg0 needsDebugInfo:(BOOL)arg1 ;
-(id)initWithMoment:(id)arg0 needsDebugInfo:(BOOL)arg1 ;
-(void)_addKeywords:(id)arg0 forRelatedType:(NSUInteger)arg1 ;
-(void)_addKeywordsFromKeywords:(id)arg0 ;
-(void)_generateTitleWithHighlightNode:(id)arg0 referenceDateInterval:(id)arg1 titleGenerationContext:(id)arg2 ;
-(void)_generateTitleWithMomentNodes:(id)arg0 keyAsset:(id)arg1 referenceDateInterval:(id)arg2 titleGenerationContext:(id)arg3 ;


@end


#endif