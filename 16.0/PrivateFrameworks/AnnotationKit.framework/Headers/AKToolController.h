// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTOOLCONTROLLER_H
#define AKTOOLCONTROLLER_H


#import <Foundation/Foundation.h>

#import "AKController.h"

@interface AKToolController : NSObject

@property (nonatomic) BOOL allInkEnabled; // ivar: _allInkEnabled
@property (weak) AKController *controller; // ivar: _controller
@property (readonly, nonatomic) BOOL isInDefaultMode;
@property (nonatomic) BOOL pencilInkEnabled; // ivar: _pencilInkEnabled
@property (nonatomic) NSUInteger toolMode; // ivar: _toolMode


+(void)cascadeAnnotations:(id)arg0 onPageController:(id)arg1 forPaste:(BOOL)arg2 ;
-(BOOL)isToolSenderEnabled:(id)arg0 ;
-(CGFloat)_modelBaseScaleFactorForNewAnnotation;
-(CGFloat)_strokeWidthForNewAnnotation;
-(NSUInteger)_arrowStyleForToolTag:(NSInteger)arg0 ;
-(NSUInteger)defaultToolMode;
-(id)_defaultFillColorForAnnotationOfClass:(Class)arg0 ;
-(id)_defaultHeartTypingAttributesWithFillColor:(id)arg0 ;
-(id)_defaultTextBoxTypingAttributes;
-(id)_defaultTypingAttributes;
-(id)_strokeColorForNewAnnotation;
-(id)createAnnotationOfType:(NSInteger)arg0 centeredAtPoint:(struct CGPoint )arg1 ;
-(id)initWithController:(id)arg0 ;
-(struct CGPoint )_defaultCenterForNewAnnotation;
-(struct CGRect )_centerBounds:(struct CGRect )arg0 atPoint:(struct CGPoint )arg1 ;
-(struct CGRect )_defaultRectangleForNewAnnotation:(id)arg0 centeredAtPoint:(struct CGPoint )arg1 ;
-(struct CGRect )_validatedRect:(struct CGRect )arg0 fitsInVisibleRegionOfOverlayView:(id)arg1 ownedByPageController:(id)arg2 centeredAtPoint:(struct CGPoint )arg3 ;
-(void)_peripheralAvailabilityDidUpdate:(id)arg0 ;
-(void)_setRectangleToFitTextOnTextAnnotation:(id)arg0 ;
-(void)addNewAnnotation:(id)arg0 onPageController:(id)arg1 shouldSelect:(BOOL)arg2 shouldCascade:(BOOL)arg3 ;
-(void)dealloc;
-(void)performToolActionForSender:(id)arg0 ;
-(void)resetToDefaultMode;
-(void)updateToolSenderState:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif