// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYSETUPCOMPLETEDINFO_H
#define HMACCESSORYSETUPCOMPLETEDINFO_H

@class NSArray, NSString;
@protocol HMFObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMAccessorySetupCompletedInfo : NSObject <HMFObject, NSSecureCoding>



@property (readonly, copy) NSArray *addedAccessoryUUIDs; // ivar: _addedAccessoryUUIDs
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *homeUUID; // ivar: _homeUUID
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 addedAccessoryUUIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif