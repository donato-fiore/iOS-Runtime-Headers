// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDDETECTORQUEUEMANAGER_H
#define AXSDDETECTORQUEUEMANAGER_H

@class NSString, NSMutableSet;
@protocol AXSDDetectorStoreDelegate, AXSDDetectorQueueManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSDDetectorQueueManager : NSObject <AXSDDetectorStoreDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDDetectorQueueManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *detectorQueue; // ivar: _detectorQueue
@property (readonly) NSUInteger hash;
@property BOOL ready; // ivar: _ready
@property (readonly) Class superclass;


-(BOOL)prepareToListen;
-(id)currentDetectionTypes;
-(id)init;
-(void)_dequeueListenType:(id)arg0 ;
-(void)_queueListenType:(id)arg0 ;
-(void)addDetector:(id)arg0 ;
-(void)addListenType:(id)arg0 ;
-(void)detectorStore:(id)arg0 detectorsNeedUpdate:(id)arg1 toDetectors:(id)arg2 ;
-(void)detectorsReadyForDetectorStore:(id)arg0 ;
-(void)removeAllListenTypes;
-(void)removeDetector:(id)arg0 ;
-(void)removeListenType:(id)arg0 ;
-(void)stopListening;


@end


#endif