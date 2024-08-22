// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMEDIADESTINATION_H
#define HMMEDIADESTINATION_H

@class NSArray, NSUUID, NSString;
@protocol HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMMediaDestination : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (copy) NSUUID *audioGroupIdentifier; // ivar: _audioGroupIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property NSUInteger supportedOptions; // ivar: _supportedOptions
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)payloadForDestination:(id)arg0 options:(NSUInteger)arg1 ;
+(id)payloadForNullDestination;
-(BOOL)containsHomeTheaterSupportedOptions;
-(BOOL)containsSupportedOptions:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 parentIdentifier:(id)arg1 supportedOptions:(NSUInteger)arg2 ;
-(id)initWithUniqueIdentifier:(id)arg0 parentIdentifier:(id)arg1 supportedOptions:(NSUInteger)arg2 audioGroupIdentifier:(id)arg3 ;
-(id)logIdentifier;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif