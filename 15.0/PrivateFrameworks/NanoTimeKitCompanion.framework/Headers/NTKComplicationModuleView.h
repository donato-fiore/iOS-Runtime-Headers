// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONMODULEVIEW_H
#define NTKCOMPLICATIONMODULEVIEW_H

@class NSString;
@protocol NTKComplicationDisplay, NTKComplicationDisplayObserver;


#import "NTKModuleView.h"

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay>



@property (nonatomic) BOOL canUseCurvedText; // ivar: canUseCurvedText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<NTKComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL isXL; // ivar: _isXL
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;


+(id)_extraLargeAlarmImageProvider;
+(id)_extraLargeStopwatchImageProviderForDevice:(id)arg0 ;
+(id)_imageProviderForImageSymbolName:(id)arg0 imageAssetNamePrefix:(id)arg1 ;
+(id)_modularSmallAlarmImageProvider;
+(id)_modularSmallStopwatchImageProviderForDevice:(id)arg0 ;
+(id)largeModuleViewForComplicationType:(NSUInteger)arg0 ;
+(id)smallModuleViewForComplicationType:(NSUInteger)arg0 ;
-(id)_attributeEnDashesWithinString:(id)arg0 typographicTracking:(CGFloat)arg1 baseFont:(id)arg2 ;
-(id)_attributedStringWithText:(id)arg0 typographicTracking:(CGFloat)arg1 baseFont:(id)arg2 ;
-(id)_newImageViewSubview;
-(id)_newLabelSubview;
-(id)_newLabelSubviewWithFont:(id)arg0 ;
-(void)_setTypographicTracking:(CGFloat)arg0 andFont:(id)arg1 onAttributedString:(*id)arg2 inRange:(struct _NSRange )arg3 ;


@end


#endif