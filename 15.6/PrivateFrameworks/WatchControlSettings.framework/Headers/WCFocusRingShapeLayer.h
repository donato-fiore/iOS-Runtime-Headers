// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCFOCUSRINGSHAPELAYER_H
#define WCFOCUSRINGSHAPELAYER_H

@class CAShapeLayer, NSString;
@protocol WatchControlSettingsObserver;



@interface WCFocusRingShapeLayer : CAShapeLayer <WatchControlSettingsObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger focusRingColor; // ivar: _focusRingColor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL increasedContrast; // ivar: _increasedContrast
@property (retain, nonatomic) CAShapeLayer *innerFocusOutlineLayer; // ivar: _innerFocusOutlineLayer
@property (retain, nonatomic) CAShapeLayer *outerFocusOutlineLayer; // ivar: _outerFocusOutlineLayer
@property (readonly) Class superclass;


+(id)clearLayer;
+(id)focusLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)parentLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)selectedLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)selectedParentLayerForUserInterfaceStyle:(NSInteger)arg0 ;
-(CGFloat)scaledOutlineWidth:(CGFloat)arg0 ;
-(id)strokeColorForFocusOutline;
-(id)viewTintColor;
-(void)dealloc;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)updateAppearance;
-(void)updateCachedSettings;
-(void)updateFocusOutlinePath;
-(void)watchControlSettingsDidChange:(id)arg0 ;


@end


#endif