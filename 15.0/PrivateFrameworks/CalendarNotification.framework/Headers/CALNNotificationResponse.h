// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNNOTIFICATIONRESPONSE_H
#define CALNNOTIFICATIONRESPONSE_H

@class NSString, BSServiceConnectionEndpoint;

#import <Foundation/Foundation.h>

#import "CALNNotification.h"

@interface CALNNotificationResponse : NSObject

@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) CALNNotification *notification; // ivar: _notification
@property (readonly, copy, nonatomic) NSString *originIdentifier; // ivar: _originIdentifier
@property (readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // ivar: _targetConnectionEndpoint


+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 ;


@end


#endif