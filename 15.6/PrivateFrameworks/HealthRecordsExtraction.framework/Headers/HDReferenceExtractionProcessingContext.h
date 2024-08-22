// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDREFERENCEEXTRACTIONPROCESSINGCONTEXT_H
#define HDREFERENCEEXTRACTIONPROCESSINGCONTEXT_H

@class NSArray, NSMutableSet, NSMapTable;

#import <Foundation/Foundation.h>


@interface HDReferenceExtractionProcessingContext : NSObject

@property (readonly, nonatomic) NSArray *completeResources;
@property (retain, nonatomic) NSMutableSet *containedResourceIdentifiers; // ivar: _containedResourceIdentifiers
@property (readonly, nonatomic) NSArray *incompleteResources;
@property (retain, nonatomic) NSArray *privateCompleteResources; // ivar: _privateCompleteResources
@property (retain, nonatomic) NSArray *privateIncompleteResources; // ivar: _privateIncompleteResources
@property (retain, nonatomic) NSArray *privateUnresolvableReferences; // ivar: _privateUnresolvableReferences
@property (retain, nonatomic) NSMutableSet *processedResources; // ivar: _processedResources
@property (retain, nonatomic) NSMapTable *resourcesWithUnresolvableReferences; // ivar: _resourcesWithUnresolvableReferences
@property (readonly, nonatomic) NSArray *unresolvableReferences;
@property (retain, nonatomic) NSMapTable *unresolvedReferences; // ivar: _unresolvedReferences


-(id)init;
-(void)_processResources;
-(void)_reset;
-(void)recordContainedResource:(id)arg0 ;
-(void)recordProcessedResource:(id)arg0 ;
-(void)recordUnresolvableReference:(id)arg0 forResource:(id)arg1 hint:(NSUInteger)arg2 ;
-(void)recordUnresolvedReference:(id)arg0 forResource:(id)arg1 ;


@end


#endif