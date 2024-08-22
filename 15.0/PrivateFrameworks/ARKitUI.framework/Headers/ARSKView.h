// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSKVIEW_H
#define ARSKVIEW_H

@class SKView, ARSession, NSMutableDictionary, NSSet, NSString;
@protocol ARInternalSessionObserver, ARSessionProviding, ARSKViewDelegate;



@interface ARSKView : SKView <ARInternalSessionObserver, ARSessionProviding>

 {
    ARSession *_session;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSSet *_lastFrameAnchors;
    NSInteger _interfaceOrientation;
    CGSize _viewportSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSKViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARSession *session;
@property (readonly) Class superclass;


-(id)_anchorForNode:(id)arg0 inFrame:(id)arg1 ;
-(id)anchorForNode:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 types:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nodeForAnchor:(id)arg0 ;
-(void)_updateAnchors:(id)arg0 camera:(id)arg1 ;
-(void)_updateNode:(id)arg0 forAnchor:(id)arg1 projectionMatrix:(struct ? )arg2 camera:(id)arg3 orientation:(NSInteger)arg4 ;
-(void)commonInit;
-(void)dealloc;
-(void)layoutSubviews;
-(void)session:(id)arg0 cameraDidChangeTrackingState:(id)arg1 ;
-(void)session:(id)arg0 didChangeGeoTrackingStatus:(id)arg1 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionShouldAttemptRelocalization:(id)arg0 completion:(id)arg1 ;
-(void)sessionWasInterrupted:(id)arg0 ;


@end


#endif