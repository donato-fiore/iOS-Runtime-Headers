// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMODELIDENTIFERRESPONSEMESSAGEPAYLOAD_H
#define HMDAPPLEMEDIAACCESSORYMODELIDENTIFERRESPONSEMESSAGEPAYLOAD_H

@class HMFObject, NSString, NSUUID;
@protocol HMMessageEncoding;



@interface HMDAppleMediaAccessoryModelIdentiferResponseMessagePayload : HMFObject <HMMessageEncoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *modelIdentifier; // ivar: _modelIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithModelIdentifier:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif