// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIACOMPOUNDPREDICATE_H
#define MPMEDIACOMPOUNDPREDICATE_H

@class NSString, NSArray;
@protocol MPPProtobufferCoding;


#import "MPMediaPredicate.h"

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *predicates; // ivar: _predicates
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicateMatchingPredicates:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicates:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif