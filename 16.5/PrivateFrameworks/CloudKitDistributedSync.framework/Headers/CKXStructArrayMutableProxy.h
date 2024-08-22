// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXSTRUCTARRAYMUTABLEPROXY_H
#define CKXSTRUCTARRAYMUTABLEPROXY_H



#import "CKXArrayProxyBase.h"

@interface CKXStructArrayMutableProxy : CKXArrayProxyBase

@property (nonatomic) NSInteger index; // ivar: _index


-(BOOL)isMutable;
-(NSInteger)count;
-(void)appendWithProxyBlock:(id)arg0 ;
-(void)reset;


@end


#endif