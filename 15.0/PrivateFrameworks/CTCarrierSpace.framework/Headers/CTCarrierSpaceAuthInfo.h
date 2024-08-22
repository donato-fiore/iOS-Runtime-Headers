// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCARRIERSPACEAUTHINFO_H
#define CTCARRIERSPACEAUTHINFO_H

@class NSData, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (retain, nonatomic) NSDate *expiresAt; // ivar: _expiresAt
@property (retain, nonatomic) NSData *refreshToken; // ivar: _refreshToken
@property (nonatomic) BOOL shouldCache; // ivar: _shouldCache


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif