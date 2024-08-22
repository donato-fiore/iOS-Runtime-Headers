// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAPROPERTYPREDICATE_H
#define MPMEDIAPROPERTYPREDICATE_H

@class NSString;
@protocol MPPProtobufferCoding;


#import "MPMediaPredicate.h"

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding>

 {
    NSString *_property;
    id *_value;
    NSInteger _comparisonType;
}


@property (nonatomic) NSInteger comparisonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *property;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *value;


+(BOOL)supportsSecureCoding;
+(id)predicateWithValue:(id)arg0 forProperty:(id)arg1 ;
+(id)predicateWithValue:(id)arg0 forProperty:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForML3EntityProperty:(id)arg0 ;
-(id)descriptionOfValue:(id)arg0 forProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif