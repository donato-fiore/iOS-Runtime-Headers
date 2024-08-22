// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTSUPPORTUNIQUEPIDFILTER_H
#define SIGNPOSTSUPPORTUNIQUEPIDFILTER_H

@class NSPredicate, NSSet;
@protocol SignpostPredicateProducer;

#import <Foundation/Foundation.h>


@interface SignpostSupportUniquePIDFilter : NSObject <SignpostPredicateProducer>



@property (readonly, nonatomic) NSUInteger _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;
@property (readonly, nonatomic) NSSet *uniquePidSet; // ivar: _uniquePidSet


-(BOOL)passesUniquePIDNumber:(id)arg0 ;
-(id)init;
-(void)addUniquePIDNumber:(id)arg0 ;
-(void)addUniquePIDNumberSet:(id)arg0 ;


@end


#endif