// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFACECLASSIFICATION_H
#define HMFACECLASSIFICATION_H

@class NSArray, NSString, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMFaceCrop.h"
#import "HMPerson.h"

@interface HMFaceClassification : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFaceCrop *faceCrop; // ivar: _faceCrop
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMPerson *person; // ivar: _person
@property (readonly, copy) NSUUID *personManagerUUID; // ivar: _personManagerUUID
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonManagerUUID:(id)arg0 person:(id)arg1 faceCrop:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif