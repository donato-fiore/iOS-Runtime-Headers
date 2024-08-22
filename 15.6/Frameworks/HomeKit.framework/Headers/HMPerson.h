// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPERSON_H
#define HMPERSON_H

@class NSUUID, NSArray, NSString, NSSet;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMPerson : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *name; // ivar: _name
@property (copy) NSSet *personLinks; // ivar: _personLinks
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif