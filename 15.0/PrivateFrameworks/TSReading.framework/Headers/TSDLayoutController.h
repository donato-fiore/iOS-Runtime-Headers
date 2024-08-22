// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDLAYOUTCONTROLLER_H
#define TSDLAYOUTCONTROLLER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "TSDCanvas.h"
#import "TSDRootLayout.h"
#import "TSDLayout.h"

@interface TSDLayoutController : NSObject {
    TSDCanvas *mCanvas;
    TSDRootLayout *mRootLayout;
    *__CFDictionary mLayoutsByInfo;
    NSMutableSet *mInvalidLayouts;
    NSMutableSet *mLayoutsNeedingRecreating;
    NSMutableSet *mInvalidChildrenLayouts;
    TSDLayout *mValidatingLayout;
}




+(id)allInteractiveLayoutControllers;
+(void)temporaryLayoutControllerForInfos:(id)arg0 useInBlock:(id)arg1 ;
-(BOOL)isLayoutOffscreen;
-(id)ancestorLayoutOfLayout:(id)arg0 orDelegateConformingToProtocol:(id)arg1 ;
-(id)canvas;
-(id)initWithCanvas:(id)arg0 ;
-(id)layoutForInfo:(id)arg0 ;
-(id)layoutForInfo:(id)arg0 childOfLayout:(id)arg1 ;
-(id)layoutGeometryProviderForLayout:(id)arg0 ;
-(id)layoutsForInfo:(id)arg0 ;
-(id)layoutsForInfos:(id)arg0 ;
-(id)layoutsInRect:(struct CGRect )arg0 ;
-(id)rootLayout;
-(id)sortLayoutsForDependencies:(id)arg0 ;
-(id)validatedLayoutForInfo:(id)arg0 ;
-(id)validatedLayoutForInfo:(id)arg0 childOfLayout:(id)arg1 ;
-(id)validatedLayoutsForInfo:(id)arg0 ;
-(struct CGRect )rectOfTopLevelLayouts;
-(void)dealloc;
-(void)i_registerLayout:(id)arg0 ;
-(void)i_removeAllLayouts;
-(void)i_unregisterLayout:(id)arg0 ;
-(void)invalidateChildrenOfLayout:(id)arg0 ;
-(void)invalidateLayout:(id)arg0 ;
-(void)invalidateLayoutForRecreation:(id)arg0 ;
-(void)preregisterLayout:(id)arg0 ;
-(void)setInfos:(id)arg0 ;
-(void)unregisterLayout:(id)arg0 ;
-(void)validateLayoutWithDependencies:(id)arg0 ;
-(void)validateLayouts;
-(void)validateLayouts:(id)arg0 ;
-(void)validateLayoutsWithDependencies:(id)arg0 ;
-(void)validateOrderedLayouts:(id)arg0 ;


@end


#endif