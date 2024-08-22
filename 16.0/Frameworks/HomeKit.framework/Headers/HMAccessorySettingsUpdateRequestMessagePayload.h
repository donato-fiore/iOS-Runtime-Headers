// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYSETTINGSUPDATEREQUESTMESSAGEPAYLOAD_H
#define HMACCESSORYSETTINGSUPDATEREQUESTMESSAGEPAYLOAD_H

@class NSUUID, NSArray, NSString;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>

#import "HMImmutableSettingValue.h"

@interface HMAccessorySettingsUpdateRequestMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMImmutableSettingValue *settingValue; // ivar: _settingValue
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 keyPath:(id)arg1 settingValue:(id)arg2 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif