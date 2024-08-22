// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef THTHREADNETWORKCREDENTIALS_H
#define THTHREADNETWORKCREDENTIALS_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "THThreadNetworkCredentialsDataSet.h"

@interface THThreadNetworkCredentials : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *PANID; // ivar: _PANID
@property (copy, nonatomic) NSData *PSKc; // ivar: _PSKc
@property (nonatomic) unsigned char channel; // ivar: _channel
@property (retain, nonatomic) THThreadNetworkCredentialsDataSet *credentialsDataSet; // ivar: _credentialsDataSet
@property (nonatomic) BOOL isActiveDevice; // ivar: _isActiveDevice
@property (copy, nonatomic) NSData *masterKey; // ivar: _masterKey
@property (copy, nonatomic) NSString *passPhrase; // ivar: _passPhrase
@property (copy, nonatomic) NSString *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMasterKey:(id)arg0 passPhrase:(id)arg1 PSKc:(id)arg2 channel:(unsigned char)arg3 PANID:(id)arg4 userInfo:(id)arg5 ;
-(id)initWithMasterKey:(id)arg0 passPhrase:(id)arg1 PSKc:(id)arg2 channel:(unsigned char)arg3 PANID:(id)arg4 userInfo:(id)arg5 credentialDataSet:(id)arg6 isActiveDevice:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif