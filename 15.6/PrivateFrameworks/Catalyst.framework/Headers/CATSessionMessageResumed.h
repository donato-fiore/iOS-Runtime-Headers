// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSESSIONMESSAGERESUMED_H
#define CATSESSIONMESSAGERESUMED_H

@class NSArray, NSDictionary, NSUUID;


#import "CATSessionMessage.h"

@interface CATSessionMessageResumed : CATSessionMessage

@property (copy, nonatomic) NSArray *pendingRemoteTaskUUIDs; // ivar: _pendingRemoteTaskUUIDs
@property (copy, nonatomic) NSDictionary *serverUserInfo; // ivar: _serverUserInfo
@property (copy, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif