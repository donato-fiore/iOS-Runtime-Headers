// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSCHWIFIAWARESECURITYINFO_H
#define STSCHWIFIAWARESECURITYINFO_H

@class NSArray, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSCHWiFiAwareSecurityInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *cipherSuite; // ivar: _cipherSuite
@property (retain, nonatomic) NSData *datapathPmk; // ivar: _datapathPmk
@property (retain, nonatomic) NSData *datapathPmkID; // ivar: _datapathPmkID
@property (retain, nonatomic) NSArray *dhInfo; // ivar: _dhInfo
@property (retain, nonatomic) NSString *passphrase; // ivar: _passphrase


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)asData;
-(id)description;
-(id)initWithCipherSuites:(id)arg0 dhInfo:(id)arg1 passphrase:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPMK:(id)arg0 pmkID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif