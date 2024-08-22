// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTSUPPORTPIDFILTER_H
#define SIGNPOSTSUPPORTPIDFILTER_H

@class NSSet, NSPredicate;
@protocol SignpostPredicateProducer;

#import <Foundation/Foundation.h>


@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>



@property (readonly, nonatomic) NSUInteger _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual; // ivar: __wantsNotEqual
@property (readonly, nonatomic) NSSet *pidSet; // ivar: _pidSet
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;


-(BOOL)_wantsNotSubsystem;
-(BOOL)passesPIDNumber:(id)arg0 ;
-(id)init;
-(void)addPIDNumber:(id)arg0 ;
-(void)addPIDNumberSet:(id)arg0 ;


@end


#endif