// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXSTRUCTARRAYMUTABLEPROXY_H
#define CKXSTRUCTARRAYMUTABLEPROXY_H



#import "CKXArrayProxyBase.h"

@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) NSInteger index; // ivar: _index


-(BOOL)isMutable;
-(NSInteger)count;
-(void)appendProxy:(id)arg0 ;
-(void)appendWithProxyBlock:(id)arg0 ;
-(void)reset;


@end


#endif