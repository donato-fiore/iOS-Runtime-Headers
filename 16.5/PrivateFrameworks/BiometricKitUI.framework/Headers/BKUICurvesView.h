// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUICURVESVIEW_H
#define BKUICURVESVIEW_H

@class UIView, NSMutableArray, UIColor, CABasicAnimation, NSCondition, NSXMLParser, UIBezierPath, CAShapeLayer, NSString, NSNumber;
@protocol NSXMLParserDelegate, CAAnimationDelegate, OS_os_log;



@interface BKUICurvesView : UIView <NSXMLParserDelegate, CAAnimationDelegate>

 {
    NSMutableArray *_pathLayers;
    UIColor *_color;
    NSUInteger _currentLayer;
    NSUInteger _preEstimateLayer;
    float _progress;
    BOOL _estimateFailed;
    BOOL _estimating;
    CABasicAnimation *_lastAnimation;
    CGFloat _lastRatio;
    NSCondition *_initCondition;
    BOOL _inited;
    NSXMLParser *_parser;
    UIBezierPath *_wholePath;
    NSMutableArray *_paths;
    CAShapeLayer *_fingerLayer;
    NSObject<OS_os_log> *bkui_curves_view_log;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property float progress;
@property (retain) NSNumber *speed; // ivar: _speed
@property (nonatomic) CGSize sublayerSize; // ivar: _sublayerSize
@property (readonly) Class superclass;


-(NSUInteger)_animateFromLayer:(NSUInteger)arg0 toProgress:(float)arg1 withColor:(id)arg2 ;
-(struct CGPoint )_getPoint:(id)arg0 ;
-(void)_addEstimateWatchDog;
-(void)_animateEstimateFailure;
-(void)_animateFromLayer:(NSUInteger)arg0 toLayer:(NSUInteger)arg1 withColor:(id)arg2 ;
-(void)_checkEstimateFailedAfterAnimation:(id)arg0 ;
-(void)_removeEstimateWatchDog;
-(void)_resetEstimate:(id)arg0 ;
-(void)_resetLayers;
-(void)_startAnimation:(NSUInteger)arg0 withColor:(id)arg1 isLast:(BOOL)arg2 ;
-(void)_waitForInit;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)estimateFailed;
-(void)estimateProgress:(float)arg0 ;
-(void)loadDataFromXML:(id)arg0 name:(id)arg1 color:(id)arg2 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)setSublayersSize:(struct CGSize )arg0 ;


@end


#endif