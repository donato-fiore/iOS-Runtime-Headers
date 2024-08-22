// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUILIKENESSRENDERER_H
#define CNUILIKENESSRENDERER_H


#import <Foundation/Foundation.h>


@interface CNUILikenessRenderer : NSObject



+(id)cachingRendererWithLikenessResolver:(id)arg0 capacity:(NSUInteger)arg1 schedulerProvider:(id)arg2 ;
+(id)cachingRendererWithLikenessResolver:(id)arg0 schedulerProvider:(id)arg1 ;
+(id)concurrentCachingRendererWithLikenessResolver:(id)arg0 capacity:(NSUInteger)arg1 schedulerProvider:(id)arg2 ;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysForCaching;
+(id)rendererWithLikenessResolver:(id)arg0 schedulerProvider:(id)arg1 ;


@end


#endif