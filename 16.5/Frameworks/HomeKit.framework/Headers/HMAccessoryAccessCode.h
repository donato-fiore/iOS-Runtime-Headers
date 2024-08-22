// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYACCESSCODE_H
#define HMACCESSORYACCESSCODE_H

@class NSArray, NSString, NSNumber;
@protocol HMFObject;

#import <Foundation/Foundation.h>

#import "HMAccessCodeValue.h"
#import "HMAccessory.h"

@interface HMAccessoryAccessCode : NSObject <HMFObject>



@property (readonly, copy) HMAccessCodeValue *accessCodeValue; // ivar: _accessCodeValue
@property (readonly) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasRestrictions; // ivar: _hasRestrictions
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)accessoryAccessCodeWithValue:(id)arg0 accessory:(id)arg1 ;
-(id)createAccessoryAccessCodeValue;
-(id)initWithAccessory:(id)arg0 accessCodeValue:(id)arg1 uniqueIdentifier:(id)arg2 hasRestrictions:(BOOL)arg3 ;


@end


#endif