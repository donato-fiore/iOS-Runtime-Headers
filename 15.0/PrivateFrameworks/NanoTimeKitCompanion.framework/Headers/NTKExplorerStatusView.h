// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKEXPLORERSTATUSVIEW_H
#define NTKEXPLORERSTATUSVIEW_H

@class UIView, NSArray, UIColor, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKExplorerDotColorOptions.h"
#import "NTKExplorerDotLayoutConstraints.h"

@interface NTKExplorerStatusView : UIView <CLKMonochromeComplicationView>

 {
    NSArray *_dotLayers;
    BOOL _observing;
    NSInteger _targetDotPosition;
}


@property (readonly, nonatomic) UIColor *connectedDotBackgroundColor;
@property (readonly, nonatomic) UIColor *connectedDotColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat dotBorderWidth;
@property (retain, nonatomic) NTKExplorerDotColorOptions *dotColorOptions; // ivar: _dotColorOptions
@property (readonly) CGFloat dotDiameter;
@property (retain, nonatomic) NTKExplorerDotLayoutConstraints *dotLayoutConstraints; // ivar: _dotLayoutConstraints
@property (readonly) CGFloat dotSpacing;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *noServiceDotColor;
@property (readonly) CGFloat noServiceDotHeight;
@property (readonly, nonatomic) NSInteger position; // ivar: _position
@property (nonatomic) BOOL showsFullSignalStrength; // ivar: _showsFullSignalStrength
@property (nonatomic) NSInteger signalStrengthBars; // ivar: _signalStrengthBars
@property (readonly) Class superclass;
@property (nonatomic) BOOL tritiumIsOn; // ivar: _tritiumIsOn


-(id)connectivityDotBackingColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 dotLayoutConstraints:(id)arg1 dotColorOptions:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutDotLayers;
-(void)_updateDotFillStates;
-(void)setDotPosition:(NSInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif