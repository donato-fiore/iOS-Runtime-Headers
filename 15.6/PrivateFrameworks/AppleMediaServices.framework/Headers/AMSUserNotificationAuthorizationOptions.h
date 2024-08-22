// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUSERNOTIFICATIONAUTHORIZATIONOPTIONS_H
#define AMSUSERNOTIFICATIONAUTHORIZATIONOPTIONS_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSUserNotificationAuthorizationOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger authorizationOptions; // ivar: _authorizationOptions
@property (retain, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptionsDictionary:(id)arg0 ;
-(id)optionsDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif