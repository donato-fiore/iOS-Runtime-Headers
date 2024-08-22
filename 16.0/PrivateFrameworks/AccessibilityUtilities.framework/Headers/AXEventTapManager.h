// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXEVENTTAPMANAGER_H
#define AXEVENTTAPMANAGER_H

@class NSMutableArray, NSMutableSet, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface AXEventTapManager : NSObject {
    NSMutableArray *_eventTaps;
    NSMutableArray *_addedEventTapPairs;
    NSMutableSet *_removedEventTapIdentifiers;
    BOOL _isEnumeratingEventTaps;
    BOOL _shouldReorderEventTaps;
    NSRecursiveLock *_eventTapLock;
    *__IOHIDEventSystemClient _ioSystemPostBackClient;
}


@property (copy, nonatomic) id *installationEventRepPost; // ivar: _installationEventRepPost
@property (copy, nonatomic) id *installationGSCallback; // ivar: _installationGSCallback
@property (copy, nonatomic) id *installationHIDCallback; // ivar: _installationHIDCallback


+(id)sharedManager;
-(BOOL)_processHIDEvent:(struct __IOHIDEvent *)arg0 taskPort:(unsigned int)arg1 bundleId:(id)arg2 ;
-(id)_copyCurrentEventTapPairs;
-(id)_hidFilterListForPair:(id)arg0 wantsDigitizerEvents:(BOOL)arg1 wantsKeyboardEvents:(BOOL)arg2 wantsATVRemoteEvents:(BOOL)arg3 wantsLisaEvents:(BOOL)arg4 wantsMouseEvents:(BOOL)arg5 wantsAccessibilityEvents:(BOOL)arg6 ;
-(id)description;
-(id)init;
// -(id)installEventTap:(id)arg0 identifier:(unk)arg1 type:(id)arg2  ;
// -(id)installEventTap:(id)arg0 identifier:(unk)arg1 type:(id)arg2 skipDeviceMatching:(int)arg3 wantsDigitizerEvents:(BOOL)arg4 wantsKeyboardEvents:(BOOL)arg5 wantsATVRemoteEvents:(BOOL)arg6 wantsLisaEvents:(BOOL)arg7 wantsMouseEvents:(BOOL)arg8 wantsAccessibilityEvents:(BOOL)arg9  ;
// -(id)installEventTap:(id)arg0 identifier:(unk)arg1 type:(id)arg2 skipDeviceMatching:(int)arg3 wantsDigitizerEvents:(BOOL)arg4 wantsKeyboardEvents:(BOOL)arg5 wantsATVRemoteEvents:(BOOL)arg6 wantsLisaEvents:(BOOL)arg7 wantsMouseEvents:(BOOL)arg8 wantsAccessibilityEvents:(BOOL)arg9 matchingServiceHandler:(BOOL)arg10  ;
// -(id)installKeyboardEventTap:(id)arg0 identifier:(unk)arg1 matchingServiceHandler:(id)arg2  ;
-(void)_enumerateEventTapPairsUsingBlock:(id)arg0 ;
-(void)_handleTestIOHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_installEventTap:(id)arg0 skipDeviceMatching:(BOOL)arg1 wantsDigitizerEvents:(BOOL)arg2 wantsKeyboardEvents:(BOOL)arg3 wantsATVRemoteEvents:(BOOL)arg4 wantsLisaEvents:(BOOL)arg5 wantsMouseEvents:(BOOL)arg6 wantsAccessibilityEvents:(BOOL)arg7 ;
-(void)_installHIDFilter:(id)arg0 skipDeviceMatching:(BOOL)arg1 wantsDigitizerEvents:(BOOL)arg2 wantsKeyboardEvents:(BOOL)arg3 wantsATVRemoteEvents:(BOOL)arg4 wantsLisaEvents:(BOOL)arg5 wantsMouseEvents:(BOOL)arg6 wantsAccessibilityEvents:(BOOL)arg7 ;
-(void)_installSystemEventTap:(id)arg0 ;
-(void)_passivelyPeakAtHIDEventWithTarget:(*void)arg0 tapPair:(id)arg1 sender:(*void)arg2 event:(struct __IOHIDEvent *)arg3 axEventRep:(id)arg4 didHandle:(BOOL)arg5 ;
-(void)_removeHIDEventTapFilter:(id)arg0 ;
-(void)_reorderEventTaps;
-(void)_runMatchingServiceHandler:(id)arg0 ;
-(void)_setEventTapPriority:(id)arg0 priority:(int)arg1 ;
-(void)_setHIDEventTapCallback:(*void)arg0 ;
-(void)dealloc;
-(void)removeEventTap:(id)arg0 ;
-(void)runMatchingServiceHandlerForEventTap:(id)arg0 ;
-(void)sendEvent:(id)arg0 afterTap:(id)arg1 useGSEvent:(BOOL)arg2 namedTaps:(id)arg3 options:(NSUInteger)arg4 ;
-(void)sendHIDSystemEvent:(id)arg0 repostCreatorHIDEvent:(BOOL)arg1 senderID:(NSUInteger)arg2 ;
-(void)sendHIDSystemEvent:(id)arg0 senderID:(NSUInteger)arg1 ;
-(void)setEventTapPriority:(id)arg0 priority:(int)arg1 ;
-(void)setFailedToProcessInTimeCallback:(id)arg0 callback:(id)arg1 ;


@end


#endif