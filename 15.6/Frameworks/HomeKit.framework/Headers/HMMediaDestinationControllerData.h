// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMEDIADESTINATIONCONTROLLERDATA_H
#define HMMEDIADESTINATIONCONTROLLERDATA_H

@class NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding, HMEProtoBufferCoding;

#import <Foundation/Foundation.h>


@interface HMMediaDestinationControllerData : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding, HMEProtoBufferCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy) NSArray *availableDestinationIdentifiers; // ivar: _availableDestinationIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSUUID *destinationIdentifier; // ivar: _destinationIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeToProtoBufferData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 destinationIdentifier:(id)arg2 availableDestinationIdentifiers:(id)arg3 ;
-(id)initWithProtoBufferData:(id)arg0 ;
-(id)logIdentifier;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif