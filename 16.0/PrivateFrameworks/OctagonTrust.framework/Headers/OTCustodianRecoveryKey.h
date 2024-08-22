// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OTCUSTODIANRECOVERYKEY_H
#define OTCUSTODIANRECOVERYKEY_H

@class NSString, NSUUID, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OTCustodianRecoveryKey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *recoveryString; // ivar: _recoveryString
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSData *wrappedKey; // ivar: _wrappedKey
@property (readonly, nonatomic) NSData *wrappingKey; // ivar: _wrappingKey


+(BOOL)supportsSecureCoding;
-(BOOL)generateWrappingWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCustodianRecoveryKey:(id)arg0 ;
-(BOOL)unwrapWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 recoveryString:(id)arg1 error:(*id)arg2 ;
-(id)initWithWrappedKey:(id)arg0 wrappingKey:(id)arg1 uuid:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif