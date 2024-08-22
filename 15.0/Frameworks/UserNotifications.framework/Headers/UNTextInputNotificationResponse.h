// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNTEXTINPUTNOTIFICATIONRESPONSE_H
#define UNTEXTINPUTNOTIFICATIONRESPONSE_H

@class NSString;
@protocol BSXPCCoding;


#import "UNNotificationResponse.h"

@interface UNTextInputNotificationResponse : UNNotificationResponse <BSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userText; // ivar: _userText


+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 targetSceneIdentifier:(id)arg4 userText:(id)arg5 ;
+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 userText:(id)arg4 ;
+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 userText:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 targetSceneIdentifier:(id)arg4 ;
-(id)_initWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 targetSceneIdentifier:(id)arg4 userText:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotification:(id)arg0 actionIdentifier:(id)arg1 userText:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif