// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFCONTEXT_H
#define TFCONTEXT_H

@class NSString, NSMutableDictionary;
@protocol TFContext;

#import <Foundation/Foundation.h>

#import "TFCallbackStore.h"

@interface TFContext : NSObject <TFContext>



@property (readonly, nonatomic) TFCallbackStore *callbackStore; // ivar: _callbackStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *objects; // ivar: _objects
@property (readonly) Class superclass;


-(id)initWithCallbackStore:(id)arg0 ;
-(id)mergeWithContext:(id)arg0 ;
-(id)resolveForKey:(id)arg0 ;
-(void)unsafeUseObject:(id)arg0 forKey:(id)arg1 name:(id)arg2 ;
-(void)useObject:(id)arg0 forClass:(Class)arg1 ;
-(void)useObject:(id)arg0 forClass:(Class)arg1 name:(id)arg2 ;
-(void)useObject:(id)arg0 forKey:(id)arg1 ;
-(void)useObject:(id)arg0 forProtocol:(id)arg1 ;
-(void)useObject:(id)arg0 forProtocol:(id)arg1 name:(id)arg2 ;
-(void)whenResolvingClass:(Class)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingKey:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenResolvingProtocol:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;
-(void)whenUnsafeResolvingWithKey:(id)arg0 scope:(id)arg1 callbackBlock:(id)arg2 ;


@end


#endif