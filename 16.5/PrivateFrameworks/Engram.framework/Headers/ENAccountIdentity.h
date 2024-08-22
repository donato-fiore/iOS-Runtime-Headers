// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENACCOUNTIDENTITY_H
#define ENACCOUNTIDENTITY_H

@protocol NSSecureCoding, ENAccountKey, ENDeviceKey;

#import <Foundation/Foundation.h>


@interface ENAccountIdentity : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<ENAccountKey> *accountKey; // ivar: _accountKey
@property (retain, nonatomic) NSObject<ENDeviceKey> *deviceKey; // ivar: _deviceKey


+(BOOL)supportsSecureCoding;
-(id)initWithAccountKey:(id)arg0 deviceKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif