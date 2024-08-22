// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBIOMETRICMONITORPEARLDATASOURCE_H
#define SBBIOMETRICMONITORPEARLDATASOURCE_H

@class BKDevicePearl, NSHashTable, NSString;
@protocol BKDevicePearlDelegate, SBUIBiometricResourceObserver, SBBiometricMonitorDataSource;

#import <Foundation/Foundation.h>


@interface SBBiometricMonitorPearlDataSource : NSObject <BKDevicePearlDelegate, SBUIBiometricResourceObserver, SBBiometricMonitorDataSource>

 {
    BKDevicePearl *_pearlDevice;
    NSHashTable *_observers;
    BOOL _matching;
    BOOL _faceDetecting;
    BOOL _poseIsMarginal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL matchRunning;
@property (readonly, nonatomic) BOOL poseIsMarginal;
@property (readonly, nonatomic) BOOL presenceDetectRunning;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPearlDevice:(id)arg0 ;
-(void)_forEachObserver:(id)arg0 ;
-(void)_setFaceDetecting:(BOOL)arg0 ;
-(void)_setMatching:(BOOL)arg0 ;
-(void)_updateFaceDetecting;
-(void)_updateMatching;
-(void)addObserver:(id)arg0 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)device:(id)arg0 pearlEventOccurred:(NSInteger)arg1 ;
-(void)device:(id)arg0 pearlStateChanged:(NSInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif