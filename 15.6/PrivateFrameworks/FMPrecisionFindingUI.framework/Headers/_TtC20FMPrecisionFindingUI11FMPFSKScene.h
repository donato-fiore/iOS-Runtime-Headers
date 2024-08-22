// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC20FMPRECISIONFINDINGUI11FMPFSKSCENE_H
#define _TTC20FMPRECISIONFINDINGUI11FMPFSKSCENE_H

@class SKScene, NSString;
@protocol CLLocationManagerDelegate;



@interface _TtC20FMPrecisionFindingUI11FMPFSKScene : SKScene <CLLocationManagerDelegate>

 {
    ? style;
    ? config;
    ? experienceType;
    ? sceneSize;
    ? ringView;
    ? axisesNode;
    ? patternNode;
    ? previousHeading;
    ? motionManager;
    ? dotCountObservation;
    ? debugModeObservation;
    ? opacitySpring;
    ? lastRenderTime;
    ? isolationQueue;
    ? initialBearing;
    ? initialTouchDownLocation;
    ? usingDebuggingTouches;
    ? shouldApplyOpacity;
    ? opacity;
    ? presentedOpacity;
    ? altDelegate;
    ? isInteractivelyDebugging;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic) CGSize size;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)update:(CGFloat)arg0 ;


@end


#endif