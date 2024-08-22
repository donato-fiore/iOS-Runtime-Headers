// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFCALLBACKREGISTRATION_H
#define TFCALLBACKREGISTRATION_H

@class NSString;
@protocol TFCallbackRegistration, TFDefinitionContainer;

#import <Foundation/Foundation.h>

#import "TFCallbackStore.h"

@interface TFCallbackRegistration : NSObject <TFCallbackRegistration>



@property (readonly, nonatomic) TFCallbackStore *callbackStore; // ivar: _callbackStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TFDefinitionContainer> *privateContainer; // ivar: _privateContainer
@property (readonly) Class superclass;


-(id)initWithCallbackStore:(id)arg0 privateContainer:(id)arg1 ;
-(void)whenResolvingClass:(Class)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingKey:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingProtocol:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenUnsafeResolvingWithKey:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;


@end


#endif