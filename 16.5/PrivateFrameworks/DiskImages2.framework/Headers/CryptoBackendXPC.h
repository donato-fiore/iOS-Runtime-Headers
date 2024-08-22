// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRYPTOBACKENDXPC_H
#define CRYPTOBACKENDXPC_H



#import "BackendXPC.h"

@interface CryptoBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC; // ivar: _baseBackendXPC


+(BOOL)supportsSecureCoding;
-(BOOL)isUnlocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormat:(*void)arg0 baseBackendXPC:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceWithBackendXPC:(id)arg0 ;


@end


#endif