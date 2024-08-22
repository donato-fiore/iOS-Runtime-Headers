// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ISCOMPOSITORELEMENT_H
#define _ISCOMPOSITORELEMENT_H

@class NSString, NSMutableDictionary;
@protocol ISCompositorElement, ISCompositorResourceProvider, ISCompositorRecipe;

#import <Foundation/Foundation.h>


@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<ISCompositorRecipe> *recipe; // ivar: _recipe
@property (readonly) NSMutableDictionary *resourceByName; // ivar: _resourceByName
@property (readonly) NSObject<ISCompositorResourceProvider> *resourceProvider;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithRecipe:(id)arg0 resources:(id)arg1 ;
-(id)resourceNamed:(id)arg0 ;
-(void)addResourcesFromDictionary:(id)arg0 ;
-(void)clearResources;
-(void)setResource:(id)arg0 forName:(id)arg1 ;


@end


#endif