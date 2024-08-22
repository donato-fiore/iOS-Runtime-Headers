// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGSFETCHREQUESTMESSAGEPAYLOAD_H
#define HMACCESSORYSETTINGSFETCHREQUESTMESSAGEPAYLOAD_H

@class NSUUID, NSArray, NSString;
@protocol HMFLogging, HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>


@interface HMAccessorySettingsFetchRequestMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *keyPaths; // ivar: _keyPaths
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 keyPaths:(id)arg1 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif