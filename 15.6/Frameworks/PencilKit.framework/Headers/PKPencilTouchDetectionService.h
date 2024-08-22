// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPENCILTOUCHDETECTIONSERVICE_H
#define PKPENCILTOUCHDETECTIONSERVICE_H

@class NSString, FBSDisplayLayoutMonitor, NSXPCListener, NSUserDefaults, NSMutableDictionary, NSDictionary;
@protocol NSXPCListenerDelegate, _PKTouchDetectionProtocol, PKPencilTouchDetectionGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "PKPencilTouchDetectionGestureRecognizer.h"

@interface PKPencilTouchDetectionService : NSObject <NSXPCListenerDelegate, _PKTouchDetectionProtocol, PKPencilTouchDetectionGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPencilTouchDetectionGestureRecognizer *detectionGesture; // ivar: _detectionGesture
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // ivar: _displayLayoutMonitor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isListening; // ivar: _isListening
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSUserDefaults *pencilDefaults; // ivar: _pencilDefaults
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *timestamps; // ivar: _timestamps
@property (retain, nonatomic) NSDictionary *userInfoForNotification; // ivar: _userInfoForNotification
@property (nonatomic) BOOL wereFrontBoardOverlaysEnabled; // ivar: _wereFrontBoardOverlaysEnabled


+(id)sharedInstance;
+(void)beginObservingTouchesForDetection;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)timestampIndicatesRecentUsage:(id)arg0 ;
-(id)init;
-(id)stringForTouchDetectionPencilType:(NSInteger)arg0 ;
-(void)_nop:(id)arg0 ;
-(void)dealloc;
-(void)loadDefaultsIfNecessary;
-(void)loadTimestampsIfNecessary;
-(void)pencilType:(NSInteger)arg0 hasRecentlyBeenUsedWithCompletionHandler:(id)arg1 ;
-(void)persistTimestamps;
-(void)postUpdateNotificationIfNecessary;
-(void)reset:(id)arg0 ;
-(void)resumeConnectionIfIdle;
-(void)updateTimestampForType:(NSInteger)arg0 ;


@end


#endif