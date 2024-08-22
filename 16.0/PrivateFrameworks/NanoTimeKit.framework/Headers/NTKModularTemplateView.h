// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKMODULARTEMPLATEVIEW_H
#define NTKMODULARTEMPLATEVIEW_H

@class CLKComplicationTemplate, NSString, NSDate;
@protocol CDTemplateComplicationDisplay, CDComplicationDisplayObserver;


#import "NTKComplicationModuleView.h"

@interface NTKModularTemplateView : NTKComplicationModuleView <CDTemplateComplicationDisplay>



@property (nonatomic) BOOL canUseCurvedText;
@property (retain, nonatomic) CLKComplicationTemplate *complicationTemplate; // ivar: _complicationTemplate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (readonly) NSDate *timeTravelDate; // ivar: _timeTravelDate


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(BOOL)_useInvertedHighlightForColorScheme:(id)arg0 ;
// -(void)_enumerateColoringViewsSubviewsWithBlock:(id)arg0 invertedHighlight:(unk)arg1  ;
-(void)_propagateColorSchemeToSubviews:(id)arg0 ;
-(void)_setColorScheme:(id)arg0 propagateToSubviews:(BOOL)arg1 ;
-(void)_update;
-(void)applyFaceColorPalette:(id)arg0 units:(NSUInteger)arg1 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromFaceColorPalette:(id)arg1 toFaceColorPalette:(id)arg2 units:(NSUInteger)arg3 brightenedUnits:(NSUInteger)arg4 ;
-(void)setContainsOverrideFaceColor:(id)arg0 ;


@end


#endif