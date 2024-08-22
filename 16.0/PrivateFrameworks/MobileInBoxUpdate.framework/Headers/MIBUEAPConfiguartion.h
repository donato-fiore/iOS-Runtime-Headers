// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIBUEAPCONFIGUARTION_H
#define MIBUEAPCONFIGUARTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MIBUEAPConfiguartion : NSObject

@property (copy, nonatomic) NSArray *tlsCertificateChain; // ivar: _tlsCertificateChain
@property (readonly, nonatomic) *__SecKey tlsKey; // ivar: _tlsKey


-(id)init;
-(void)setTLSKey:(struct __SecKey *)arg0 ;


@end


#endif