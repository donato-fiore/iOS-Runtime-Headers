// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEMESSAGESERIALIZATION_H
#define HMDREMOTEMESSAGESERIALIZATION_H

@class HMFObject;



@interface HMDRemoteMessageSerialization : HMFObject



+(BOOL)legacyNotificationMessage:(id)arg0 ;
+(id)dictionaryForMessage:(id)arg0 error:(*id)arg1 ;
+(id)logSessionContextFromData:(id)arg0 ;
+(id)remoteMessageWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif