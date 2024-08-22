// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMATCHERREQUEST_H
#define SHMATCHERREQUEST_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SHSignature.h"

@interface SHMatcherRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *deadline; // ivar: _deadline
@property (readonly, nonatomic) BOOL hasHitDeadline;
@property (readonly, copy, nonatomic) NSString *installationID; // ivar: _installationID
@property (readonly, nonatomic) BOOL sendNotifications; // ivar: _sendNotifications
@property (readonly, nonatomic) SHSignature *signature; // ivar: _signature
@property (readonly, nonatomic) NSInteger stopCondition; // ivar: _stopCondition
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)requestOnceWithNotifications:(BOOL)arg0 ;
+(id)requestToMatchSignature:(id)arg0 installationID:(id)arg1 sendNotifications:(BOOL)arg2 ;
+(id)requestToMatchUntilDeadline:(id)arg0 sendNotifications:(BOOL)arg1 ;
+(id)requestUntilMatchWithNotifications:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignature:(id)arg0 deadline:(id)arg1 installationID:(id)arg2 sendNotifications:(BOOL)arg3 stopCondition:(NSInteger)arg4 ;
-(id)initWithSignature:(id)arg0 deadline:(id)arg1 sendNotifications:(BOOL)arg2 stopCondition:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif