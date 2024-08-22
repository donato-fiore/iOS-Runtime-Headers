// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNNOTIFICATIONREQUEST_H
#define UNNOTIFICATIONREQUEST_H

@class NSString;
@protocol UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotificationContent.h"
#import "UNNotificationTrigger.h"

@interface UNNotificationRequest : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) UNNotificationContent *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger destinations; // ivar: _destinations
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) UNNotificationTrigger *trigger; // ivar: _trigger


+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg0 content:(id)arg1 trigger:(id)arg2 ;
+(id)requestWithIdentifier:(id)arg0 content:(id)arg1 trigger:(id)arg2 destinations:(NSUInteger)arg3 ;
+(id)requestWithIdentifier:(id)arg0 pushPayload:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_notificationDestinationsForInterruptionLevel:(NSUInteger)arg0 inputDestinations:(NSUInteger)arg1 ;
-(id)_initWithIdentifier:(id)arg0 content:(id)arg1 trigger:(id)arg2 destinations:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addSecurityScope:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enterSecurityScope;
-(void)leaveSecurityScope;
-(void)removeSecurityScope;


@end


#endif