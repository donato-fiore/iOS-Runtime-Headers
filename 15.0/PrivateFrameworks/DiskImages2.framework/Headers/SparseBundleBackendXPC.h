// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPARSEBUNDLEBACKENDXPC_H
#define SPARSEBUNDLEBACKENDXPC_H



#import "BackendXPC.h"

@interface SparseBundleBackendXPC : BackendXPC



+(BOOL)supportsSecureCoding;
-(BOOL)isUnlocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 fileOpenFlags:(int)arg1 ;
-(id)initWithURL:(id)arg0 fileOpenFlags:(int)arg1 bandSize:(NSUInteger)arg2 ;
-(id)newWithCryptoFormat:(*void)arg0 ;
-(struct shared_ptr<Backend> )getCryptoHeaderBackendWithIsNewImage:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceWithBackendXPC:(id)arg0 ;


@end


#endif