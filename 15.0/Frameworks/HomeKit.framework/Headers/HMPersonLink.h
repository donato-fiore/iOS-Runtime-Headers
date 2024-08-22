// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMPERSONLINK_H
#define HMPERSONLINK_H

@class NSArray, NSString, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMPersonLink : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *personManagerUUID; // ivar: _personManagerUUID
@property (readonly, copy) NSUUID *personUUID; // ivar: _personUUID
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonUUID:(id)arg0 personManagerUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif