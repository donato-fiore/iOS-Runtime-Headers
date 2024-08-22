// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTSUPPORTSUBSYSTEMCATEGORYFILTER_H
#define SIGNPOSTSUPPORTSUBSYSTEMCATEGORYFILTER_H

@class NSPredicate, NSMutableDictionary;
@protocol SignpostPredicateProducer;

#import <Foundation/Foundation.h>


@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>



@property (readonly, nonatomic) NSUInteger _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotSubsystem;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;
@property (readonly, nonatomic) NSMutableDictionary *subsystemsDict; // ivar: _subsystemsDict


-(BOOL)matchesSubsystem:(id)arg0 category:(id)arg1 ;
-(BOOL)passesSubsystem:(id)arg0 category:(id)arg1 ;
-(id)_initWithEntries:(id)arg0 ;
-(id)_predicateEquivalentWithIsSimplified:(BOOL)arg0 ;
-(id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)arg0 ;
-(id)debugDescription;
-(id)liveStreamingPredicate;
-(void)_fixupToSupportFramerateCalculation;
-(void)_forceInclusionOfSubsystem:(id)arg0 category:(id)arg1 ;
-(void)addEntry:(id)arg0 ;
-(void)addSubsystem:(id)arg0 category:(id)arg1 ;


@end


#endif