// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMDSECUREREMOTEQUEUEDMESSAGE_H
#define _HMDSECUREREMOTEQUEUEDMESSAGE_H

@class HMFObject, NSArray, NSString, HMFTimer;
@protocol HMFObject;


#import "HMDRemoteMessage.h"

@interface _HMDSecureRemoteQueuedMessage : HMFObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDRemoteMessage *message; // ivar: _message
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMFTimer *timer; // ivar: _timer


-(id)init;
-(id)initWithMessage:(id)arg0 ;


@end


#endif