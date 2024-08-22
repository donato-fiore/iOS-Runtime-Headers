// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACEEDITVIEW_H
#define NTKFACEEDITVIEW_H

@class UIView, NSString, UIViewController<NTKFaceViewCustomEditing>;
@protocol NTKClockHardwareInput, NTKFaceEditViewDelegate;



@interface NTKFaceEditView : UIView <NTKClockHardwareInput>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKFaceEditViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableBreathingAnimationForComplications; // ivar: _disableBreathingAnimationForComplications
@property (nonatomic) NSInteger editMode; // ivar: _editMode
@property (readonly, nonatomic) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController; // ivar: _editingContentViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGRect )screenBottomAlignedKeylineLabelFrameForText:(id)arg0 ;
-(BOOL)_handlePhysicalButton:(NSUInteger)arg0 event:(NSUInteger)arg1 ;
-(BOOL)_wheelChangedWithEvent:(id)arg0 ;
-(BOOL)isTransitioningBetweenEditPages;
-(id)editingColorForColor:(id)arg0 ;
-(id)initWithFace:(id)arg0 ;
-(struct CGPoint )pageOffsetFromCenter:(NSInteger)arg0 ;
-(struct CGRect )cachedScreenBottomAlignedKeylineLabelFrameForText:(id)arg0 ;
-(struct CGRect )colorPickerFrame;
-(struct CGRect )keylineFrameAtSlot:(id)arg0 ;
-(void)activate;
-(void)addKeyline:(id)arg0 forKey:(id)arg1 tappable:(BOOL)arg2 editMode:(NSInteger)arg3 ;
-(void)applyEditorPresentationProgress:(CGFloat)arg0 fromFrame:(struct CGRect )arg1 toEditMode:(NSInteger)arg2 scaled:(BOOL)arg3 ;
-(void)applyEditorPresentationProgress:(CGFloat)arg0 toEditMode:(NSInteger)arg1 scaled:(BOOL)arg2 ;
-(void)applyTransformForCurrentPageView:(struct CGAffineTransform )arg0 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)deactivateWithCompletion:(id)arg0 ;
-(void)reloadColorPicker;
-(void)removeAllKeylinesForEditMode:(NSInteger)arg0 ;
-(void)restartBreathing;
-(void)selectKeylineForKey:(id)arg0 editMode:(NSInteger)arg1 ;
-(void)setBackgroundFillAlpha:(CGFloat)arg0 ;
-(void)setDeselectedKeylineFrame:(struct CGRect )arg0 forKey:(id)arg1 editMode:(NSInteger)arg2 ;
-(void)setForEditMode:(NSInteger)arg0 gestureDidScrollHandler:(id)arg1 ;
-(void)setForEditMode:(NSInteger)arg0 gestureDidStopHandler:(id)arg1 ;
-(void)setForEditMode:(NSInteger)arg0 gestureDiscreteScrollHandler:(id)arg1 ;
-(void)setForEditMode:(NSInteger)arg0 numberOfLisaValues:(NSUInteger)arg1 currentValue:(NSUInteger)arg2 valueHeight:(CGFloat)arg3 ;
-(void)setForEditMode:(NSInteger)arg0 numberOfLisaValues:(NSUInteger)arg1 currentValue:(NSUInteger)arg2 valueHeight:(CGFloat)arg3 animated:(BOOL)arg4 detentType:(NSUInteger)arg5 ;
-(void)setInfoText:(id)arg0 forEditMode:(NSInteger)arg1 ;
-(void)setLabelActiveAreaInsets:(struct UIEdgeInsets )arg0 forKey:(id)arg1 editMode:(NSInteger)arg2 ;
-(void)setLabelAlignment:(NSUInteger)arg0 forKey:(id)arg1 editMode:(NSInteger)arg2 ;
-(void)setLabelText:(id)arg0 forKey:(id)arg1 editMode:(NSInteger)arg2 ;
-(void)setSelectedKeylineFrame:(struct CGRect )arg0 forKey:(id)arg1 editMode:(NSInteger)arg2 ;
-(void)updateSelectionForKeylineAtSlot:(id)arg0 selected:(BOOL)arg1 ;
-(void)willActivate;
-(void)willDeactivate;


@end


#endif