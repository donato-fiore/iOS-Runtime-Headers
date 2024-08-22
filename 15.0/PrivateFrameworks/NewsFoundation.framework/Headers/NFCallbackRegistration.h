// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCALLBACKREGISTRATION_H
#define NFCALLBACKREGISTRATION_H

@class NSString;
@protocol NFCallbackRegistration, NFDefinitionContainer;

#import <Foundation/Foundation.h>

#import "NFCallbackStore.h"

@interface NFCallbackRegistration : NSObject <NFCallbackRegistration>



@property (readonly, nonatomic) NFCallbackStore *callbackStore; // ivar: _callbackStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NFDefinitionContainer> *privateContainer; // ivar: _privateContainer
@property (readonly) Class superclass;


-(id)initWithCallbackStore:(id)arg0 privateContainer:(id)arg1 ;
-(void)whenResolvingClass:(Class)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingKey:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingProtocol:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenUnsafeResolvingWithKey:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;


@end


#endif