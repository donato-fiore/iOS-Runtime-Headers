// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKPCSAUTHCONTEXT_H
#define AKPCSAUTHCONTEXT_H

@class NSDate, NSDictionary, NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKPCSAuthContext : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSUUID *webSessionID; // ivar: _webSessionID
@property (readonly, copy, nonatomic) NSString *webSessionIdentifier; // ivar: _webSessionIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWebSessionID:(id)arg0 expiryDate:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithWebSessionIdentifier:(id)arg0 expiryDate:(id)arg1 userInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif