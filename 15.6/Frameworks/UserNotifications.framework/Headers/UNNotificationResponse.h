// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONRESPONSE_H
#define UNNOTIFICATIONRESPONSE_H

@class NSString, BSServiceConnectionEndpoint;
@protocol BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNNotification.h"

@interface UNNotificationResponse : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UNNotification *notification; // ivar: _notification
@property (readonly, copy, nonatomic) NSString *originIdentifier; // ivar: _originIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint; // ivar: _targetConnectionEndpoint
@property (readonly, nonatomic) NSString *targetSceneIdentifier; // ivar: _targetSceneIdentifier


+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 ;
+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 ;
+(id)responseWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 targetSceneIdentifier:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithNotification:(id)arg0 actionIdentifier:(id)arg1 originIdentifier:(id)arg2 targetConnectionEndpoint:(id)arg3 targetSceneIdentifier:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotification:(id)arg0 actionIdentifier:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif