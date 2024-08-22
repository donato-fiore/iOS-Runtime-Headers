// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIUSERNOTIFICATIONACTION_H
#define UIUSERNOTIFICATIONACTION_H

@class NSString, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (nonatomic) NSUInteger activationMode; // ivar: _activationMode
@property (readonly, nonatomic) NSString *activationModeString; // ivar: _activationModeString
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired; // ivar: _authenticationRequired
@property (nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, nonatomic) NSString *behaviorString; // ivar: _behaviorString
@property (nonatomic, getter=isDestructive) BOOL destructive; // ivar: _destructive
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 behavior:(NSUInteger)arg2 parameters:(id)arg3 activationMode:(NSUInteger)arg4 isAuthenticationRequired:(BOOL)arg5 isDestructive:(BOOL)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)validatedAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif