// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDRAWABLEEDITOR_H
#define TSDDRAWABLEEDITOR_H

@class TSDMultiPaneController, NSString, NSSet;
@protocol TSDEditor;

#import <Foundation/Foundation.h>

#import "TSDDrawableInfo.h"
#import "TSDInteractiveCanvasController.h"
#import "TSKSelection.h"

@interface TSDDrawableEditor : NSObject <TSDEditor>

 {
    TSDMultiPaneController *mGraphicInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDDrawableInfo *firstInfo;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) TSDDrawableInfo *info;
@property (retain, nonatomic) NSSet *infos; // ivar: mInfos
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // ivar: mICC
@property (readonly, nonatomic) NSSet *layouts;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;


+(id)keyPathsForValuesAffectingFirstInfo;
+(id)keyPathsForValuesAffectingInfo;
+(id)keyPathsForValuesAffectingLayouts;
-(BOOL)canAddOrShowComment;
-(CGFloat)pictureFrameAssetScaleForNormalizedWidth:(CGFloat)arg0 ;
-(CGFloat)strokeWidthForNormalizedWidth:(CGFloat)arg0 ;
-(id)documentRoot;
-(id)imageForPreset:(id)arg0 size:(struct CGSize )arg1 ;
-(id)infosOfClass:(Class)arg0 ;
-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(id)selectedLayoutsSupportingFlipping;
-(id)selectedLayoutsSupportingInspectorPositioning;
-(id)selectedLayoutsSupportingRotation;
-(id)stroke;
-(id)strokeColor;
-(id)strokeColorPickerTitle;
-(id)strokeSwatches;
-(id)stylePresetKindForInspector;
-(id)topLevelInspectorAutosaveName;
-(id)viewControllerForMoreStyleOptions;
-(int)canPerformAction:(SEL)arg0 ;
-(int)canPerformEditorAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)applyStylePresetWithIndex:(id)arg0 ;
-(void)beginChangingStrokeWidth:(id)arg0 ;
-(void)dealloc;
-(void)didChangeStrokeWidth:(id)arg0 ;
-(void)endChangingStrokeWidth:(id)arg0 ;
-(void)presetSelected:(id)arg0 sender:(id)arg1 ;
-(void)setStroke:(id)arg0 ;
-(void)setStrokeColor:(id)arg0 ;
-(void)setStyleValue:(id)arg0 forStyleProperty:(int)arg1 ;
-(void)stylePresetInspector:(id)arg0 didSelectPreset:(id)arg1 ;
-(void)takePatternFromStroke:(id)arg0 withDefaultStroke:(id)arg1 ;


@end


#endif