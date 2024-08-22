// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDIDSMESSAGECONTEXT_H
#define HMDIDSMESSAGECONTEXT_H

@class HMFObject, HMFMessageDestination, NSUUID, NSDictionary;



@interface HMDIDSMessageContext : HMFObject

@property (readonly) HMFMessageDestination *destination; // ivar: _destination
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


-(id)init;
-(id)initWithIdentifier:(id)arg0 destination:(id)arg1 userInfo:(id)arg2 ;


@end


#endif