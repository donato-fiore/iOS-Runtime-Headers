// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRFRAMEACTIVITYMANAGER_H
#define XRFRAMEACTIVITYMANAGER_H

@class XRFrameActivity, NSString;
@protocol XRFrameActivityManagerPrivate, XRMobileAgentStop;

#import <Foundation/Foundation.h>


@interface XRFrameActivityManager : NSObject <XRFrameActivityManagerPrivate, XRMobileAgentStop>

 {
    shared_ptr<xray::scheduler::ActivityManager> _managerImpl;
    shared_ptr<xray::scheduler::ActivityManager> _secondTierManagerImpl;
    XRFrameActivity *_syncActivity;
    int _kdebugCodeBase;
    NSUInteger _signpostID;
    NSUInteger _ringSignpostID;
}


@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly, nonatomic) unsigned char currentSlot; // ivar: _currentSlot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_establishesAffinity;
+(BOOL)enableConcurrentActivities;
+(BOOL)supportsQoS;
+(int)_identifierForSignposting;
+(unsigned int)_activityQoS;
+(void)initialize;
-(*void)_managerImplPtr;
-(*void)_secondTierManagerImplPtr;
-(BOOL)holdBackArrivingAgent:(id)arg0 ;
-(BOOL)holdBackRevisitingAgent:(id)arg0 ;
-(id)init;
-(id)initWithRing:(id)arg0 ;
-(id)scheduleActivityAsOperation:(id)arg0 ;
-(void)_acquiredMinorFrame:(unsigned char)arg0 ;
-(void)_escortMinorFrameAgentToExit:(id)arg0 ;
-(void)_extendingMinorFrame:(unsigned char)arg0 ;
-(void)_finalShutdown;
-(void)_needsScheduling;
-(void)_prepareMinorFrameAgent:(id)arg0 ;
-(void)_reevaluateArrivingAgent:(id)arg0 ;
-(void)_shutdown;
-(void)_startingMajorFrame;
-(void)_underrunMinorFrame:(unsigned char)arg0 ;
-(void)_yieldingMinorFrame:(unsigned char)arg0 ;
-(void)activateNextMajorFrame;
-(void)dealloc;
-(void)enteringMinorFrame:(unsigned char)arg0 ;
-(void)extendingMinorFrame:(unsigned char)arg0 ;
-(void)performDuringMinorFrame:(id)arg0 ;
-(void)performOutsideMinorFrame:(id)arg0 ;
-(void)receiveMobileAgent:(id)arg0 ;
-(void)scheduleActivity:(id)arg0 ;
-(void)scheduleInactivity:(id)arg0 ;
-(void)setupVisitDuringMinorFrame:(id)arg0 agent:(id)arg1 mode:(id)arg2 ticket:(id)arg3 ;
-(void)startingMajorFrame;
-(void)underrunMinorFrame:(unsigned char)arg0 ;
-(void)yieldingMinorFrame:(unsigned char)arg0 ;


@end


#endif