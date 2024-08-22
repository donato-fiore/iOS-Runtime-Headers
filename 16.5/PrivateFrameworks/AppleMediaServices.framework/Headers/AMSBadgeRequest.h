// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBADGEREQUEST_H
#define AMSBADGEREQUEST_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSBadgeRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *badgeIdentifier; // ivar: _badgeIdentifier
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSDictionary *metrics; // ivar: _metrics


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPushPayload:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif