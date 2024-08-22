// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRWEAKPROXY_H
#define MRWEAKPROXY_H

@class Protocol;

#import <Foundation/Foundation.h>


@interface MRWeakProxy : NSObject

@property (weak, nonatomic) id *object; // ivar: _object
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol


+(id)weakProxyWithObject:(id)arg0 protocol:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif