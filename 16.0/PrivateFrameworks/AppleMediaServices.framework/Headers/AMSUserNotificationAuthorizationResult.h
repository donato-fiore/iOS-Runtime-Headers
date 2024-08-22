// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUSERNOTIFICATIONAUTHORIZATIONRESULT_H
#define AMSUSERNOTIFICATIONAUTHORIZATIONRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSEngagementRequest.h"

@interface AMSUserNotificationAuthorizationResult : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (retain, nonatomic) AMSEngagementRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif