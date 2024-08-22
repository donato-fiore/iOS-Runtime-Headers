// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSNILBAGVALUEFILTERINGPROXY_H
#define AMSNILBAGVALUEFILTERINGPROXY_H

@class NSProxy;
@protocol AMSBagProtocol;



@interface AMSNilBagValueFilteringProxy : NSProxy

@property (readonly, nonatomic) NSObject<AMSBagProtocol> *wrappedBag; // ivar: _wrappedBag


+(id)proxyWithBag:(id)arg0 ;
-(id)URLForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 account:(id)arg1 ;
-(id)_substituteNilIfNeededWithValue:(id)arg0 key:(id)arg1 valueType:(NSUInteger)arg2 ;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithBag:(id)arg0 ;
-(id)integerForKey:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif