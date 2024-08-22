// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTINSERTIONMANAGER_H
#define SXCOMPONENTINSERTIONMANAGER_H

@class NSMutableArray, NSString;
@protocol SXComponentInsertionManager, SXBlueprintAnalyzer, SXComponentInsertionConditionEngine, SXComponentInserterManager, SXUnitConverterFactory;

#import <Foundation/Foundation.h>


@interface SXComponentInsertionManager : NSObject <SXComponentInsertionManager>



@property (readonly, nonatomic) NSObject<SXBlueprintAnalyzer> *blueprintAnalyzer; // ivar: _blueprintAnalyzer
@property (readonly, nonatomic) NSMutableArray *cache; // ivar: _cache
@property (readonly, nonatomic) NSObject<SXComponentInsertionConditionEngine> *conditionEngine; // ivar: _conditionEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponentInserterManager> *inserterManager; // ivar: _inserterManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(id)initWithComponentInserterManager:(id)arg0 conditionEngine:(id)arg1 blueprintAnalyzer:(id)arg2 unitConverterFactory:(id)arg3 ;
-(id)insertComponentsForBlueprint:(id)arg0 DOMObjectProvider:(id)arg1 ;
-(id)insertForMarker:(id)arg0 inserter:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3 ;
-(void)updateDOM:(id)arg0 layoutBlueprint:(id)arg1 insert:(id)arg2 marker:(id)arg3 ;


@end


#endif