// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCONTAINER_H
#define NFCONTAINER_H

@class NSString, NSMutableDictionary;
@protocol NFDefinitionContainer, NFRegistrationContainer, NFResolver;

#import <Foundation/Foundation.h>

#import "NFCallbackStore.h"
#import "NFContainerPool.h"
#import "NFProxyResolver.h"

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer>



@property (retain, nonatomic) NFCallbackStore *callbackStore; // ivar: _callbackStore
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *definitions; // ivar: _definitions
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NFContainerPool *pool; // ivar: _pool
@property (retain, nonatomic) NSMutableDictionary *privateContainers; // ivar: _privateContainers
@property (readonly, nonatomic) NFProxyResolver *proxyResolver;
@property (readonly, nonatomic) NSObject<NFResolver> *resolver;
@property (readonly) Class superclass;


-(id)definitionForKey:(id)arg0 ;
-(id)init;
-(id)initAsPrivateContainer;
-(id)initWithBundleAssemblies:(id)arg0 assemblies:(id)arg1 ;
-(id)initWithBundleAssemblies:(id)arg0 assemblies:(id)arg1 singletonPool:(id)arg2 bridgedContainer:(id)arg3 ;
-(id)register:(id)arg0 createDefinitionBlock:(id)arg1 ;
-(id)registerClass:(Class)arg0 factory:(id)arg1 ;
-(id)registerClass:(Class)arg0 name:(id)arg1 factory:(id)arg2 ;
-(id)registerKey:(id)arg0 factory:(id)arg1 ;
-(id)registerProtocol:(id)arg0 factory:(id)arg1 ;
-(id)registerProtocol:(id)arg0 name:(id)arg1 factory:(id)arg2 ;
-(id)unsafeRegisterForKey:(id)arg0 name:(id)arg1 factory:(id)arg2 ;
-(void)validateDefinitionsWithProxyResolver:(id)arg0 ;


@end


#endif