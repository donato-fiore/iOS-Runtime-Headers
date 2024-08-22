// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSDIFFIEHELLMANPARAMETER_H
#define STSDIFFIEHELLMANPARAMETER_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSDiffieHellmanParameter : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic) NSUInteger publicKeyGroup; // ivar: _publicKeyGroup


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)asData;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyGroup:(NSUInteger)arg0 key:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif