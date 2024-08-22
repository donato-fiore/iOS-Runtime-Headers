// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCHIPECOSYSTEM_H
#define HMCHIPECOSYSTEM_H

@class NSUUID, NSArray, NSString, NSNumber;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCHIPEcosystem : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, getter=isAppleEcosystem) BOOL appleEcosystem;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *identifier; // ivar: _identifier
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif