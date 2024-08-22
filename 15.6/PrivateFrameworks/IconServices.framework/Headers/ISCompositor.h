// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISCOMPOSITOR_H
#define ISCOMPOSITOR_H

@class NSMutableArray, CIContext;
@protocol ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISCompositor : NSObject

@property (readonly) BOOL canUseCoreImage;
@property (retain) NSMutableArray *elements; // ivar: _elements
@property (retain) NSObject<ISCompositorRecipe> *recipe;
@property NSUInteger renderingMode; // ivar: _renderingMode
@property (readonly) CIContext *sharedCIContext; // ivar: _sharedCIContext


-(id)filterForLayer:(id)arg0 scale:(CGFloat)arg1 resourceProvider:(id)arg2 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)init;
-(id)initWithRecipe:(id)arg0 ;
-(id)maskImageForLayer:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 resourceProvider:(id)arg3 ;
-(id)scaledImageFromContent:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 needsScaled:(*BOOL)arg3 ;
-(void)addElement:(id)arg0 ;
-(void)addElementWithRecipe:(id)arg0 resources:(id)arg1 ;
-(void)addResourcesFromDictionary:(id)arg0 ;
-(void)clearResources;
-(void)dealloc;
-(void)drawElement:(id)arg0 inContext:(id)arg1 ;
-(void)drawInContext:(id)arg0 ;
-(void)drawLayer:(id)arg0 resourceProvider:(id)arg1 inContext:(id)arg2 ;
-(void)reset;
-(void)setResource:(id)arg0 named:(id)arg1 ;


@end


#endif