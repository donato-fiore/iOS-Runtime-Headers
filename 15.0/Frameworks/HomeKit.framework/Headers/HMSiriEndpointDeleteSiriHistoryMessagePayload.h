// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSIRIENDPOINTDELETESIRIHISTORYMESSAGEPAYLOAD_H
#define HMSIRIENDPOINTDELETESIRIHISTORYMESSAGEPAYLOAD_H

@class NSUUID, NSArray, NSString;
@protocol HMFObject, HMMessageEncoding;

#import <Foundation/Foundation.h>


@interface HMSiriEndpointDeleteSiriHistoryMessagePayload : NSObject <HMFObject, HMMessageEncoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)messageName;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif