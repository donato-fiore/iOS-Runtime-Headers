// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIACONDITIONALPREDICATE_H
#define MPMEDIACONDITIONALPREDICATE_H

@class NSString;
@protocol MPPProtobufferCoding;


#import "MPMediaPredicate.h"

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding>



@property (readonly, copy, nonatomic) MPMediaPredicate *conditionPredicate; // ivar: _conditionPredicate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) MPMediaPredicate *elsePredicate; // ivar: _elsePredicate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) MPMediaPredicate *thenPredicate; // ivar: _thenPredicate


+(BOOL)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg0 thenPredicate:(id)arg1 elsePredicate:(id)arg2 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConditionPredicate:(id)arg0 thenPredicate:(id)arg1 elsePredicate:(id)arg2 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif