// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSECURELOCATIONSSUBSCRIPTIONCONTEXT_H
#define SPSECURELOCATIONSSUBSCRIPTIONCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSecureLocationsSubscriptionContext : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *clientApp; // ivar: _clientApp
@property (nonatomic) NSInteger fetchMode; // ivar: _fetchMode
@property (nonatomic) NSInteger subscriptionMode; // ivar: _subscriptionMode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif