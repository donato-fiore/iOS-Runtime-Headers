// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFMESSAGEDESTINATION_H
#define HMFMESSAGEDESTINATION_H

@class NSArray, NSString, NSUUID;
@protocol HMFObject, NSCopying, NSSecureCoding;


#import "HMFObject.h"

@interface HMFMessageDestination : HMFObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *target; // ivar: _target


+(BOOL)supportsSecureCoding;
+(id)allMessageDestinations;
+(id)allMessageTargets;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif