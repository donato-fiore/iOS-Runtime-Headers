// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCONVERSATIONINVITATIONPREFERENCE_H
#define TUCONVERSATIONINVITATIONPREFERENCE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationInvitationPreference : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger handleType; // ivar: _handleType
@property (readonly, nonatomic) NSInteger notificationStyles; // ivar: _notificationStyles


+(BOOL)supportsSecureCoding;
+(NSInteger)validateNotificationStyles:(NSInteger)arg0 ;
+(id)incomingCallInvitationPreferences;
+(id)invitationPreferencesForAllHandlesWithStyles:(NSInteger)arg0 ;
+(id)letMeInResponseInvitationPreferences;
+(id)noNotificationInvitationPreferences;
+(id)standardInvitationPreferencesForLink;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInvitationPreference:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandleType:(NSInteger)arg0 notificationStyles:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif