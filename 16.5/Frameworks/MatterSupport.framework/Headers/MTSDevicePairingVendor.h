// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICEPAIRINGVENDOR_H
#define MTSDEVICEPAIRINGVENDOR_H

@class NSArray, NSString, NSNumber, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSDevicePairingVendor : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *identifier; // ivar: _identifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)UUIDFromIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif