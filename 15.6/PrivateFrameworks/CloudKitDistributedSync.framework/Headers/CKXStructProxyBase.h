// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXSTRUCTPROXYBASE_H
#define CKXSTRUCTPROXYBASE_H



#import "CKXProxyBase.h"
#import "CKXStructProxyChildCache.h"

@interface CKXStructProxyBase : CKXProxyBase

@property (readonly, nonatomic) CKXStructProxyChildCache *childProxyCache; // ivar: _childProxyCache
@property (readonly, nonatomic) ? structInstance; // ivar: _structInstance


-(id)_init;
-(id)dataForToken:(NSUInteger)arg0 ;
-(id)stringForToken:(NSUInteger)arg0 ;
-(void)associateWithStructInstance:(struct ? )arg0 ;
-(void)copyBytes:(*void)arg0 length:(*NSUInteger)arg1 isNull:(*BOOL)arg2 forToken:(NSUInteger)arg3 ;
-(void)reset;


@end


#endif