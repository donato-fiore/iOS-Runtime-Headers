// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMODELIDENTIFERREQUESTMESSAGEPAYLOAD_H
#define HMDAPPLEMEDIAACCESSORYMODELIDENTIFERREQUESTMESSAGEPAYLOAD_H

@class HMFObject, NSString;
@protocol HMFLogging, HMMessageEncoding;



@interface HMDAppleMediaAccessoryModelIdentiferRequestMessagePayload : HMFObject <HMFLogging, HMMessageEncoding>



@property (readonly, copy) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)messageName;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAccessoryIdentifier:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif