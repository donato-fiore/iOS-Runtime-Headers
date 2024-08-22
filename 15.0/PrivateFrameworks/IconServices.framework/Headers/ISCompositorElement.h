// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISCOMPOSITORELEMENT_H
#define ISCOMPOSITORELEMENT_H

@class NSDictionary, NSString;
@protocol ISCompositorResourceProvider, ISCompositorElement, ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface ISCompositorElement : NSObject <ISCompositorResourceProvider, ISCompositorElement>



@property (readonly) NSDictionary *additionalResources; // ivar: _additionalResources
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<ISCompositorRecipe> *recipe; // ivar: _recipe
@property (readonly) NSObject<ISCompositorResourceProvider> *resourceProvider; // ivar: _resourceProvider
@property (readonly) Class superclass;


-(id)initWithRecipe:(id)arg0 resourceProvider:(id)arg1 ;
-(id)initWithRecipe:(id)arg0 resourceProvider:(id)arg1 additionalResources:(id)arg2 ;
-(id)resourceForKey:(id)arg0 ;
-(id)resourceNamed:(id)arg0 ;


@end


#endif