// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDACTIVATIONLOCKAUTHINFO_H
#define FMDACTIVATIONLOCKAUTHINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDActivationLockAuthInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDsid; // ivar: _altDsid
@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (nonatomic) BOOL isAccountHSA2; // ivar: _isAccountHSA2
@property (nonatomic) BOOL isActivationLockEnabled; // ivar: _isActivationLockEnabled
@property (nonatomic) BOOL isFindMyON; // ivar: _isFindMyON
@property (nonatomic) BOOL isSignedIntoICloud; // ivar: _isSignedIntoICloud
@property (copy, nonatomic) NSString *pet; // ivar: _pet
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif