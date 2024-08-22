// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRSPACE_H
#define XRSPACE_H

@class NSMutableString, NSMutableDictionary, NSMutableSet, NSString, NSOperationQueue;
@protocol XRMobileAgentStop;

#import <Foundation/Foundation.h>


@interface XRSpace : NSObject <XRMobileAgentStop>

 {
    BOOL _overridesQoS;
    NSMutableString *_tag;
    NSUInteger _seqNum;
    NSMutableDictionary *_userDataByToken;
    NSMutableSet *_notificationShims;
    NSString *_opName;
}


@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsOpNames; // ivar: _supportsOpNames


+(void)runWhenOperationFinishes:(id)arg0 block:(id)arg1 ;
-(BOOL)currentlyInThisSpace;
-(BOOL)isBusy;
-(BOOL)isOpValidForSpace:(id)arg0 ;
-(BOOL)isSerial;
-(NSUInteger)operationCount;
-(id)_scheduleOperationFromCurrentQueue:(id)arg0 ;
-(id)afterOperation:(id)arg0 block:(id)arg1 ;
-(id)afterOperation:(id)arg0 priority:(NSInteger)arg1 spaceBlock:(id)arg2 ;
-(id)afterOperation:(id)arg0 spaceBlock:(id)arg1 ;
-(id)afterOperations:(id)arg0 priority:(NSInteger)arg1 spaceBlock:(id)arg2 ;
-(id)afterOperationsRunBlock:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)spaceName;
-(id)storeUserData:(id)arg0 ;
-(id)userDataForToken:(id)arg0 ;
-(void)_postQueueStateChanged;
-(void)_removeNotificationShim:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)receiveMobileAgent:(id)arg0 ;
-(void)removeUserDataForToken:(id)arg0 ;
-(void)replaceUserData:(id)arg0 forToken:(id)arg1 ;
-(void)requestLocalNotification:(id)arg0 object:(id)arg1 observer:(id)arg2 block:(id)arg3 ;
-(void)setupVisitAfterOperation:(id)arg0 itinerary:(id)arg1 mode:(id)arg2 ;
-(void)stopObservationsOfObject:(id)arg0 forObserver:(id)arg1 ;


@end


#endif