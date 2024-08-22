// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTEXPOSUREMONITOR_H
#define SXCOMPONENTEXPOSUREMONITOR_H

@class NSString, NSMutableSet;
@protocol SXViewportChangeListener, SXComponentControllerObserver, SXComponentExposureMonitor, SXHost;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener, SXComponentControllerObserver, SXComponentExposureMonitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *trackingComponents; // ivar: _trackingComponents
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)initWithViewport:(id)arg0 appStateMonitor:(id)arg1 componentController:(id)arg2 host:(id)arg3 ;
-(void)beginExposure:(id)arg0 ;
-(void)componentControllerDidPresent:(id)arg0 ;
-(void)conditionsChanged;
-(void)endExposure:(id)arg0 ;
-(void)onExposureOf:(id)arg0 then:(id)arg1 ;
// -(void)onExposureOf:(id)arg0 then:(id)arg1 when:(unk)arg2  ;
-(void)onExposureOf:(id)arg0 traits:(NSUInteger)arg1 then:(id)arg2 ;
// -(void)onExposureOf:(id)arg0 traits:(NSUInteger)arg1 then:(id)arg2 when:(unk)arg3  ;
-(void)performMonitoring;
-(void)stopTrackingExposureOfComponentView:(id)arg0 ;
-(void)trackExposureForTracking:(id)arg0 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 documentSizeDidChangeFromSize:(struct CGSize )arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif