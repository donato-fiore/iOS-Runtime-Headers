// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIASYSTEMDATA_H
#define HMMEDIASYSTEMDATA_H

@class NSUUID;
@protocol HMEProtoBufferCoding, NSSecureCoding;


#import "HMMediaGroup.h"

@interface HMMediaSystemData : HMMediaGroup <HMEProtoBufferCoding, NSSecureCoding>



@property (copy) NSUUID *leftDestinationIdentifier; // ivar: _leftDestinationIdentifier
@property (copy) NSUUID *rightDestinationIdentifier; // ivar: _rightDestinationIdentifier


+(BOOL)supportsSecureCoding;
+(id)codingKey;
+(id)defaultGroupName;
+(id)roomNameSentinel;
+(id)unknownDestinationSentinel;
-(BOOL)hasRoleIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)destinationUniqueIdentifiers;
-(id)encodeToProtoBufferData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 name:(id)arg2 defaultName:(BOOL)arg3 associatedGroupIdentifier:(id)arg4 leftDestinationIdentifier:(id)arg5 rightDestinationIdentifier:(id)arg6 ;
-(id)initWithProtoBufferData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif