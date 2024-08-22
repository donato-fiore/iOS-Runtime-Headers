// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSLOCALPAIRINGIDENTITYDATAERRORPAIR_H
#define IDSLOCALPAIRINGIDENTITYDATAERRORPAIR_H

@class NSError, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSData *identityData; // ivar: _identityData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithIdentityData:(id)arg0 ;
-(id)initWithIdentityData:(id)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif