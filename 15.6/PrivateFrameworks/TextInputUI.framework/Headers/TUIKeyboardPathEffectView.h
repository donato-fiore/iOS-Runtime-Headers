// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIKEYBOARDPATHEFFECTVIEW_H
#define TUIKEYBOARDPATHEFFECTVIEW_H

@class UIView, NSString, MTKView, NSMutableArray, CADisplayLink, NSMutableIndexSet;
@protocol TUIKeyboardPathRendererDataSource;


#import "TUIKBHandwritingQuadCurvePointFIFO.h"
#import "TUIKeyboardPathRenderer.h"

@interface TUIKeyboardPathEffectView : UIView <TUIKeyboardPathRendererDataSource>



@property (nonatomic) BOOL createdMTKView; // ivar: _createdMTKView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL done; // ivar: _done
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL increasedContrastEnabled; // ivar: _increasedContrastEnabled
@property (retain, nonatomic) MTKView *mtkView; // ivar: _mtkView
@property (retain, nonatomic) NSMutableArray *paths; // ivar: _paths
@property (retain, nonatomic) CADisplayLink *pointDecayDisplayLink; // ivar: _pointDecayDisplayLink
@property (retain, nonatomic) NSMutableIndexSet *pointDecayQueue; // ivar: _pointDecayQueue
@property (retain, nonatomic) TUIKBHandwritingQuadCurvePointFIFO *pointInterpolator; // ivar: _pointInterpolator
@property (retain, nonatomic) TUIKeyboardPathRenderer *renderer; // ivar: _renderer
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


-(NSInteger)keyboardAppearance;
-(id)_currentPath;
-(id)_pushNewPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)textEffectsVisibilityLevel;
-(struct ? )_currentThemeSettings;
-(void)_addDrawingPoint:(struct CGPoint )arg0 force:(CGFloat)arg1 sentinel:(BOOL)arg2 ;
-(void)_clearPointInterpolators;
-(void)accessibilityValueChanged:(id)arg0 ;
-(void)addPoint:(struct CGPoint )arg0 force:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(void)buildOut;
-(void)createMTKViewIfNecessary;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)reset;
-(void)updatePaths;


@end


#endif