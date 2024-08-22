// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVINTERFACEFACTORY_H
#define TVINTERFACEFACTORY_H

@class NSMutableDictionary, NSString;
@protocol TVInterfaceCreating;

#import <Foundation/Foundation.h>

#import "TVMLViewFactory.h"
#import "_TVLockupFactory.h"
#import "_TVControllerFactory.h"
#import "_TVTemplateFactory.h"
#import "TVStyleSheetRegistry.h"

@interface TVInterfaceFactory : NSObject <TVInterfaceCreating>

 {
    ? _extenderFlags;
    NSMutableDictionary *_viewCreatorsByKey;
    NSMutableDictionary *_viewControllerCreatorsByKey;
    NSMutableDictionary *_controllerTransitionCreatorsByKey;
    TVMLViewFactory *_viewFactory;
    _TVLockupFactory *_lockupFactory;
    _TVControllerFactory *_controllerFactory;
    _TVTemplateFactory *_templateFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TVInterfaceCreating> *extendedInterfaceCreator; // ivar: _extendedInterfaceCreator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TVStyleSheetRegistry *styleSheetRegistry; // ivar: _styleSheetRegistry
@property (readonly) Class superclass;


+(id)_URLForResource:(id)arg0 bundle:(id)arg1 ;
+(id)_tvmlResourceMap;
+(id)sharedInterfaceFactory;
+(void)initialize;
-(Class)_collectionViewCellClassForElement:(id)arg0 ;
-(Class)_extendedCollectionViewCellClassForIKElement:(id)arg0 ;
-(Class)collectionViewCellClassForElement:(id)arg0 ;
-(id)URLForResource:(id)arg0 ;
-(id)_controllerTransitionFromElement:(id)arg0 toElement:(id)arg1 forNavigationControllerOperation:(NSInteger)arg2 relativeToFrom:(BOOL)arg3 ;
-(id)_getImageFromURLorBundle:(id)arg0 ;
-(id)_imageProxyForResourceURL:(id)arg0 scaleToSize:(struct CGSize )arg1 ;
-(id)_imageProxyForSymbolURL:(id)arg0 imageSymbolConfiguration:(id)arg1 scaleToSize:(struct CGSize )arg2 ;
-(id)_imageProxyFromElement:(id)arg0 ;
-(id)_imageProxyFromElement:(id)arg0 withLayout:(id)arg1 ;
-(id)_navigationControllerForTabIdentifier:(id)arg0 ;
-(id)_resourceImageNamed:(id)arg0 ;
-(id)_styleSheetURLForTemplate:(id)arg0 ;
-(id)_viewControllerFromElement:(id)arg0 existingController:(id)arg1 ;
-(id)_viewControllerFromElement:(id)arg0 layout:(id)arg1 existingController:(id)arg2 ;
-(id)_viewFromElement:(id)arg0 existingView:(id)arg1 ;
-(id)_viewFromElement:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
-(id)imageForResource:(id)arg0 ;
-(id)init;
-(id)playerViewControllerForPlayer:(id)arg0 ;
-(id)viewControllerForElement:(id)arg0 existingViewController:(id)arg1 ;
-(id)viewForElement:(id)arg0 existingView:(id)arg1 ;
-(void)_darkerSystemColorStatusChanged:(id)arg0 ;
// -(void)_registerControllerTransitioningCreator:(id)arg0 withType:(unk)arg1  ;
-(void)_registerProductTemplateURL:(id)arg0 forTemplateName:(id)arg1 includeParentStyleSheets:(BOOL)arg2 ;
// -(void)_registerViewControllerCreator:(id)arg0 withType:(unk)arg1  ;
// -(void)_registerViewControllerCreatorEx:(id)arg0 withType:(unk)arg1  ;
// -(void)_registerViewCreator:(id)arg0 withType:(unk)arg1  ;
// -(void)_registerViewCreatorEx:(id)arg0 withType:(unk)arg1  ;
-(void)_willParseAppDocument:(id)arg0 forImplicitUpdates:(BOOL)arg1 ;
-(void)dealloc;
-(void)setup;


@end


#endif