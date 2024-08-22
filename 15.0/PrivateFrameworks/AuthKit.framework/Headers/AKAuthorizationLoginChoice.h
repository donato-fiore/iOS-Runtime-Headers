// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONLOGINCHOICE_H
#define AKAUTHORIZATIONLOGINCHOICE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isAppleIDAuthorization) BOOL appleIDAuth; // ivar: _appleIDAuth
@property (nonatomic, getter=shouldCreateAppleID) BOOL createAppleID; // ivar: _createAppleID
@property (copy, nonatomic) NSString *site; // ivar: _site
@property (copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 site:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif