// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSDKSHOTDETECTORQUEUEMANAGER_H
#define AXSDKSHOTDETECTORQUEUEMANAGER_H

@class NSMutableSet, NSString;
@protocol AXSDUltronModelAssetManagerDelegate, AXSDKShotDetectorQueueManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXUltronModelAssetManager.h"

@interface AXSDKShotDetectorQueueManager : NSObject <AXSDUltronModelAssetManagerDelegate>

 {
    AXUltronModelAssetManager *_assetManager;
    NSMutableSet *_detectorQueue;
    BOOL _ready;
    BOOL _queueGeneralDetector;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDKShotDetectorQueueManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)currentGeneralDetectorIsValid;
-(BOOL)prepareToListen;
-(id)currentDetectionTypes;
-(id)init;
-(void)_dequeueListenType:(id)arg0 ;
-(void)_queueListenType:(id)arg0 ;
-(void)addGeneralApplianceDetector;
-(void)addListenType:(id)arg0 ;
-(void)assets:(id)arg0 totalSizeExpected:(NSInteger)arg1 downloadProgressTotalWritten:(NSInteger)arg2 remainingTimeExpected:(CGFloat)arg3 isStalled:(BOOL)arg4 ;
-(void)assetsNotReadyForUltronManager:(id)arg0 ;
-(void)assetsReadyForUltronManager:(id)arg0 ;
-(void)removeAllListenTypes;
-(void)removeGeneralApplianceDetector;
-(void)removeListenType:(id)arg0 ;
-(void)stopListening;


@end


#endif