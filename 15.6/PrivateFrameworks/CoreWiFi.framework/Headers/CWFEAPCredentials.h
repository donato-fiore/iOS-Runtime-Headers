// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFEAPCREDENTIALS_H
#define CWFEAPCREDENTIALS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding>

 {
    *void _TLSIdentityHandle;
}


@property (copy, nonatomic) *__SecIdentity TLSIdentity;
@property (copy, nonatomic) *void TLSIdentityHandle;
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEAPCredentials:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif