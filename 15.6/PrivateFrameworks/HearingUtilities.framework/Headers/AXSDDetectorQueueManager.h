// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDDETECTORQUEUEMANAGER_H
#define AXSDDETECTORQUEUEMANAGER_H

@class NSMutableSet, NSString;
@protocol AXSDUltronModelAssetManagerDelegate, AXSDDetectorQueueManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXUltronModelAssetManager.h"

@interface AXSDDetectorQueueManager : NSObject <AXSDUltronModelAssetManagerDelegate>

 {
    AXUltronModelAssetManager *_assetManager;
    NSMutableSet *_detectorQueue;
    BOOL _ready;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDDetectorQueueManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)prepareToListen;
-(id)currentDetectionTypes;
-(id)init;
-(void)_dequeueListenType:(id)arg0 ;
-(void)_queueListenType:(id)arg0 ;
-(void)addListenType:(id)arg0 ;
-(void)assets:(id)arg0 totalSizeExpected:(NSInteger)arg1 downloadProgressTotalWritten:(NSInteger)arg2 remainingTimeExpected:(CGFloat)arg3 isStalled:(BOOL)arg4 ;
-(void)assetsNotReadyForUltronManager:(id)arg0 ;
-(void)assetsReadyForUltronManager:(id)arg0 ;
-(void)removeAllListenTypes;
-(void)removeListenType:(id)arg0 ;
-(void)stopListening;


@end


#endif