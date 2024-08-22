// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BTCLOUDACCOUNTINFO_H
#define BTCLOUDACCOUNTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BTCloudAccountInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL isSignedIn; // ivar: _isSignedIn
@property (retain, nonatomic) NSString *loginID; // ivar: _loginID
@property (nonatomic) BOOL manateeAvailable; // ivar: _manateeAvailable


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif