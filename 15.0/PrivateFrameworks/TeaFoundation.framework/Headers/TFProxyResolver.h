// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFPROXYRESOLVER_H
#define TFPROXYRESOLVER_H

@class NSString;
@protocol TFResolver, TFValidationResolver, TFDefinitionContainer;

#import <Foundation/Foundation.h>

#import "TFCallbackStore.h"
#import "TFContext.h"
#import "TFContainerPool.h"

@interface TFProxyResolver : NSObject <TFResolver, TFValidationResolver>



@property (readonly, nonatomic) TFCallbackStore *callbackStore; // ivar: _callbackStore
@property (retain, nonatomic) TFContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TFContainerPool *pool; // ivar: _pool
@property (retain, nonatomic) NSObject<TFDefinitionContainer> *privateContainer; // ivar: _privateContainer
@property (retain, nonatomic) NSObject<TFDefinitionContainer> *publicContainer; // ivar: _publicContainer
@property (readonly) Class superclass;


-(id)contextWithContextBlock:(id)arg0 ;
-(id)createProxyResolverForPrivateContainer:(id)arg0 ;
-(id)currentObjectGraphResolver:(NSUInteger)arg0 ;
-(id)initWithPublicContainer:(id)arg0 privateContainer:(id)arg1 inPool:(id)arg2 callbackStore:(id)arg3 ;
-(id)resolveClass:(Class)arg0 ;
-(id)resolveClass:(Class)arg0 contextBlock:(id)arg1 ;
-(id)resolveClass:(Class)arg0 name:(id)arg1 ;
-(id)resolveClass:(Class)arg0 name:(id)arg1 contextBlock:(id)arg2 ;
-(id)resolveForKey:(id)arg0 ;
-(id)resolveForKey:(id)arg0 context:(id)arg1 ;
-(id)resolveForKey:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)resolveForKey:(id)arg0 context:(id)arg1 validateBlock:(id)arg2 ;
-(id)resolveProtocol:(id)arg0 ;
-(id)resolveProtocol:(id)arg0 contextBlock:(id)arg1 ;
-(id)resolveProtocol:(id)arg0 name:(id)arg1 ;
-(id)resolveProtocol:(id)arg0 name:(id)arg1 contextBlock:(id)arg2 ;
-(void)ensure:(id)arg0 ;
-(void)ensureClass:(Class)arg0 ;
-(void)ensureClass:(Class)arg0 name:(id)arg1 ;
-(void)ensureProtocol:(id)arg0 ;
-(void)ensureProtocol:(id)arg0 name:(id)arg1 ;
-(void)linkResolverWithLinkBlock:(id)arg0 ;


@end


#endif