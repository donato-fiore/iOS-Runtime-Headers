// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PABRIDGEDTCCIDENTITY_H
#define PABRIDGEDTCCIDENTITY_H

@protocol NSSecureCoding, OS_tcc_identity;

#import <Foundation/Foundation.h>


@interface PABridgedTCCIdentity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<OS_tcc_identity> *identity; // ivar: _identity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTCCIdentity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif