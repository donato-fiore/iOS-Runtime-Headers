// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSVASTRANSACTION_H
#define STSVASTRANSACTION_H

@class NSData, NSString, NSNumber;


#import "STSAuxiliaryTransaction.h"

@interface STSVASTransaction : STSAuxiliaryTransaction

@property (readonly, nonatomic) NSData *merchantId; // ivar: _merchantId
@property (readonly, nonatomic) NSString *signupUrl; // ivar: _signupUrl
@property (readonly, nonatomic) NSNumber *terminalAppVersion; // ivar: _terminalAppVersion
@property (readonly, nonatomic) NSInteger terminalMode; // ivar: _terminalMode


+(BOOL)supportsSecureCoding;
+(id)vasTransactionForCredential:(id)arg0 withDictionary:(id)arg1 ;
-(id)initForCredential:(id)arg0 withDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)vasCredential;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif