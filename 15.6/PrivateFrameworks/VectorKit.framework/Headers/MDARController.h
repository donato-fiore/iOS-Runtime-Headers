// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDARCONTROLLER_H
#define MDARCONTROLLER_H

@class ARPositionalTrackingConfiguration, NSString, ARSession;
@protocol ARSessionDelegate, MDARControllerDelegate;

#import <Foundation/Foundation.h>


@interface MDARController : NSObject <ARSessionDelegate>

 {
    NSUInteger _trackingState;
    NSUInteger _trackingStateReason;
    ARPositionalTrackingConfiguration *_sessionConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<MDARControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ARSession *session; // ivar: _session
@property (readonly, nonatomic) NSUInteger sessionInterruptedReason; // ivar: _sessionInterruptedReason
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(NSUInteger)vkARTrackingStateFromARTrackingState:(NSInteger)arg0 ;
+(NSUInteger)vkARTrackingStateReasonFromARTrackingStateReason:(NSInteger)arg0 ;
-(id)init;
-(void)_avCaptureSessionWasInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)run:(BOOL)arg0 ;
-(void)session:(id)arg0 cameraDidChangeTrackingState:(id)arg1 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;


@end


#endif