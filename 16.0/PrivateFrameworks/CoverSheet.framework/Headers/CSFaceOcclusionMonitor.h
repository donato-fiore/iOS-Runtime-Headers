// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFACEOCCLUSIONMONITOR_H
#define CSFACEOCCLUSIONMONITOR_H

@class NSString;
@protocol CSEventHandling, CSFaceOcclusionMonitorDelegate;

#import <Foundation/Foundation.h>


@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSFaceOcclusionMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger faceOcclusionsSinceScreenOn; // ivar: _faceOcclusionsSinceScreenOn
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_handleBiometricEvent:(NSUInteger)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(void)conformsToCSEventHandling;


@end


#endif