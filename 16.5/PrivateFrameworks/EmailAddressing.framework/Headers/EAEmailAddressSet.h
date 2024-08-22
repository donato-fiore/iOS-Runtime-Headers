// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EAEMAILADDRESSSET_H
#define EAEMAILADDRESSSET_H

@class NSMutableSet, NSString, NSData;
@protocol EFLoggable, NSSecureCoding;



@interface EAEmailAddressSet : NSMutableSet <EFLoggable, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *internalSet; // ivar: _internalSet
@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)log;
+(id)set;
+(id)setWithCapacity:(NSUInteger)arg0 ;
-(BOOL)intersectsSet:(id)arg0 ;
-(BOOL)isEqualToSet:(id)arg0 ;
-(BOOL)isSubsetOfSet:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)intersectSet:(id)arg0 ;
-(void)minusSet:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)setSet:(id)arg0 ;
-(void)unionSet:(id)arg0 ;


@end


#endif