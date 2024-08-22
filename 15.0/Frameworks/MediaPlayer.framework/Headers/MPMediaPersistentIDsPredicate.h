// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAPERSISTENTIDSPREDICATE_H
#define MPMEDIAPERSISTENTIDSPREDICATE_H

@class NSString;
@protocol MPPProtobufferCoding;


#import "MPMediaPredicate.h"

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *NSInteger persistentIDs; // ivar: _persistentIDs
@property (readonly, nonatomic) BOOL shouldContain; // ivar: _shouldContain
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicateWithPersistentIDs:(*NSInteger)arg0 count:(NSUInteger)arg1 shouldContain:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityClass:(Class)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif