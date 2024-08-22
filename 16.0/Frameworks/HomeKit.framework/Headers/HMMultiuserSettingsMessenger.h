// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMULTIUSERSETTINGSMESSENGER_H
#define HMMULTIUSERSETTINGSMESSENGER_H

@class NSArray, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFObject;

#import <Foundation/Foundation.h>


@interface HMMultiuserSettingsMessenger : NSObject <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, copy) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithMessageDispatcher:(id)arg0 messageTargetUUID:(id)arg1 ;
-(id)logIdentifier;
-(void)sendFetchMultiuserSettingsRequest:(id)arg0 ;


@end


#endif