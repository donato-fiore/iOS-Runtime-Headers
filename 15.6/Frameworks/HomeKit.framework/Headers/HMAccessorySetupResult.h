// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYSETUPRESULT_H
#define HMACCESSORYSETUPRESULT_H

@class NSArray, NSString, NSUUID;
@protocol HMFObject, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HMAccessorySetupResult : NSObject <HMFObject, NSSecureCoding, NSCopying>



@property (readonly, copy) NSArray *accessoryUniqueIdentifiers; // ivar: _accessoryUniqueIdentifiers
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeUniqueIdentifier:(id)arg0 accessoryUniqueIdentifiers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif