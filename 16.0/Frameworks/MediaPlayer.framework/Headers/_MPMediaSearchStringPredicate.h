// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPMEDIASEARCHSTRINGPREDICATE_H
#define _MPMEDIASEARCHSTRINGPREDICATE_H

@class NSString, NSSet;
@protocol MPPProtobufferCoding;


#import "MPMediaPredicate.h"

@interface _MPMediaSearchStringPredicate : MPMediaPredicate <MPPProtobufferCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *properties; // ivar: _properties
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicateWithSearchString:(id)arg0 forProperties:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityClass:(Class)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif