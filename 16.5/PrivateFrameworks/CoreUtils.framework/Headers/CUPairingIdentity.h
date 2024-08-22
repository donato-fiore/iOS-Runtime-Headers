// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUPAIRINGIDENTITY_H
#define CUPAIRINGIDENTITY_H

@class NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CUPairingIdentity : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *altIRK; // ivar: _altIRK
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (copy, nonatomic) NSData *secretKey; // ivar: _secretKey


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif