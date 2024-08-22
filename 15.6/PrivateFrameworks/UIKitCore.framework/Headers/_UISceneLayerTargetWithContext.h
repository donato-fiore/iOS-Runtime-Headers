// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCENELAYERTARGETWITHCONTEXT_H
#define _UISCENELAYERTARGETWITHCONTEXT_H

@class NSString;
@protocol UISceneLayerTarget;

#import <Foundation/Foundation.h>


@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget>

 {
    id *_context;
    NSUInteger _equalityType;
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesLayer:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithContext:(id)arg0 equalityType:(NSUInteger)arg1 matchingBlock:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif