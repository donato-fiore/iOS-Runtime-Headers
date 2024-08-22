// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTEXACTPROCESSNAMEFILTER_H
#define SIGNPOSTSUPPORTEXACTPROCESSNAMEFILTER_H

@class NSPredicate, NSSet;
@protocol SignpostPredicateProducer;

#import <Foundation/Foundation.h>


@interface SignpostSupportExactProcessNameFilter : NSObject <SignpostPredicateProducer>



@property (readonly, nonatomic) NSUInteger _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;
@property (readonly, nonatomic) NSSet *processNameSet; // ivar: _processNameSet


-(BOOL)passesProcessName:(id)arg0 ;
-(id)init;
-(void)addProcessName:(id)arg0 ;
-(void)addProcessNameSet:(id)arg0 ;


@end


#endif