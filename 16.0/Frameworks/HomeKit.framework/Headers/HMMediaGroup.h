// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUP_H
#define HMMEDIAGROUP_H

@class NSUUID, NSArray, NSString;
@protocol HMFLogging, HMFObject, HMEProtoBufferCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMMediaGroup : NSObject <HMFLogging, HMFObject, HMEProtoBufferCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy) NSUUID *associatedGroupIdentifier; // ivar: _associatedGroupIdentifier
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultName) BOOL defaultName; // ivar: _defaultName
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *destinationIdentifiers;
@property (readonly, copy) NSArray *destinationUniqueIdentifiers;
@property (copy) NSArray *destinationUniqueIdentifiersInternal; // ivar: _destinationUniqueIdentifiersInternal
@property (readonly) NSUInteger hash;
@property (copy) NSUUID *identifier; // ivar: _identifier
@property (copy) NSString *name; // ivar: _name
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)groupsWithProtoBufferData:(id)arg0 ;
+(id)logCategory;
+(id)protoBufferDataWithGroups:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeToProtoBufferData;
-(id)initClassWithProtoBufferData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 name:(id)arg2 defaultName:(BOOL)arg3 destinationIdentifiers:(id)arg4 associatedGroupIdentifier:(id)arg5 ;
-(id)initWithProtoBufferData:(id)arg0 ;
-(id)logIdentifier;
-(id)mediaSystemData;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeToProtoBufferDataWithEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif