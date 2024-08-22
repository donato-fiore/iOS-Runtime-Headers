// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDROOTLAYOUT_H
#define TSDROOTLAYOUT_H

@class TSUPointerKeyDictionary;
@protocol TSDAdaptiveLayout;


#import "TSDAbstractLayout.h"
#import "TSDLayoutController.h"

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>

 {
    TSDLayoutController *mLayoutController;
    BOOL mSupportsAdaptiveLayout;
    TSUPointerKeyDictionary *mShiftedObjects;
}




-(BOOL)isRootLayoutForInspectorGeometry;
-(BOOL)providesGuidesForChildLayouts;
-(id)childLayoutsInRect:(struct CGRect )arg0 ;
-(id)initWithLayoutController:(id)arg0 ;
-(id)layoutController;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(struct CGPoint )applyAdaptiveLayoutTo:(id)arg0 info:(id)arg1 offset:(struct CGPoint )arg2 ;
-(void)beginDynamicAdaptiveLayout;
-(void)dealloc;
-(void)endDynamicAdaptiveLayout;


@end


#endif